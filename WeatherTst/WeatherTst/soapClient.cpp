/* soapClient.cpp
   Generated by gSOAP 2.8.70 for myWeather.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapClient.cpp ver 2.8.70 2019-04-29 09:49:33 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__getSupportCity(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__getSupportCity *ns1__getSupportCity, _ns1__getSupportCityResponse &ns1__getSupportCityResponse)
{	struct __ns1__getSupportCity soap_tmp___ns1__getSupportCity;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getSupportCity";
	soap_tmp___ns1__getSupportCity.ns1__getSupportCity = ns1__getSupportCity;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getSupportCity(soap, &soap_tmp___ns1__getSupportCity);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getSupportCity(soap, &soap_tmp___ns1__getSupportCity, "-ns1:getSupportCity", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getSupportCity(soap, &soap_tmp___ns1__getSupportCity, "-ns1:getSupportCity", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getSupportCityResponse*>(&ns1__getSupportCityResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getSupportCityResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getSupportCityResponse.soap_get(soap, "ns1:getSupportCityResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__getSupportProvince(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__getSupportProvince *ns1__getSupportProvince, _ns1__getSupportProvinceResponse &ns1__getSupportProvinceResponse)
{	struct __ns1__getSupportProvince soap_tmp___ns1__getSupportProvince;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getSupportProvince";
	soap_tmp___ns1__getSupportProvince.ns1__getSupportProvince = ns1__getSupportProvince;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getSupportProvince(soap, &soap_tmp___ns1__getSupportProvince);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getSupportProvince(soap, &soap_tmp___ns1__getSupportProvince, "-ns1:getSupportProvince", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getSupportProvince(soap, &soap_tmp___ns1__getSupportProvince, "-ns1:getSupportProvince", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getSupportProvinceResponse*>(&ns1__getSupportProvinceResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getSupportProvinceResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getSupportProvinceResponse.soap_get(soap, "ns1:getSupportProvinceResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__getSupportDataSet(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__getSupportDataSet *ns1__getSupportDataSet, _ns1__getSupportDataSetResponse &ns1__getSupportDataSetResponse)
{	struct __ns1__getSupportDataSet soap_tmp___ns1__getSupportDataSet;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getSupportDataSet";
	soap_tmp___ns1__getSupportDataSet.ns1__getSupportDataSet = ns1__getSupportDataSet;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getSupportDataSet(soap, &soap_tmp___ns1__getSupportDataSet);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getSupportDataSet(soap, &soap_tmp___ns1__getSupportDataSet, "-ns1:getSupportDataSet", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getSupportDataSet(soap, &soap_tmp___ns1__getSupportDataSet, "-ns1:getSupportDataSet", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getSupportDataSetResponse*>(&ns1__getSupportDataSetResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getSupportDataSetResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getSupportDataSetResponse.soap_get(soap, "ns1:getSupportDataSetResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__getWeatherbyCityName(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__getWeatherbyCityName *ns1__getWeatherbyCityName, _ns1__getWeatherbyCityNameResponse &ns1__getWeatherbyCityNameResponse)
{	struct __ns1__getWeatherbyCityName soap_tmp___ns1__getWeatherbyCityName;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getWeatherbyCityName";
	soap_tmp___ns1__getWeatherbyCityName.ns1__getWeatherbyCityName = ns1__getWeatherbyCityName;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getWeatherbyCityName(soap, &soap_tmp___ns1__getWeatherbyCityName);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getWeatherbyCityName(soap, &soap_tmp___ns1__getWeatherbyCityName, "-ns1:getWeatherbyCityName", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getWeatherbyCityName(soap, &soap_tmp___ns1__getWeatherbyCityName, "-ns1:getWeatherbyCityName", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getWeatherbyCityNameResponse*>(&ns1__getWeatherbyCityNameResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getWeatherbyCityNameResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getWeatherbyCityNameResponse.soap_get(soap, "ns1:getWeatherbyCityNameResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__getWeatherbyCityNamePro(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__getWeatherbyCityNamePro *ns1__getWeatherbyCityNamePro, _ns1__getWeatherbyCityNameProResponse &ns1__getWeatherbyCityNameProResponse)
{	struct __ns1__getWeatherbyCityNamePro soap_tmp___ns1__getWeatherbyCityNamePro;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getWeatherbyCityNamePro";
	soap_tmp___ns1__getWeatherbyCityNamePro.ns1__getWeatherbyCityNamePro = ns1__getWeatherbyCityNamePro;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getWeatherbyCityNamePro(soap, &soap_tmp___ns1__getWeatherbyCityNamePro);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getWeatherbyCityNamePro(soap, &soap_tmp___ns1__getWeatherbyCityNamePro, "-ns1:getWeatherbyCityNamePro", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getWeatherbyCityNamePro(soap, &soap_tmp___ns1__getWeatherbyCityNamePro, "-ns1:getWeatherbyCityNamePro", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getWeatherbyCityNameProResponse*>(&ns1__getWeatherbyCityNameProResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getWeatherbyCityNameProResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getWeatherbyCityNameProResponse.soap_get(soap, "ns1:getWeatherbyCityNameProResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__getSupportCity_(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__getSupportCity *ns1__getSupportCity, _ns1__getSupportCityResponse &ns1__getSupportCityResponse)
{	struct __ns1__getSupportCity_ soap_tmp___ns1__getSupportCity_;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getSupportCity";
	soap_tmp___ns1__getSupportCity_.ns1__getSupportCity = ns1__getSupportCity;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getSupportCity_(soap, &soap_tmp___ns1__getSupportCity_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getSupportCity_(soap, &soap_tmp___ns1__getSupportCity_, "-ns1:getSupportCity", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getSupportCity_(soap, &soap_tmp___ns1__getSupportCity_, "-ns1:getSupportCity", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getSupportCityResponse*>(&ns1__getSupportCityResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getSupportCityResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getSupportCityResponse.soap_get(soap, "ns1:getSupportCityResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__getSupportProvince_(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__getSupportProvince *ns1__getSupportProvince, _ns1__getSupportProvinceResponse &ns1__getSupportProvinceResponse)
{	struct __ns1__getSupportProvince_ soap_tmp___ns1__getSupportProvince_;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getSupportProvince";
	soap_tmp___ns1__getSupportProvince_.ns1__getSupportProvince = ns1__getSupportProvince;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getSupportProvince_(soap, &soap_tmp___ns1__getSupportProvince_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getSupportProvince_(soap, &soap_tmp___ns1__getSupportProvince_, "-ns1:getSupportProvince", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getSupportProvince_(soap, &soap_tmp___ns1__getSupportProvince_, "-ns1:getSupportProvince", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getSupportProvinceResponse*>(&ns1__getSupportProvinceResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getSupportProvinceResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getSupportProvinceResponse.soap_get(soap, "ns1:getSupportProvinceResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__getSupportDataSet_(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__getSupportDataSet *ns1__getSupportDataSet, _ns1__getSupportDataSetResponse &ns1__getSupportDataSetResponse)
{	struct __ns1__getSupportDataSet_ soap_tmp___ns1__getSupportDataSet_;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getSupportDataSet";
	soap_tmp___ns1__getSupportDataSet_.ns1__getSupportDataSet = ns1__getSupportDataSet;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getSupportDataSet_(soap, &soap_tmp___ns1__getSupportDataSet_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getSupportDataSet_(soap, &soap_tmp___ns1__getSupportDataSet_, "-ns1:getSupportDataSet", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getSupportDataSet_(soap, &soap_tmp___ns1__getSupportDataSet_, "-ns1:getSupportDataSet", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getSupportDataSetResponse*>(&ns1__getSupportDataSetResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getSupportDataSetResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getSupportDataSetResponse.soap_get(soap, "ns1:getSupportDataSetResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__getWeatherbyCityName_(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__getWeatherbyCityName *ns1__getWeatherbyCityName, _ns1__getWeatherbyCityNameResponse &ns1__getWeatherbyCityNameResponse)
{	struct __ns1__getWeatherbyCityName_ soap_tmp___ns1__getWeatherbyCityName_;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getWeatherbyCityName";
	soap_tmp___ns1__getWeatherbyCityName_.ns1__getWeatherbyCityName = ns1__getWeatherbyCityName;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getWeatherbyCityName_(soap, &soap_tmp___ns1__getWeatherbyCityName_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getWeatherbyCityName_(soap, &soap_tmp___ns1__getWeatherbyCityName_, "-ns1:getWeatherbyCityName", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getWeatherbyCityName_(soap, &soap_tmp___ns1__getWeatherbyCityName_, "-ns1:getWeatherbyCityName", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getWeatherbyCityNameResponse*>(&ns1__getWeatherbyCityNameResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getWeatherbyCityNameResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getWeatherbyCityNameResponse.soap_get(soap, "ns1:getWeatherbyCityNameResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__getWeatherbyCityNamePro_(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__getWeatherbyCityNamePro *ns1__getWeatherbyCityNamePro, _ns1__getWeatherbyCityNameProResponse &ns1__getWeatherbyCityNameProResponse)
{	struct __ns1__getWeatherbyCityNamePro_ soap_tmp___ns1__getWeatherbyCityNamePro_;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://www.webxml.com.cn/WebServices/WeatherWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getWeatherbyCityNamePro";
	soap_tmp___ns1__getWeatherbyCityNamePro_.ns1__getWeatherbyCityNamePro = ns1__getWeatherbyCityNamePro;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getWeatherbyCityNamePro_(soap, &soap_tmp___ns1__getWeatherbyCityNamePro_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getWeatherbyCityNamePro_(soap, &soap_tmp___ns1__getWeatherbyCityNamePro_, "-ns1:getWeatherbyCityNamePro", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getWeatherbyCityNamePro_(soap, &soap_tmp___ns1__getWeatherbyCityNamePro_, "-ns1:getWeatherbyCityNamePro", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getWeatherbyCityNameProResponse*>(&ns1__getWeatherbyCityNameProResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getWeatherbyCityNameProResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getWeatherbyCityNameProResponse.soap_get(soap, "ns1:getWeatherbyCityNameProResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.cpp */