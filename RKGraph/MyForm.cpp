#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int __stdcall WinMain(char* argv[], char* argn)
{
	double y = 0.0, z = 0.0;
	RKSecondOrder("x*(y'^2)-(y^2)",0, 1, 0, 0.2, &y, &z);

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	LayoutTut::MyForm form;

	Application::Run(%form);
	return 0;
}

