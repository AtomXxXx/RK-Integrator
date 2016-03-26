#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int __stdcall WinMain(char* argv[], char* argn)
{
	double y = 0.0, z = 0.0;
	RKSecondOrder("1 + z*x", "0 - x*y", 0, 0, 1, 0.3, &y, &z);

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	LayoutTut::MyForm form;

	Application::Run(%form);
	return 0;
}

