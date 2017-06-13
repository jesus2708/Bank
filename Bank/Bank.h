#pragma once  //______________________________________ Bank.h  
#include "Resource.h"
class Bank: public Win::Dialog
{
public:
	Bank()
	{
	}
	~Bank()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxPresente;
	Win::Button btCalcular;
	Win::Label lb2;
	Win::Textbox tbxFuturo;
	Win::Textbox tbxMeses;
	Win::Label lb3;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(14.68438);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.54000);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Bank";
		lb1.CreateX(NULL, L"Presente", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.31750, 0.66146, 2.19604, 0.60854, hWnd, 1000);
		tbxPresente.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.80458, 0.66146, 2.40771, 0.60854, hWnd, 1001);
		btCalcular.CreateX(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 5.68854, 0.58208, 3.22792, 0.68792, hWnd, 1002);
		lb2.CreateX(NULL, L"Futuro", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 9.33979, 0.66146, 2.32833, 0.60854, hWnd, 1003);
		tbxFuturo.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 11.98563, 0.66146, 2.51354, 0.60854, hWnd, 1004);
		tbxMeses.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.85750, 1.64042, 2.38125, 0.60854, hWnd, 1005);
		lb3.CreateX(NULL, L"Meses", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.31750, 1.74625, 2.16958, 0.60854, hWnd, 1006);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		tbxPresente.Font = fontArial009A;
		btCalcular.Font = fontArial009A;
		lb2.Font = fontArial009A;
		tbxFuturo.Font = fontArial009A;
		tbxMeses.Font = fontArial009A;
		lb3.Font = fontArial009A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) {btCalcular_Click(e); return true;}
		return false;
	}
};
