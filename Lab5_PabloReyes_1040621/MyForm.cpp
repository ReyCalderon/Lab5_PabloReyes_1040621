#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab5PabloReyes1040621::MyForm form;
	Application::Run(% form);
	return 0;
}