#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include"Header1.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "msclr\marshal.h"
#include "admin.h"
namespace EducationalControlProgram {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� student
	/// </summary>
	public ref class student : public System::Windows::Forms::Form
	{
	public:
		student()
		{
			InitializeComponent();
			MyMembersInit();
			

			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: array<RadioButton^>^ rb;





#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		/// 
		void MyMembersInit()
		{
			rb = gcnew cli::array < RadioButton^ >(5);
			for (int i = 0; i < rb->Length; i++)
			{
				rb[i] = gcnew RadioButton();
				rb[i]->AutoSize = true;
				rb[i]->Location = System::Drawing::Point(26, 60 + 25 * (i));
				rb[i]->Size = System::Drawing::Size(85, 17);
				rb[i]->TabIndex = i + 3;
				rb[i]->TabStop = true;
				rb[i]->UseVisualStyleBackColor = true;
				student::Controls->Add(rb[i]);
			}
		}
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(student::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(62, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(274, 356);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(326, 356);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(16, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 86);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Previous question";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &student::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(179, 238);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 86);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Give an answer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &student::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(329, 238);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 86);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Next question";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &student::button3_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &student::timer1_Tick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(62, 356);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(165, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"� ��� ���������� ����:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(184, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 25);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Test";
			// 
			// student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 382);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"student";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"student";
			this->Load += gcnew System::EventHandler(this, &student::student_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	list* head = NULL;// �������� �� ������ ������. �������� ������� NULL - ������ �������
	list* cur;// �������� �� �������� ������� � ������
	bool ifPressedNext = false;//������ �����, ��� �������, �� ���� ��������� ������ ��������� ��������
	int CountRightAnswer = 0;//������� ����� ��������
	public:
		int min = 3;//Convert::ToInt32(numericUpDownTestTimeMinute->Value);
		int sec = 0;//Convert::ToInt32(numericUpDownTestTimeSecond->Value);//�������� �������� ������� ������ �� ������ ��� ����������� �����
	//��������� �������
	list* createElement(Ddata Sdata)
	{
		list* newElement = (list*)malloc(sizeof(list));
		for (int i = 0; i < 5; i++)
		strcpy(newElement -> data.answer[i], Sdata.answer[i]);
		strcpy(newElement->data.question,Sdata.question);
		newElement->data.rightAnswer = Sdata.rightAnswer;
		newElement->next = NULL;
		newElement->prev = NULL;
		return newElement;
	}
	void addToEnd(list* newEl)
	{
		if (head == NULL)
		{
			head = newEl;
		}
		else
		{
			list* tmp = head;
			while (tmp->next != NULL)//������ �������
			{
					tmp = tmp->next;
			}
			tmp->next = newEl;
			newEl->prev = tmp;
		}
	}
	list* readFromFile()
	{
		FILE* f;
		Ddata Sdata;
		list* temp;
		f = fopen("kurs1.txt", "rb");
		fread(&Sdata, sizeof(Ddata), 1, f);
		while (!feof(f)) //���� �� ����� �����, ��������
		{
			temp = createElement(Sdata);
			addToEnd(temp);
			fread(&Sdata, sizeof(Ddata), 1, f);
		}
		fclose(f);
		return head;
	}
	//��������� �������� ������ � RadioButton
		void displayElement(array <RadioButton^> ^ rb, list * temp)
	{
		for (int i = 0; i < rb->Length; i++)
			rb[i]->Text = gcnew String(temp->data.answer[i], 0, strlen(temp -> data.answer[i]));
		label1->Text = gcnew String(temp->data.question, 0, strlen(temp -> data.question));
		return;
	}
		//�������� �������
		list* nextQuestion(list* head, list* cur)
		{
			if (ifPressedNext == false)//���� �� ���� ������� ���������� ������
			{
				cur = head;//������� �������� ��������� ����� ����, ���� �������� �� ������(�������� � ������� ��������)
					ifPressedNext = true;//�������� ����������
			}
			if (cur->next != NULL) //���� �� �� ������� �������
			{
				cur = cur->next;//��������� �������� �� ���������� �������� ������
					displayElement(rb, cur); //��������� ��������
			}
			else//������� ������� � ������� �� ��������
				MessageBox::Show(this, "������ �������");
			return cur; //������� �������� ����� �� ��������� �������
		}
		//�������� �������
		list* previousQuestion(list* head, list* cur)
		{
			if (ifPressedNext == true)//���� ��� ���� ��������� ������ ������, ����� �������, �� ���� ����� cur, ��� �� ��������
			{
			if (cur->prev == NULL)//���� ������� �������� ��������� ����� �� ������ ������� � ������� �� ��������
			{
			MessageBox::Show(this, "�� ����� �������");
			return head; //���������� ��������� �� ������� ������
			}
			else//������ �������� � ����������� �����
			{
			cur = cur->prev;//�����
			displayElement(rb, cur);
			}
			}
			else
			{
				MessageBox::Show(this, "�� ����� �������");
				return head;//���������� head ��� ����, ��� ����� ���� ��������� ������
			}
			return cur;
		}
		//��������� ��������
		list* deleteCurrentElement(list* cur)
		{
			if (cur->next == NULL && cur->prev == NULL)//���� �� ������ �������
			{
				free(cur); //��������� ������� ��������
				MessageBox::Show(this, "³���,�� ���� ������ �������!");
				head = NULL;
			}
			else if (cur->next == NULL)//���� �������� ������� ����� �� ������� �������
			{
				cur = previousQuestion(head, cur);//������� �� ������������ ��������
				free(cur->next);//��������� ���������� ��������
				cur->next = NULL;//����� �� ������� �������
			}
			else if (cur == head)//���� �������� ������� ����� �� ������ ������
			{
				head = head->next;// ����� ������ - ������ �������
				free(head->prev);//��������� ������ ������� (����� �������������� ������)
				head->prev = NULL;//������ ���� ������ ������ ����� NULL
				cur = head;//�������� ����� ������
				//���� ��������� �������� ��������� ������� (�������� ���� ������(��������))
				displayElement(rb, cur);
				return head;//��������� ����� �������� �� ������ ������
			}
			else//���� ������� ����������� �������� ������
			{
				list* previous; // ��������� ������� �������� ���� ��������, ���� ���� ��������
				list* tmp;
				tmp = cur;
				previous = cur->prev;
				cur = nextQuestion(head, cur); //������� �� ���������� �������� ������
				previous->next = cur;
				cur->prev = previous;
				free(tmp); //���������
			}
			return cur;//��������� ��������� �� ��������� �������
		}
		//�������� radiobutton ���� ���������� ���� �������
		void clearRadioButton(array <RadioButton^>^ rb)
		{
			for (int i = 0; i < 5; i++)
			{
				rb[i]->Checked = false;
			}
		}
		void MinAndSec(int* min, int* sec)
		{
			*sec = *sec - 1;
			if (*sec == -1)
			{
				*min = *min - 1;
				*sec = 59;
			}
			return;
		}




private: System::Void student_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
};
}
