#include <iostream>
#include <string.h>
#include "Global.h"
#include "Student.h"

int main()
{
    Student n,m;
    n.setname("Vasile");
    m.setname("Raluca");
    n.setmath(10.0);
    m.setmath(9.5);
    n.sethistory(8.5);
    m.sethistory(9.25);
    n.setenglish(6.0);
    m.setenglish(10.0);
    std::cout<<compareenglish(& n, & m);
}