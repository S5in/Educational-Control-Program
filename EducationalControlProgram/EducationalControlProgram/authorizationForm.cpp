#include "authorizationForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	EducationalControlProgram::authorizationForm form;
	Application::Run(% form);
}

System::Void EducationalControlProgram::authorizationForm::buttonEnter_Click(System::Object^ sender, System::EventArgs^ e)
{
	Authorization(textBoxLogin, maskedTextBoxPassword);
	return System::Void();
}

System::Void EducationalControlProgram::authorizationForm::authorizationForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Інформація про програму:програма створенна для проведення тестування,з адмін правами,та іншими цікавими властивостями.\n\nІнформація про автора:програму розробив студент АКІТ-21-1 Редченко Максим Миколайович.","Info");
	return System::Void();
}
