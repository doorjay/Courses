#include "frmDeleteCourse.h"

		// Load
System::Void Courses::frmDeleteCourse::frmDeleteCourse_Load(
	System::Object^ sender, System::EventArgs^ e)
{
	this->txtDeleteCourseNumber->Text = "";
}

		// Exit btn
		System::Void Courses::frmDeleteCourse::btnExit_Click(
			System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}

		// Search btn
System::Void Courses::frmDeleteCourse::btnSearch_Click(
	System::Object^ sender, System::EventArgs^ e)
{
	if (IsPresent(txtDeleteCourseNumber, "Course Number") &&
		IsInt32(txtDeleteCourseNumber, "Course Number") &&
		IsWithinRange(txtDeleteCourseNumber, "Course Number", 100, 300))
	{
		int courseNumber = Convert::ToInt32(txtDeleteCourseNumber->Text);
		std::string courseName;
		String^ coursePrefix = gcnew String(Course::getPrefix().c_str());

		if (courseList->searchCourse(courseNumber, courseName))
		{
			labelDeleteCourseNumber->Text = coursePrefix + courseNumber.ToString();
			labelDeleteCourseName->Text = gcnew String(courseName.c_str());

		}
		else
		{
			MessageBox::Show("Course Number: " + coursePrefix + courseNumber +
				"\n\nThis course is not in the database." +
				"\nTry a different course number.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}

		// Clear btn
System::Void Courses::frmDeleteCourse::btnClear_Click(System::Object^ sender,
	System::EventArgs^ e)
{
	txtDeleteCourseNumber->Clear();
	labelDeleteCourseNumber->Text = "";
	labelDeleteCourseName->Text = "";

	txtDeleteCourseNumber->Focus();
}

		// Delete btn
System::Void Courses::frmDeleteCourse::btnDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	int courseNumber = Convert::ToInt32(txtDeleteCourseNumber->Text);
	String^ coursePrefix = gcnew String(Course::getPrefix().c_str());

	if (courseList->searchCourse(courseNumber))
	{
		MessageBox::Show(coursePrefix + courseNumber +
			" will be deleted from the database.", "Delete Course");
		courseList->deleteCourse(courseNumber);
	}
	else
	{
		MessageBox::Show("Course Number: " + coursePrefix + courseNumber +
			"\n\nThis course is not in the database." +
			"\nTry a different course number.", "Error");
	}

	this->Close();
}

