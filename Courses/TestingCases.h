#ifndef TESTINGCASES_H
#define TESTINGCASES_H

#include "CourseList.h"

#include <string>
#include <set>

void createCourseList(CourseList& courseList);

void getData(int& number, std::string& newName, 
	int& newUnits, std::set<int>& newPrereqs, int idx);

#endif
