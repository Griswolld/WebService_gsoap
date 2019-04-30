
// WeatherTstDlg.cpp : 实现文件
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

//使用时添加这个头文件 
#include "soapStub.h"

// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
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


// CWeatherTstDlg 对话框




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


// CWeatherTstDlg 消息处理程序

BOOL CWeatherTstDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
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

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CWeatherTstDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CWeatherTstDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CWeatherTstDlg::OnBnClickedGetInfo()
{
	struct soap weatherSoap;
	int nResult = 0;
	soap_init(&weatherSoap);
	//soap_set_mode(&weatherSoap,SOAP_C_MBSTRING); //没什么鸟用
	// soap_set_namespaces(&weatherSoap, WeatherWebServiceSoap);

	//该函数是客户端调用的主要函数，后面几个参数和add.h中声明的一样，前面多了个参数，函数名是接口函数名ns__add前面加上soap_call_
	_ns1__getWeatherbyCityName  city;
	_ns1__getWeatherbyCityNameResponse  res;

	WCHAR suzhou[] = L"苏州"; //都使用宽字节
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
