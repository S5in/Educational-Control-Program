#pragma once
#include"student.h"
#include"admin.h"
#include"student_environment.h"
namespace EducationalControlProgram {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для authorizationForm
	/// </summary>
	public ref class authorizationForm : public System::Windows::Forms::Form
	{
	public:
		authorizationForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~authorizationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxLogin;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxPassword;


	private: System::Windows::Forms::Button^ buttonEnter;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void Authorization(TextBox^ textBoxLogin, MaskedTextBox^ maskedTextBoxPassword)
		{
			if (textBoxLogin->Text == "admin" && maskedTextBoxPassword->Text== "admin")
			{
				//зчитування логіна студента
				admin^ F = gcnew admin(); //створення форми для тестування
					F->Text = "Адміністратор"; //назва вікна
					F->ShowDialog();//запуск форми в модальному режимі
			}
			else if(textBoxLogin->Text == "student" && maskedTextBoxPassword->Text == "student")
			{
				student_environment^ F = gcnew student_environment();
				F->Text = "Студент";
				F->ShowDialog();
			}
			else{
				MessageBox::Show(this, "Ви ввели не вірні данні! ");
			}
		}

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(authorizationForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBoxPassword = (gcnew System::Windows::Forms::MaskedTextBox());
			this->buttonEnter = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(69, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логін:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(69, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Пароль:";
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Location = System::Drawing::Point(131, 29);
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(100, 22);
			this->textBoxLogin->TabIndex = 2;
			// 
			// maskedTextBoxPassword
			// 
			this->maskedTextBoxPassword->Location = System::Drawing::Point(131, 57);
			this->maskedTextBoxPassword->Name = L"maskedTextBoxPassword";
			this->maskedTextBoxPassword->PasswordChar = '*';
			this->maskedTextBoxPassword->Size = System::Drawing::Size(100, 22);
			this->maskedTextBoxPassword->TabIndex = 3;
			// 
			// buttonEnter
			// 
			this->buttonEnter->Location = System::Drawing::Point(131, 85);
			this->buttonEnter->Name = L"buttonEnter";
			this->buttonEnter->Size = System::Drawing::Size(75, 23);
			this->buttonEnter->TabIndex = 4;
			this->buttonEnter->Text = L"Увійти";
			this->buttonEnter->UseVisualStyleBackColor = true;
			this->buttonEnter->Click += gcnew System::EventHandler(this, &authorizationForm::buttonEnter_Click);
			// 
			// authorizationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(341, 127);
			this->Controls->Add(this->buttonEnter);
			this->Controls->Add(this->maskedTextBoxPassword);
			this->Controls->Add(this->textBoxLogin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(100, 50);
			this->Name = L"authorizationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Авторизація";
			this->Load += gcnew System::EventHandler(this, &authorizationForm::authorizationForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void buttonEnter_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void authorizationForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}
