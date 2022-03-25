#pragma once

class Number
{
private:

    char v [ 100 ] ;
    int baza ;

public:

   Number (const char * value, int base ) ; // where base is between 2 and 16
   ~Number ( ) ;
    Number ( Number & d ) ;
    int Difference ( const Number &n ) ;
    int operator [] ( int numar ) ;
    bool operator > ( const Number &n ) ;
    bool operator < ( const Number &n ) ;
    bool operator <= ( const Number &n ) ;
    bool operator >= ( const Number &n ) ;
    bool operator == ( const Number &n ) ;
   void SwitchBase ( int newBase ) ;
   void Print ( ) ;
   int  GetDigitsCount ( ) ; // returns the number of digits for the current number
   int  GetBase ( ) ; // returns the current base
} ;
