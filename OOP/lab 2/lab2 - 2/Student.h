#pragma once

class Student

 {
     int math1, english1, history1, average1;
     char name1[101];

     public:
     char getname();
    float getmath();
    float getenglish();
    float gethistory();
    float getaverage();
     void setname(char x[]);
     void setmath(float x);
     void setenglish(float x);
     void sethistory(float x);
     

 };