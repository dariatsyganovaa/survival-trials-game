#include "MenuForm.h"
#include "SettingsForm.h"
#include "GameForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	TestApplication::MenuForm form;
	Application::Run(% form);
}