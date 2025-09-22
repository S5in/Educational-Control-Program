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
            if (rb[i]->Checked && cur->data.rightAnswer == i)//���� ����� ����������� radioButton ������� ������ ���� ������
            {
                CountRightAnswer++;
            }
        }
        cur = deleteCurrentElement(cur);//��������� ��������� �������� � ������� �� ���������� �������
            clearRadioButton(rb); //�������� radioButton
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
    if (sec == 0 && min == 0)//���� ��� ������
    {
        timer1->Stop();
        MessageBox::Show(this, "��� ������");
        cur = head;
        while (head != NULL)//���������, ��������� � ������ ������
        {
            cur = deleteCurrentElement(cur);
        }
        head = NULL;//����� ������ �������
        MessageBox::Show(this, "ʳ������ ����� ��������: " + CountRightAnswer.ToString());
        student::Close();
    }
    else if (head == NULL)//���� ������ �������
    {
        timer1->Stop();
        MessageBox::Show(this, "ʳ������ ����� ��������: " + CountRightAnswer.ToString());
        student::Close();
    }


    return System::Void();
}
