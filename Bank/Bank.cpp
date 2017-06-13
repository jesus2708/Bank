#include "stdafx.h"  //________________________________________ Bank.cpp
#include "Bank.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Bank app;
	return app.BeginDialog(IDI_Bank, hInstance);
}

void Bank::Window_Open(Win::Event& e)
{
}

void Bank::btCalcular_Click(Win::Event& e)
{
	double presen = tbxPresente.DoubleValue;
	int mes = tbxMeses.IntValue;
	if (presen > 5000)
	{
		double presente = (1)+(presen * .015);
		double futuro = pow(presente,mes);
		this->tbxFuturo.DoubleValue = futuro+presen;
	}
	else
	{
		double presente = (1) + (presen * .0022);
		double futuro = pow(presente, mes);
		this->tbxFuturo.DoubleValue = futuro+presen;
	}
}

