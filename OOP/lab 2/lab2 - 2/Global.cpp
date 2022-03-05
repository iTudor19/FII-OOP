#include "Global.h"
#include<string.h>
#include"Student.h"


int comparemath(Student * obiectul1, Student * obiectul2) 
{

	if (obiectul1->getmath() < obiectul2->getmath())
		return -1;
	if (obiectul1->getmath() == obiectul2->getmath())
		return 0;
	if (obiectul1->getmath() > obiectul2->getmath())
		return 1;

}
int compareenglish(Student * obiectul1, Student * obiectul2) 
{

	if (obiectul1->getenglish() < obiectul2->getenglish())
		return -1;
	if (obiectul1->getenglish() == obiectul2->getenglish())
		return 0;
	if (obiectul1->getenglish() > obiectul2->getenglish())
		return 1;

}

int comparehistory(Student * obiectul1, Student * obiectul2) 
{

	if (obiectul1->gethistory() < obiectul2->gethistory())
		return -1;
	if (obiectul1->gethistory() == obiectul2->gethistory())
		return 0;
	if (obiectul1->gethistory() > obiectul2->gethistory())
		return 1;

}
int compareaverage(Student * obiectul1, Student * obiectul2) 
{

	if (obiectul1->getaverage() < obiectul2->getaverage())
		return -1;
	if (obiectul1->getaverage() == obiectul2->getaverage())
		return 0;
	if (obiectul1->getaverage() > obiectul2->getaverage())
		return 1;

}
int comparename(Student * obiectul1, Student * obiectul2) 
{

	if (obiectul1->getname() < obiectul2->getname())
		return -1;
	if (obiectul1->getname() == obiectul2->getname())
		return 0;
	if (obiectul1->getname() > obiectul2->getname())
		return 1;

}


