#include "frmQualClasses.h"

// Load
System::Void Courses::frmQualClasses::frmQualClasses_Load(
		System::Object^ sender, System::EventArgs^ e)
{
	this->txtBox->Text = "";
}

// guessing this is used to exit the pop up
System::Void Courses::frmQualClasses::btnExit_Click(
	System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

// submit button
System::Void Courses::frmQualClasses::btnSubmit_Click(
	System::Object^ sender, System::EventArgs^ e)
{
	if (IsPresent(txtBox, "Course Number") &&	// something typed in box
		IsInt32(txtBox, "Course Number") &&		// is a number
		IsWithinRange(txtBox, "Course Number", 100, 300) // within range
		) 
	{
		String^ prefix = gcnew String(Course::getPrefix().c_str());
		int courseNumber = Convert::ToInt32(txtBox->Text);

		if (courseList->searchCourse(courseNumber))
		{
			CourseList list;

			// not efficient but should look through all the courses
			for (int i = 100; i < 300; ++i)
			{
				Course tempCourse;
				if (courseList->searchCourse(i, tempCourse))
				{
					for (int num : tempCourse.getCoursePrereqs())
					{
						if (num == courseNumber)
						{
							list.addCourse(tempCourse);
						}
					}
				}
			}

			if (list.getNumberOfCourses() == 0)
			{
				MessageBox::Show("There are no courses that require "
					+ prefix + courseNumber + " as a prerequisite.");
			}
			else
			{
				std::string temp = "";
				list.retrieveAllCourses(temp);
				String^ allCourses = gcnew String(temp.c_str());
				MessageBox::Show("There are: " + list.getNumberOfCourses()
					+ " course(s) that require " + prefix + courseNumber + 
					" as a prerequisite." +
					"\n\nThese are the courses that require " + 
					prefix + courseNumber + 
					":\n\n" + allCourses);
			}

		}
		else
		{
			// if an invalid course number, let user know there was an error
			MessageBox::Show("Course Number: " + prefix + courseNumber +
				"\n\nThis course is not in the database." +
				"\nTry a different course number.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}