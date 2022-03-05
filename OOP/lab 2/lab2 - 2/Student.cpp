#include <iostream>
#include "Global.h"
#include "Student.h"

void Student::setname(char x[])
{
    for (int i = 0; i < strlen(x); i++)
        this->name1[i] = x[i];
}
void Student::setmath(float x)
{
    math1 = x;
}
void Student::setenglish(float x)
{
    english1 = x;
}
void Student::sethistory(float x)
{
    history1=x;
}
float Student::getenglish()
{
    return english1;
}
float Student::getmath()
{
    return math1;
}
float Student::gethistory()
{
    return history1;
}
char Student::getname()
{
    return name1[101];
}
float Student::getaverage()
{
    return (math1 + english1 + history1) / 3;
}