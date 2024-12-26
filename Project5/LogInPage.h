#pragma once

#include <cliext/vector>
#include <sstream>
#include <istream>
#include "CreateQuestionUI.h"
#include "UserAccount.h"
#include "MyForm.h"


namespace Project5 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LogInPage
	/// </summary>
	public ref class LogInPage : public System::Windows::Forms::Form
	{
	public:
		/*USER DATA STROAGE*/
		cliext::vector<UserAccount^>^ userAccounts = gcnew cliext::vector<UserAccount^>();
		LogInPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			readingUserAccounts("UserAccounts.txt");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogInPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button38;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(153, 229);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(416, 36);
			this->panel2->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->Location = System::Drawing::Point(4, 4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(409, 29);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Username1";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &LogInPage::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label3->Location = System::Drawing::Point(45, 233);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label2->Location = System::Drawing::Point(45, 294);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 24);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Password:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Location = System::Drawing::Point(153, 290);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(416, 36);
			this->panel1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox2->Location = System::Drawing::Point(4, 4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(409, 29);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"Password";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(98, 131);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(468, 46);
			this->label8->TabIndex = 15;
			this->label8->Text = L"RALLSMOH Application";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(209, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(243, 46);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Welcome to";
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button38->Font = (gcnew System::Drawing::Font(L"Calibri", 11.8F, System::Drawing::FontStyle::Bold));
			this->button38->ForeColor = System::Drawing::Color::Red;
			this->button38->Location = System::Drawing::Point(210, 368);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(242, 43);
			this->button38->TabIndex = 28;
			this->button38->Text = L"LogIn";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &LogInPage::button38_Click);
			// 
			// LogInPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(640, 530);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"LogInPage";
			this->Text = L"LogInPage";
			this->Load += gcnew System::EventHandler(this, &LogInPage::LogInPage_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LogInPage_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	/*OPENING APPROPRIATE PAGE ACCORDING TO USER */
	String^ username = gcnew String(textBox1->Text);
	String^ userPassword = gcnew String(textBox2->Text);

	/*/USING A FOR LOOP TO TRAVERSE THROUGHT THE USER ACCOUNTS*/
	for (int index = 0; index < userAccounts->size(); index++)
	{
		/*CHECKING IF STAFF OR STUDENT LOGS IN THE SYSTEM*/
		if (username->Length == 9)
		{
			/*IF STUDENT THEN DISPLAY APPROPRIATE PAGE*/
			if (username == userAccounts[index]->username && userPassword == userAccounts[index]->password)
			{
				MyForm^ myForm = gcnew MyForm();
				myForm->ShowDialog();
				//this->Close();
			}
			else
			{	/*IF THE USERNAME IS NOT FOUND GIVE FEEDBACK TO THE USER*/
				String^ wrongPasswordMessage = "Incorrect credintials";
				MessageBox::Show(wrongPasswordMessage);
			}
		}
		else if(username->Length == 8)/*ELSE IF A STUDENT LOGS IN*/
		{
			if (username == userAccounts[index]->username && userPassword == userAccounts[index]->password)
			{

				CreateQuestionUI^ myForm = gcnew CreateQuestionUI();
				myForm->ShowDialog();
				//this->Close();
			}
			else
			{	/*IF THE USERNAME IS NOT FOUND GIVE FEEDBACK TO THE USER*/
				String^ wrongPasswordMessage = "Incorrect credintials";
				MessageBox::Show(wrongPasswordMessage);
			}
		}
	}
}
	   
	   void readingUserAccounts(string filename)
	   {
		   /*************ATTEMPTING TO READ FROM THE TEXT FILES*************/
		   String^ username;
		   String^ password;
		   UserAccount^ newUserToAdd;

		   /*DECLARING FSTREM READING*/
		   ifstream reader(filename);
		   if (reader.is_open())
		   {
			   /*STRING TO HOLD THE LINE READ*/
			   string line;

			   /*WHILE FILE HAS MORE LINES KEEP READING*/
			   while (std::getline(reader, line))
			   {
				   /*FINDIND POSITION OF THE QUESTION DELIMETER*/
				   size_t position = line.find(":");
				   if (position != string::npos)
				   {
					   String^ username = gcnew String(line.substr(0, position).c_str());
					   String^ usernamePassword = gcnew String(line.substr(position + 1).c_str());
					   newUserToAdd = gcnew UserAccount(username, usernamePassword);

					   /*ADD USER AS STUFF OR STUDENT*/
					   userAccounts->push_back(newUserToAdd);
				   }
			   }
			reader.close();
		   }
	   }
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}
