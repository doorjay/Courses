/*
	Pradhan, Dorje

	Fall 2022
	CS A250 -  C++ 2
	Project: CS Courses
*/

#include "CourseList.h"

#include <iostream>
using namespace std;

// Definition function addCourse 
void CourseList::addCourse(const Course& newCourse)
{
	insertInOrder(new Node(newCourse, nullptr));
}

// Definition function addCourse
void CourseList::addCourse(int courseNum, 
						   const std::string& courseName,
						   int courseUnits, 
						   const std::set<int>& prereqs)
{
	insertInOrder( new Node( Course(courseNum,
									courseName, 
									courseUnits, 
									prereqs ), nullptr ) );
}

// Definition function getPrefix
const std::string& CourseList::getPrefix() const
{
	return first->getCourse().getPrefix();
}

// Definition function getNumberOfCourses
int CourseList::getNumberOfCourses() const
{
	return count;
}

// Definition function isEmpty
bool CourseList::isEmpty() const
{
	return first == nullptr;
}

// Definition function searchCourse (courseNumber)
// Assume list is non-empty.
bool CourseList::searchCourse(int courseNum) const
{
	return getCourseLocation(courseNum) != nullptr;
}

// Definition function searchCourse (courseNumber, courseName)
// Assume list is non-empty.
bool CourseList::searchCourse(int courseNum,
							  std::string& courseName) const
{
	Node* location = getCourseLocation(courseNum);
	if (location != nullptr)
	{
		courseName = location->getCourse().getCourseName();
		return true;
	}

	return false;
}

// Definition function searchCourse(courseNumber, course) 
// Assume list is non-empty.
bool CourseList::searchCourse(int courseNum, Course& course) const
{
	Node* location = getCourseLocation(courseNum);
	if (location != nullptr)
	{
		// use Course::getCourse() for the actual address
		course = location->getCourse().getCourse();
		return true;
	}

	return false;
}

// Definitiion deleteCourse
// Assume list is non-empty.
// Assume course is in the list.
void CourseList::deleteCourse(int courseNum)
{
	if (first->getCourse().getCourseNumber() == courseNum)
	{
		Node* temp = first;
		first = first->getNext();

		// don't leave a dangling pointer
		delete temp;
		temp = nullptr;
	}
	else
	{
		Node* current = first->getNext();
		Node* prev = first;

		while (current != nullptr)
		{
			if (current->getCourse().getCourseNumber() == courseNum)
			{
				prev->setNext(current->getNext());
				delete current;
				current = nullptr;
			}
			else
			{
				prev = current;
				current = current->getNext();
			}
		}
	}

	--count;
}

// Definition retrieveAllCourses
// Assume list is non-empty.
void CourseList::retrieveAllCourses(std::string& allCourses) const
{
	Node* current = first;
	allCourses = ""; // do not assume string is empty
	while (current != nullptr)
	{
		allCourses += current->getCourse().getPrefix();
		// using to_string() because otherwise it outputs symbols???
		allCourses += to_string(current->getCourse().getCourseNumber());
		allCourses += " - " + current->getCourse().getCourseName();
		allCourses += "\n";

		current = current->getNext();
	}
}

// Definition clearList
void CourseList::clearList()
{
	if (first != nullptr)
	{
		Node* current = first;
		while (current != nullptr)
		{
			Node* temp = current->getNext();
			delete current;
			current = nullptr;
			current = temp;
		}

		// back to default values
		count = 0;
		first = nullptr;
		last = nullptr;
	}
}

// Definition function getCourseLocation
Node* CourseList::getCourseLocation(int courseNum) const
{
	if (first->getCourse().getCourseNumber() == courseNum)
	{
		return first;
	}
	else if (last->getCourse().getCourseNumber() == courseNum)
	{
		return last;
	}
	else
	{
		Node* current = first->getNext();

		while (current != nullptr)
		{
			if (current->getCourse().getCourseNumber() == courseNum)
			{
				return current;
			}
			else
			{
				current = current->getNext();
			}
		}
	}

	return nullptr;
}