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

	public ref class frmSearchCourse : public System::Windows::Forms::Form
	{
	public:
		frmSearchCourse(void)
		{
			InitializeComponent();
		}

		frmSearchCourse(CourseList*list)
		{
			InitializeComponent();

			this->courseList = list;
		}

	protected:
		~frmSearchCourse()
		{
			if (components)
			{
				delete components;
			}
		}

	private:

	private: System::Windows::Forms::TextBox^ txtSearchCourseNumber;
	private: System::Windows::Forms::Label^ LabelSearchCourse;
	private: System::Windows::Forms::Label^ labelSearchName;

	private: System::Windows::Forms::Label^ labelSearchCourseNumber;
	private: System::Windows::Forms::Label^ labelSearchCourseName;


		System::Windows::Forms::Button^  btnClear;
		System::Windows::Forms::Button^  btnSearch;
		System::Windows::Forms::Button^  btnExit;

		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labelSearchCoursePrereqs;


	private: System::Windows::Forms::Label^ labelSearchCourseUnits;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;

		CourseList *courseList;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtSearchCourseNumber = (gcnew System::Windows::Forms::TextBox());
			this->LabelSearchCourse = (gcnew System::Windows::Forms::Label());
			this->labelSearchName = (gcnew System::Windows::Forms::Label());
			this->labelSearchCourseNumber = (gcnew System::Windows::Forms::Label());
			this->labelSearchCourseName = (gcnew System::Windows::Forms::Label());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelSearchCoursePrereqs = (gcnew System::Windows::Forms::Label());
			this->labelSearchCourseUnits = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtSearchCourseNumber
			// 
			this->txtSearchCourseNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtSearchCourseNumber->Location = System::Drawing::Point(184, 68);
			this->txtSearchCourseNumber->MaxLength = 8;
			this->txtSearchCourseNumber->Name = L"txtSearchCourseNumber";
			this->txtSearchCourseNumber->Size = System::Drawing::Size(75, 21);
			this->txtSearchCourseNumber->TabIndex = 0;
			// 
			// LabelSearchCourse
			// 
			this->LabelSearchCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LabelSearchCourse->Location = System::Drawing::Point(16, 143);
			this->LabelSearchCourse->Name = L"LabelSearchCourse";
			this->LabelSearchCourse->Size = System::Drawing::Size(60, 20);
			this->LabelSearchCourse->TabIndex = 49;
			this->LabelSearchCourse->Text = L"Course:";
			this->LabelSearchCourse->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelSearchName
			// 
			this->labelSearchName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSearchName->Location = System::Drawing::Point(16, 170);
			this->labelSearchName->Name = L"labelSearchName";
			this->labelSearchName->Size = System::Drawing::Size(60, 20);
			this->labelSearchName->TabIndex = 51;
			this->labelSearchName->Text = L"Name:";
			this->labelSearchName->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelSearchCourseNumber
			// 
			this->labelSearchCourseNumber->BackColor = System::Drawing::Color::LightBlue;
			this->labelSearchCourseNumber->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelSearchCourseNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSearchCourseNumber->Location = System::Drawing::Point(80, 143);
			this->labelSearchCourseNumber->Name = L"labelSearchCourseNumber";
			this->labelSearchCourseNumber->Size = System::Drawing::Size(106, 20);
			this->labelSearchCourseNumber->TabIndex = 52;
			// 
			// labelSearchCourseName
			// 
			this->labelSearchCourseName->BackColor = System::Drawing::Color::LightBlue;
			this->labelSearchCourseName->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelSearchCourseName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSearchCourseName->Location = System::Drawing::Point(80, 170);
			this->labelSearchCourseName->Name = L"labelSearchCourseName";
			this->labelSearchCourseName->Size = System::Drawing::Size(252, 20);
			this->labelSearchCourseName->TabIndex = 54;
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
			this->btnClear->Click += gcnew System::EventHandler(this, &frmSearchCourse::btnClear_Click);
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
			this->btnSearch->Click += gcnew System::EventHandler(this, &frmSearchCourse::btnSearch_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::LavenderBlush;
			this->btnExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnExit->FlatAppearance->BorderColor = System::Drawing::Color::MediumVioletRed;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(252, 264);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(80, 23);
			this->btnExit->TabIndex = 2;
			this->btnExit->Text = L"E&xit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &frmSearchCourse::btnExit_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 24);
			this->label1->TabIndex = 58;
			this->label1->Text = L"Please, enter a course number (i.e., 131, 140...)";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(43, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 17);
			this->label5->TabIndex = 60;
			this->label5->Text = L"Course Number:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelSearchCoursePrereqs
			// 
			this->labelSearchCoursePrereqs->BackColor = System::Drawing::Color::LightBlue;
			this->labelSearchCoursePrereqs->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelSearchCoursePrereqs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSearchCoursePrereqs->Location = System::Drawing::Point(80, 224);
			this->labelSearchCoursePrereqs->Name = L"labelSearchCoursePrereqs";
			this->labelSearchCoursePrereqs->Size = System::Drawing::Size(252, 20);
			this->labelSearchCoursePrereqs->TabIndex = 64;
			// 
			// labelSearchCourseUnits
			// 
			this->labelSearchCourseUnits->BackColor = System::Drawing::Color::LightBlue;
			this->labelSearchCourseUnits->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelSearchCourseUnits->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSearchCourseUnits->Location = System::Drawing::Point(80, 197);
			this->labelSearchCourseUnits->Name = L"labelSearchCourseUnits";
			this->labelSearchCourseUnits->Size = System::Drawing::Size(106, 20);
			this->labelSearchCourseUnits->TabIndex = 63;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(16, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 20);
			this->label4->TabIndex = 62;
			this->label4->Text = L"Prereqs:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(16, 197);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 20);
			this->label6->TabIndex = 61;
			this->label6->Text = L"Units:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// frmSearchCourse
			// 
			this->AcceptButton = this->btnSearch;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->CancelButton = this->btnExit;
			this->ClientSize = System::Drawing::Size(359, 311);
			this->Controls->Add(this->labelSearchCoursePrereqs);
			this->Controls->Add(this->labelSearchCourseUnits);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->labelSearchCourseName);
			this->Controls->Add(this->labelSearchCourseNumber);
			this->Controls->Add(this->labelSearchName);
			this->Controls->Add(this->LabelSearchCourse);
			this->Controls->Add(this->txtSearchCourseNumber);
			this->MaximumSize = System::Drawing::Size(375, 350);
			this->Name = L"frmSearchCourse";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Search CS Course";
			this->Load += gcnew System::EventHandler(this, &frmSearchCourse::frmSearchCourse_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

				// Load
		private: System::Void Courses::frmSearchCourse::frmSearchCourse_Load(
			System::Object^ sender, System::EventArgs^ e);

				// Exit btn
		private: System::Void Courses::frmSearchCourse::btnExit_Click(
				   System::Object^ sender, System::EventArgs^ e);

				// Search btn
		private: System::Void Courses::frmSearchCourse::btnSearch_Click(
			System::Object^ sender, System::EventArgs^ e);

				// Clear btn
		private: System::Void Courses::frmSearchCourse::btnClear_Click(
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