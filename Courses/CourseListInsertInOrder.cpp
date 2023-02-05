/*
    Pradhan, Dorje

    Fall 2022
    CS A250 -  C++ 2
    Project: CS Courses
*/

#include "CourseList.h"

// Definition function insertInOrder
// Assume there are no duplicates.
void CourseList::insertInOrder(Node* newCourse)
{
    if (first == nullptr)
    {
        first = newCourse;
        last = newCourse;
    }
    // If first > newCourse, newCourse goes before "first"
    else if (first->getCourse().getCourseNumber() >
         newCourse->getCourse().getCourseNumber())
    {
        newCourse->setNext(first);
        first = newCourse;
    }
    // if newCourse > last, newCourse goes after "last"
    else if (newCourse->getCourse().getCourseNumber() >
                  last->getCourse().getCourseNumber())
    {
        last->setNext(newCourse);
        last = newCourse;
    }
    else
    {
        // need to figure out a way to do this without creating a new Node
        Node* current = first;
        int courseNum = newCourse->getCourse().getCourseNumber();
        
        while (current->getNext() != nullptr && 
            current->getNext()->getCourse().getCourseNumber() <
            courseNum)
        {
            current = current->getNext();
        }

        newCourse->setNext(current->getNext());
        current->setNext(newCourse);
        
    }

    ++count;
}