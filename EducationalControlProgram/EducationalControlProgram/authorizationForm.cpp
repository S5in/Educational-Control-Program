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
	MessageBox::Show("���������� ��� ��������:�������� ��������� ��� ���������� ����������,� ���� �������,�� ������ �������� �������������.\n\n���������� ��� ������:�������� �������� ������� �ʲ�-21-1 �������� ������ �����������.","Info");
	return System::Void();
}
