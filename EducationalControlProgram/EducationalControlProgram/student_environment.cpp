#include "student_environment.h"
#include "student.h"
#include"admin.h"
 //   this->Close();

System::Void EducationalControlProgram::student_environment::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    student^ F = gcnew student();
    F->Text = "Тестування";
    F->ShowDialog();
    return System::Void();
}

System::Void EducationalControlProgram::student_environment::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
    return System::Void();
}
