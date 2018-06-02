#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	FinalProject::MainForm form;
	Application::Run(%form);

	return 0;
}