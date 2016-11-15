#include <iostream>
#include "Interface.h"
using namespace System;
using namespace System::Windows::Forms;

int main() {
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SciCalc::Interface form;

	Application::Run(%form);

	return 0;
}