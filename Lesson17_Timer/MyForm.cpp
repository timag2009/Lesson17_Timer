#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles;
	Lesson17Timer::MyForm form1;
	Application::Run(% form1);

	return 0;
}

