#pragma once

#include "CourseList.h"

namespace Courses {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmQualClasses
	/// </summary>
	public ref class frmQualClasses : public System::Windows::Forms::Form
	{
	public:

		// initialize the courseList variable
		frmQualClasses(CourseList* list)
		{
			InitializeComponent();
			this->courseList = list;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmQualClasses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label;
	protected:

	private: System::Windows::Forms::TextBox^ txtBox;

	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::Button^ btnExit;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		CourseList* courseList;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label = (gcnew System::Windows::Forms::Label());
			this->txtBox = (gcnew System::Windows::Forms::TextBox());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label
			// 
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->Location = System::Drawing::Point(1, 19);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(271, 34);
			this->label->TabIndex = 0;
			this->label->Text = L"Please, enter a course number\r\n (i.e., 131, 140...)\r\n\r\n";
			this->label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtBox
			// 
			this->txtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBox->Location = System::Drawing::Point(30, 64);
			this->txtBox->MaxLength = 3;
			this->txtBox->Name = L"txtBox";
			this->txtBox->Size = System::Drawing::Size(225, 21);
			this->txtBox->TabIndex = 1;
			// 
			// btnSubmit
			// 
			this->btnSubmit->BackColor = System::Drawing::Color::LavenderBlush;
			this->btnSubmit->FlatAppearance->BorderColor = System::Drawing::Color::MediumVioletRed;
			this->btnSubmit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubmit->Location = System::Drawing::Point(101, 91);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(75, 23);
			this->btnSubmit->TabIndex = 2;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = false;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &frmQualClasses::btnSubmit_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::LavenderBlush;
			this->btnExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnExit->FlatAppearance->BorderColor = System::Drawing::Color::MediumVioletRed;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(101, 120);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 3;
			this->btnExit->Text = L"E&xit";
			this->btnExit->UseVisualStyleBackColor = false;
			// 
			// frmQualClasses
			// 
			this->AcceptButton = this->btnSubmit;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->CancelButton = this->btnExit;
			this->ClientSize = System::Drawing::Size(284, 156);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->txtBox);
			this->Controls->Add(this->label);
			this->MaximumSize = System::Drawing::Size(300, 195);
			this->Name = L"frmQualClasses";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Qualified Classes";
			this->Load += gcnew System::EventHandler(this, &frmQualClasses::frmQualClasses_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// I might need this to get input from the user via textbox???
	private: System::Void Courses::frmQualClasses::frmQualClasses_Load(
		System::Object^ sender, System::EventArgs^ e);

		// guessing this is used to exit the pop up
	private: System::Void Courses::frmQualClasses::btnExit_Click(
		System::Object^ sender, System::EventArgs^ e);

		// Click the submit button!
	private: System::Void btnSubmit_Click(
		System::Object^ sender, System::EventArgs^ e);

		// Validator: Text is present
	private: bool IsPresent(TextBox^ textBox, String^ name)
	{
		if (textBox->Text == "")
		{
			MessageBox::Show(name + " is a required field.", "Entry Error");
			textBox->Focus();
			return false;
		}
		return true;
	}

		// Validator: Text is integer
	private: bool IsInt32(TextBox^ textBox, String^ name)
	{
		try
		{
			Convert::ToInt32(textBox->Text);
			return true;
		}
		catch (FormatException^)
		{
			MessageBox::Show(name + " must be a valid integer.", "Entry Error");
			textBox->Focus();
			return false;
		}
	}

			// Validator: Text is within range
	private: bool IsWithinRange(TextBox^ textBox, String^ name,
		double min, double max)
	{
		double number = Convert::ToDouble(textBox->Text);
		if (number < min || number > max)
		{
			MessageBox::Show(name + " must be between " + min +
				" and " + max + ".", "Entry Error");
			textBox->Focus();
			return false;
		}
		return true;
	}
};
}
