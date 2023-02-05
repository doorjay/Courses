/*
    Pradhan, Dorje

    Fall 2022
    CS A250 -  C++ 2
    Project: CS Courses
*/

#include "CourseList.h"

#include <iostream>
using namespace std;

// Copy constructor
CourseList::CourseList(const CourseList& otherList)
{
    if (otherList.first == nullptr)
    {
        first = nullptr;
        last = nullptr;
        count = 0;
    }
    else
    {
        Node* otherListCurrent = otherList.first;
        first = new Node(otherListCurrent->getCourse(), nullptr);

        Node* current = first;
        while (otherListCurrent->getNext() != nullptr)
        {
            otherListCurrent = otherListCurrent->getNext();
            current->setNext(new Node(otherListCurrent->getCourse(), nullptr));
            current = current->getNext();
        }
        last = current;
    }

    count = otherList.count;
}

// Definition overloaded assignment operator
CourseList& CourseList::operator=(const CourseList& rightSide)
{
    if (&rightSide == this)
    {
        cerr << "Attempted assignment to itself.\n";
    }
    else
    {
        if (rightSide.first == nullptr)
        {
            clearList();
        }
        else if (first == nullptr)
        {
            copyCallingObjIsEmpty(rightSide);
        }
        else if (count == rightSide.count)
        {
            copyObjectsSameLength(rightSide);
        }
        else if (count > rightSide.count)
        {
            copyCallingObjLonger(rightSide);
        }
        else
        {
            copyCallingObjShorter(rightSide);
        }
    }

    return *this;
}

// Definition function copyCallingObjIsEmpty
void CourseList::copyCallingObjIsEmpty(const CourseList& otherList)
{
    Node* otherListCurrent = otherList.first;
    first = new Node(otherListCurrent->getCourse(), nullptr);
    Node* current = first;

    while (otherListCurrent->getNext() != nullptr)
    {
        otherListCurrent = otherListCurrent->getNext();
        current->setNext(new Node(otherListCurrent->getCourse(), nullptr));
        current = current->getNext();
    }

    count = otherList.count;
}

// Definition function copyObjectsSameLength
void CourseList::copyObjectsSameLength(const CourseList& otherList)
{
    Node* otherListCurrent = otherList.first;
    Node* current = first;

    while (current != nullptr)
    {
        current->setCourse(otherListCurrent->getCourse());
        otherListCurrent = otherListCurrent->getNext();
        current = current->getNext();
    }
}

// Definition function copyCallingObjLonger
// Definition function copyCallingObjLonger
void CourseList::copyCallingObjLonger(const CourseList& otherList)
{
    Node* otherListCurrent = otherList.first;
    Node* current = first;
    current->setCourse(otherListCurrent->getCourse());

    while (otherListCurrent->getNext() != nullptr)
    {
        current->getNext()->setCourse(otherListCurrent->getNext()->getCourse());

        // advance pointers
        otherListCurrent = otherListCurrent->getNext();
        current = current->getNext();
    }

    last = current;
    count = otherList.count;
    delete current->getNext(); // snip the end
    current->setNext(nullptr); // no dangle
}

// Definition function copyCallingObjShorter
void CourseList::copyCallingObjShorter(const CourseList& otherList)
{
    Node* otherListCurrent = otherList.first;
    Node* current = first;

    while (otherListCurrent != nullptr)
    {
        // only nullptr when it has not been given a Node
        if (current == nullptr) 
        {
            addCourse(otherListCurrent->getCourse());
        }
        else
        {
            current->setCourse(otherListCurrent->getCourse());
            current = current->getNext(); // only advance here
        }

        // advance other pointer
        otherListCurrent = otherListCurrent->getNext();
    }

    count = otherList.count;
}

// Destructor
CourseList::~CourseList()
{
    if (first != nullptr)
    {
        clearList();
    }
}