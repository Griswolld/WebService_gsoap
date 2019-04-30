
// WeatherTstDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "WeatherTst.h"
#include "WeatherTstDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#include <vector>
#include <string>
using namespace std;

//ʹ��ʱ������ͷ�ļ� 
#include "soapStub.h"

// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CWeatherTstDlg �Ի���




CWeatherTstDlg::CWeatherTstDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CWeatherTstDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CWeatherTstDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_RICH_TEXT, m_ctrRich);
}

BEGIN_MESSAGE_MAP(CWeatherTstDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDB_GET_INFO, &CWeatherTstDlg::OnBnClickedGetInfo)
END_MESSAGE_MAP()


// CWeatherTstDlg ��Ϣ�������

BOOL CWeatherTstDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CWeatherTstDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CWeatherTstDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CWeatherTstDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CWeatherTstDlg::OnBnClickedGetInfo()
{
	struct soap weatherSoap;
	int nResult = 0;
	soap_init(&weatherSoap);
	//soap_set_mode(&weatherSoap,SOAP_C_MBSTRING); //ûʲô����
	// soap_set_namespaces(&weatherSoap, WeatherWebServiceSoap);

	//�ú����ǿͻ��˵��õ���Ҫ���������漸��������add.h��������һ����ǰ����˸��������������ǽӿں�����ns__addǰ�����soap_call_
	_ns1__getWeatherbyCityName  city;
	_ns1__getWeatherbyCityNameResponse  res;

	WCHAR suzhou[] = L"����"; //��ʹ�ÿ��ֽ�
	city.theCityName = suzhou;
	nResult = soap_call___ns1__getWeatherbyCityName(&weatherSoap,NULL,NULL,&city,res);
	if(weatherSoap.error)
	{
		soap_print_fault(&weatherSoap, stderr); 
	} 
	else
	{
		ns1__ArrayOfString *caStringRes = res.getWeatherbyCityNameResult;
		vector<wstring>::iterator	itr_begin = caStringRes->string.begin();
		vector<wstring>::iterator    itr_end = caStringRes->string.end();

		CString	strTmp,strRes;
		for(vector<wstring>::iterator itr=itr_begin; itr!=itr_end; ++itr)
		{
			wstring str = *itr;
			strTmp = gfun.fnWideCharToMultiByte(str.c_str());
			strRes += strTmp;
		}

		m_ctrRich.Clear();
		m_ctrRich.SetWindowText(strRes);
		
	}
	
	soap_end(&weatherSoap);
	soap_done(&weatherSoap);
}
