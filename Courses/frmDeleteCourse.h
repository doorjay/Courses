#pragma once

#include "CourseList.h"

namespace Courses {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Text;
	using namespace System::Drawing;

	public ref class frmDeleteCourse : public System::Windows::Forms::Form
	{
	public:
		frmDeleteCourse(void)
		{
			InitializeComponent();
		}

		frmDeleteCourse(CourseList *list)
		{
			InitializeComponent();

			this->courseList = list;
		}

	protected:
		~frmDeleteCourse()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^ txtDeleteCourseNumber;
	private: System::Windows::Forms::Label^ LabelDeleteCourse;
	private: System::Windows::Forms::Label^ labelDeleteName;

	private: System::Windows::Forms::Label^ labelDeleteCourseNumber;
	private: System::Windows::Forms::Label^ labelDeleteCourseName;

		System::Windows::Forms::Button^  btnClear;
		System::Windows::Forms::Button^  btnSearch;
		System::Windows::Forms::Button^  btnExit;

		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::Label^ label1;

			 CourseList *courseList;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->txtDeleteCourseNumber = (gcnew System::Windows::Forms::TextBox());
				 this->LabelDeleteCourse = (gcnew System::Windows::Forms::Label());
				 this->labelDeleteName = (gcnew System::Windows::Forms::Label());
				 this->labelDeleteCourseNumber = (gcnew System::Windows::Forms::Label());
				 this->labelDeleteCourseName = (gcnew System::Windows::Forms::Label());
				 this->btnClear = (gcnew System::Windows::Forms::Button());
				 this->btnSearch = (gcnew System::Windows::Forms::Button());
				 this->btnExit = (gcnew System::Windows::Forms::Button());
				 this->btnDelete = (gcnew System::Windows::Forms::Button());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->SuspendLayout();
				 // 
				 // label5
				 // 
				 this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label5->Location = System::Drawing::Point(43, 71);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(133, 17);
				 this->label5->TabIndex = 48;
				 this->label5->Text = L"Course Number:";
				 this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				 // 
				 // txtDeleteCourseNumber
				 // 
				 this->txtDeleteCourseNumber->BackColor = System::Drawing::SystemColors::Window;
				 this->txtDeleteCourseNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				 this->txtDeleteCourseNumber->Location = System::Drawing::Point(184, 68);
				 this->txtDeleteCourseNumber->MaxLength = 8;
				 this->txtDeleteCourseNumber->Name = L"txtDeleteCourseNumber";
				 this->txtDeleteCourseNumber->Size = System::Drawing::Size(75, 21);
				 this->txtDeleteCourseNumber->TabIndex = 0;
				 // 
				 // LabelDeleteCourse
				 // 
				 this->LabelDeleteCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				 this->LabelDeleteCourse->Location = System::Drawing::Point(14, 143);
				 this->LabelDeleteCourse->Name = L"LabelDeleteCourse";
				 this->LabelDeleteCourse->Size = System::Drawing::Size(50, 20);
				 this->LabelDeleteCourse->TabIndex = 49;
				 this->LabelDeleteCourse->Text = L"Course:";
				 this->LabelDeleteCourse->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				 // 
				 // labelDeleteName
				 // 
				 this->labelDeleteName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->labelDeleteName->Location = System::Drawing::Point(14, 172);
				 this->labelDeleteName->Name = L"labelDeleteName";
				 this->labelDeleteName->Size = System::Drawing::Size(50, 20);
				 this->labelDeleteName->TabIndex = 51;
				 this->labelDeleteName->Text = L"Name:";
				 this->labelDeleteName->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				 // 
				 // labelDeleteCourseNumber
				 // 
				 this->labelDeleteCourseNumber->BackColor = System::Drawing::Color::LightBlue;
				 this->labelDeleteCourseNumber->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->labelDeleteCourseNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				 this->labelDeleteCourseNumber->Location = System::Drawing::Point(70, 143);
				 this->labelDeleteCourseNumber->Name = L"labelDeleteCourseNumber";
				 this->labelDeleteCourseNumber->Size = System::Drawing::Size(106, 20);
				 this->labelDeleteCourseNumber->TabIndex = 52;
				 // 
				 // labelDeleteCourseName
				 // 
				 this->labelDeleteCourseName->BackColor = System::Drawing::Color::LightBlue;
				 this->labelDeleteCourseName->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->labelDeleteCourseName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				 this->labelDeleteCourseName->Location = System::Drawing::Point(70, 172);
				 this->labelDeleteCourseName->Name = L"labelDeleteCourseName";
				 this->labelDeleteCourseName->Size = System::Drawing::Size(252, 20);
				 this->labelDeleteCourseName->TabIndex = 54;
				 // 
				 // btnClear
				 // 
				 this->btnClear->BackColor = System::Drawing::Color::LavenderBlush;
				 this->btnClear->FlatAppearance->BorderColor = System::Drawing::Color::MediumVioletRed;
				 this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnClear->Location = System::Drawing::Point(179, 102);
				 this->btnClear->Name = L"btnClear";
				 this->btnClear->Size = System::Drawing::Size(80, 23);
				 this->btnClear->TabIndex = 55;
				 this->btnClear->Text = L"&Clear Entry";
				 this->btnClear->UseVisualStyleBackColor = false;
				 this->btnClear->Click += gcnew System::EventHandler(this, &frmDeleteCourse::btnClear_Click);
				 // 
				 // btnSearch
				 // 
				 this->btnSearch->BackColor = System::Drawing::Color::LavenderBlush;
				 this->btnSearch->FlatAppearance->BorderColor = System::Drawing::Color::MediumVioletRed;
				 this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->btnSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnSearch->Location = System::Drawing::Point(97, 102);
				 this->btnSearch->Name = L"btnSearch";
				 this->btnSearch->Size = System::Drawing::Size(75, 23);
				 this->btnSearch->TabIndex = 1;
				 this->btnSearch->Text = L"&Search";
				 this->btnSearch->UseVisualStyleBackColor = false;
				 this->btnSearch->Click += gcnew System::EventHandler(this, &frmDeleteCourse::btnSearch_Click);
				 // 
				 // btnExit
				 // 
				 this->btnExit->BackColor = System::Drawing::Color::LavenderBlush;
				 this->btnExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
				 this->btnExit->FlatAppearance->BorderColor = System::Drawing::Color::MediumVioletRed;
				 this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnExit->Location = System::Drawing::Point(242, 214);
				 this->btnExit->Name = L"btnExit";
				 this->btnExit->Size = System::Drawing::Size(80, 23);
				 this->btnExit->TabIndex = 3;
				 this->btnExit->Text = L"C&ancel";
				 this->btnExit->UseVisualStyleBackColor = false;
				 this->btnExit->Click += gcnew System::EventHandler(this, &frmDeleteCourse::btnExit_Click);
				 // 
				 // btnDelete
				 // 
				 this->btnDelete->BackColor = System::Drawing::Color::LavenderBlush;
				 this->btnDelete->FlatAppearance->BorderColor = System::Drawing::Color::MediumVioletRed;
				 this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnDelete->Location = System::Drawing::Point(153, 214);
				 this->btnDelete->Name = L"btnDelete";
				 this->btnDelete->Size = System::Drawing::Size(75, 23);
				 this->btnDelete->TabIndex = 2;
				 this->btnDelete->Text = L"&Delete";
				 this->btnDelete->UseVisualStyleBackColor = false;
				 this->btnDelete->Click += gcnew System::EventHandler(this, &frmDeleteCourse::btnDelete_Click);
				 // 
				 // label1
				 // 
				 this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label1->Location = System::Drawing::Point(26, 23);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(296, 24);
				 this->label1->TabIndex = 57;
				 this->label1->Text = L"Please, enter a course number (i.e., 131, 140...)";
				 this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // frmDeleteCourse
				 // 
				 this->AcceptButton = this->btnSearch;
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::AliceBlue;
				 this->CancelButton = this->btnExit;
				 this->ClientSize = System::Drawing::Size(344, 261);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->btnDelete);
				 this->Controls->Add(this->btnExit);
				 this->Controls->Add(this->btnSearch);
				 this->Controls->Add(this->btnClear);
				 this->Controls->Add(this->labelDeleteCourseName);
				 this->Controls->Add(this->labelDeleteCourseNumber);
				 this->Controls->Add(this->labelDeleteName);
				 this->Controls->Add(this->LabelDeleteCourse);
				 this->Controls->Add(this->txtDeleteCourseNumber);
				 this->Controls->Add(this->label5);
				 this->MaximumSize = System::Drawing::Size(360, 300);
				 this->Name = L"frmDeleteCourse";
				 this->ShowIcon = false;
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"Delete CS Course";
				 this->Load += gcnew System::EventHandler(this, &frmDeleteCourse::frmDeleteCourse_Load);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

	private: 

			// Load
		System::Void frmDeleteCourse::frmDeleteCourse_Load(
			System::Object^ sender, System::EventArgs^ e);

			// Exit btn
		System::Void frmDeleteCourse::btnExit_Click(
			System::Object^ sender, System::EventArgs^ e);

			// Search btn
		System::Void frmDeleteCourse::btnSearch_Click(
			System::Object^ sender, System::EventArgs^ e);

			// Clear btn
		System::Void frmDeleteCourse::btnClear_Click(
			System::Object^ sender, System::EventArgs^ e);

			// Delete btn
		System::Void frmDeleteCourse::btnDelete_Click(System::Object^ sender,
			System::EventArgs^ e);

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