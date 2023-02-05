#include "frmSearchCourse.h"

// Load
System::Void Courses::frmSearchCourse::frmSearchCourse_Load(
	System::Object^ sender, System::EventArgs^ e)
{
	this->txtSearchCourseNumber->Text = "";
}

		// Exit btn
System::Void Courses::frmSearchCourse::btnExit_Click(
	System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

		// Search btn
System::Void Courses::frmSearchCourse::btnSearch_Click(
	System::Object^ sender, System::EventArgs^ e)
{
	if (IsPresent(txtSearchCourseNumber, "Course Number") &&
		IsInt32(txtSearchCourseNumber, "Course Number") &&
		IsWithinRange(txtSearchCourseNumber, "Course Number", 100, 300))
	{
		String^ coursePrefix = gcnew String(Course::getPrefix().c_str());
		int courseNumber = Convert::ToInt32(txtSearchCourseNumber->Text);

		Course course;

		if (courseList->searchCourse(courseNumber, course))
		{


			labelSearchCourseNumber->Text = coursePrefix + courseNumber.ToString();
			labelSearchCourseName->Text = gcnew String(course.getCourseName().c_str());
			labelSearchCourseUnits->Text = course.getCourseUnits().ToString();

			std::set<int> prerequisites = course.getCoursePrereqs();

			if (prerequisites.empty())
			{
				labelSearchCoursePrereqs->Text = "No prerequisites required.";
			}
			else
			{
				String^ prereqs = gcnew String("");
				String^ prefix = gcnew String(Course::getPrefix().c_str());
				size_t numOfPrereqs = prerequisites.size();
				auto iterSet = prerequisites.begin();
				for (size_t i = 0; i < numOfPrereqs - 1; ++i)
				{
					prereqs += prefix + (*iterSet).ToString() + ", ";
					++iterSet;
				}
				prereqs += prefix + (*iterSet).ToString();
				labelSearchCoursePrereqs->Text = prereqs;
			}
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
System::Void Courses::frmSearchCourse::btnClear_Click(
	System::Object^ sender, System::EventArgs^ e)
{
	txtSearchCourseNumber->Clear();
	labelSearchCourseNumber->Text = "";
	labelSearchCourseName->Text = "";
	labelSearchCourseUnits->Text = "";
	labelSearchCoursePrereqs->Text = "";
	txtSearchCourseNumber->Focus();
}