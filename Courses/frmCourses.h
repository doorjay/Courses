#pragma once

#include "CourseList.h"
#include "frmSearchCourse.h"
#include "frmDeleteCourse.h"
#include "frmQualClasses.h"

namespace Courses {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Text;
	using namespace System::Drawing;


	public ref class frmCourses : public System::Windows::Forms::Form
	{
	public:
		frmCourses(void)
		{
			InitializeComponent();
		}

		frmCourses(CourseList *list)
		{
			InitializeComponent();

			courseList = list;
		}

	protected:
		~frmCourses()
		{
			if (components)
			{
				delete components;
			}
		}

	private: 
		System::Windows::Forms::Label^  label1;
		System::Windows::Forms::GroupBox^  selectionGroupBox;
	private: System::Windows::Forms::RadioButton^ radioBtnDisplayCourses;


	private: System::Windows::Forms::RadioButton^ radioBtnDeleteCourse;

	private: System::Windows::Forms::RadioButton^ radioBtnAddCourse;
	private: System::Windows::Forms::RadioButton^ radioBtnSearchCourse;

		System::Windows::Forms::Button^  btnSelect;
		System::Windows::Forms::Button^  btnExit;

		System::ComponentModel::Container ^components;	
	private: System::Windows::Forms::RadioButton^ radioBtnQualClasses;






		CourseList *courseList;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->selectionGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->radioBtnQualClasses = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtnDisplayCourses = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtnDeleteCourse = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtnAddCourse = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtnSearchCourse = (gcnew System::Windows::Forms::RadioButton());
			this->btnSelect = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->selectionGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Please, select an option:";
			// 
			// selectionGroupBox
			// 
			this->selectionGroupBox->Controls->Add(this->radioBtnQualClasses);
			this->selectionGroupBox->Controls->Add(this->radioBtnDisplayCourses);
			this->selectionGroupBox->Controls->Add(this->radioBtnDeleteCourse);
			this->selectionGroupBox->Controls->Add(this->radioBtnAddCourse);
			this->selectionGroupBox->Controls->Add(this->radioBtnSearchCourse);
			this->selectionGroupBox->Location = System::Drawing::Point(31, 32);
			this->selectionGroupBox->Name = L"selectionGroupBox";
			this->selectionGroupBox->Size = System::Drawing::Size(169, 203);
			this->selectionGroupBox->TabIndex = 1;
			this->selectionGroupBox->TabStop = false;
			// 
			// radioBtnQualClasses
			// 
			this->radioBtnQualClasses->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioBtnQualClasses->Location = System::Drawing::Point(17, 164);
			this->radioBtnQualClasses->Name = L"radioBtnQualClasses";
			this->radioBtnQualClasses->Size = System::Drawing::Size(133, 20);
			this->radioBtnQualClasses->TabIndex = 5;
			this->radioBtnQualClasses->Text = L"Qualified Classes";
			this->radioBtnQualClasses->UseVisualStyleBackColor = true;
			// 
			// radioBtnDisplayCourses
			// 
			this->radioBtnDisplayCourses->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioBtnDisplayCourses->Location = System::Drawing::Point(17, 128);
			this->radioBtnDisplayCourses->Name = L"radioBtnDisplayCourses";
			this->radioBtnDisplayCourses->Size = System::Drawing::Size(133, 20);
			this->radioBtnDisplayCourses->TabIndex = 4;
			this->radioBtnDisplayCourses->Text = L"Display Courses";
			this->radioBtnDisplayCourses->UseVisualStyleBackColor = true;
			// 
			// radioBtnDeleteCourse
			// 
			this->radioBtnDeleteCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioBtnDeleteCourse->Location = System::Drawing::Point(17, 92);
			this->radioBtnDeleteCourse->Name = L"radioBtnDeleteCourse";
			this->radioBtnDeleteCourse->Size = System::Drawing::Size(117, 20);
			this->radioBtnDeleteCourse->TabIndex = 3;
			this->radioBtnDeleteCourse->Text = L"Delete Course";
			this->radioBtnDeleteCourse->UseVisualStyleBackColor = true;
			// 
			// radioBtnAddCourse
			// 
			this->radioBtnAddCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioBtnAddCourse->Location = System::Drawing::Point(17, 56);
			this->radioBtnAddCourse->Name = L"radioBtnAddCourse";
			this->radioBtnAddCourse->Size = System::Drawing::Size(117, 20);
			this->radioBtnAddCourse->TabIndex = 1;
			this->radioBtnAddCourse->Text = L"Add Course";
			this->radioBtnAddCourse->UseVisualStyleBackColor = true;
			// 
			// radioBtnSearchCourse
			// 
			this->radioBtnSearchCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioBtnSearchCourse->Location = System::Drawing::Point(17, 20);
			this->radioBtnSearchCourse->Name = L"radioBtnSearchCourse";
			this->radioBtnSearchCourse->Size = System::Drawing::Size(117, 20);
			this->radioBtnSearchCourse->TabIndex = 0;
			this->radioBtnSearchCourse->Text = L"Search Course";
			this->radioBtnSearchCourse->UseVisualStyleBackColor = true;
			// 
			// btnSelect
			// 
			this->btnSelect->BackColor = System::Drawing::Color::LavenderBlush;
			this->btnSelect->FlatAppearance->BorderColor = System::Drawing::Color::MediumVioletRed;
			this->btnSelect->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSelect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSelect->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnSelect->Location = System::Drawing::Point(217, 88);
			this->btnSelect->Name = L"btnSelect";
			this->btnSelect->Size = System::Drawing::Size(75, 23);
			this->btnSelect->TabIndex = 5;
			this->btnSelect->Text = L"&Select";
			this->btnSelect->UseVisualStyleBackColor = false;
			this->btnSelect->Click += gcnew System::EventHandler(this, &frmCourses::btnSelect_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::LavenderBlush;
			this->btnExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnExit->FlatAppearance->BorderColor = System::Drawing::Color::MediumVioletRed;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(217, 157);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 6;
			this->btnExit->Text = L"E&xit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &frmCourses::btnExit_Click);
			// 
			// frmCourses
			// 
			this->AcceptButton = this->btnSelect;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->CancelButton = this->btnExit;
			this->ClientSize = System::Drawing::Size(304, 263);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnSelect);
			this->Controls->Add(this->selectionGroupBox);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->MaximumSize = System::Drawing::Size(320, 320);
			this->MinimumSize = System::Drawing::Size(300, 255);
			this->Name = L"frmCourses";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CS Courses";
			this->selectionGroupBox->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: 
		System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e);

		System::Void btnSelect_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void TestLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
