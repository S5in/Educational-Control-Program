#include "student.h"
#include "admin.h"
System::Void EducationalControlProgram::student::student_Load(System::Object^ sender, System::EventArgs^ e)
{
    timer1->Start();
    head = readFromFile();
    cur = head;
    displayElement(rb, head);
    return System::Void();
}

System::Void EducationalControlProgram::student::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    cur = previousQuestion(head, cur);
    return System::Void();
}

System::Void EducationalControlProgram::student::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    cur = nextQuestion(head, cur);
    return System::Void();
}

System::Void EducationalControlProgram::student::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (rb[0]->Checked || rb[1]->Checked || rb[2]->Checked || rb[3]->Checked || rb[4] -> Checked)
    {
        for (int i = 0; i < 5; i++)
        {
            if (rb[i]->Checked && cur->data.rightAnswer == i)//якщо номер натиснутого radioButton дорівнює номеру вірної відповіді
            {
                CountRightAnswer++;
            }
        }
        cur = deleteCurrentElement(cur);//видалення поточного елемента і перехід до наступного питання
            clearRadioButton(rb); //очищення radioButton
    }
    return System::Void();
}

System::Void EducationalControlProgram::student::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
    pin_ptr<int> managed_min = &min;
    pin_ptr<int> managed_sec = &sec;
    MinAndSec(managed_min, managed_sec);
    label3->Text = sec.ToString();
    label2->Text = min.ToString();
    if (sec == 0 && min == 0)//якщо час вийшов
    {
        timer1->Stop();
        MessageBox::Show(this, "Час вийшов");
        cur = head;
        while (head != NULL)//видалення, починаючи з голови списку
        {
            cur = deleteCurrentElement(cur);
        }
        head = NULL;//тепер список порожній
        MessageBox::Show(this, "Кількість вірних відповідей: " + CountRightAnswer.ToString());
        student::Close();
    }
    else if (head == NULL)//якщо список порожній
    {
        timer1->Stop();
        MessageBox::Show(this, "Кількість вірних відповідей: " + CountRightAnswer.ToString());
        student::Close();
    }


    return System::Void();
}
