#include "admin.h"

System::Void EducationalControlProgram::admin::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "")
    {
        readAndSaveToFileElement();
        //очищення полів
        textBox1->Text = "";
        textBox2->Text = "";
        textBox3->Text = "";
        textBox4->Text = "";
        textBox5->Text = "";
        textBox6->Text = "";
        textBox7->Text = "";
        MessageBox::Show(this, "Питання успішно додано");
    }
    else
    {
        MessageBox::Show(this, "Будь-ласка, заповніть всі поля!");
    }
    return System::Void();
}

System::Void EducationalControlProgram::admin::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
    return System::Void();
}

System::Void EducationalControlProgram::admin::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}
