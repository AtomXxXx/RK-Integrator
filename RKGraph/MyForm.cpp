#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int __stdcall WinMain(char* argv[], char* argn)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	LayoutTut::MyForm form;

	Application::Run(%form);
	return 0;
}

