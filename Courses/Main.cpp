// Program entry  THIS ONE

#include "frmCourses.h"
#include "CourseList.h"
//#include "Testing.h"
#include "TestingCases.h"

using namespace System::Windows::Forms;

[System::STAThreadAttribute]

int main(cli::array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CourseList *courseList = new CourseList;
	createCourseList(*courseList);

	Courses::frmCourses form(courseList);
	Application::Run(%form);

	delete courseList;
	courseList = nullptr;

	return 0;
}