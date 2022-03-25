#include "Number.h"
#include <iostream>
#include <string.h>
using namespace std;

Number :: Number ( const char * vue , int base )
{
    this -> baza = base ;
    strcpy ( this -> v , vue ) ;
}
Number :: ~Number ()
{

}
void Number :: Print ()
{
    cout << "Numarul: " ;
    for ( int i = 0 ; i < strlen ( this -> v ) ; i ++ )
        cout << this -> v [ i ] ;
    cout << "Baza: " << this -> baza ;
   
}
Number :: Number ( Number & d )
{
    this -> baza = d . baza ;
    strcpy ( this -> v , d . v ) ;
}
int  Number :: Difference( const Number &n )
{
    int n1 = 0 ;
    int n2 = 0 ;
    int putere = 0 ;
    for ( int i = strlen ( this -> v ) - 1 ; i >= 0 ; i -- )
    {
        n1 = n1 + ( ( this -> v [ i ] - 48 ) * pow ( this -> baza , putere ) ) ;
        putere ++ ;
    }
    putere = 0 ;
    for ( int i = strlen ( n . v ) - 1 ; i >= 0 ; i -- )
    {
        n2 += (  ( n . v [ i ] - 48 ) * pow ( n . baza , putere ) ) ;
        putere ++ ;
    }
    return n1-n2;
}
bool Number :: operator > ( const Number &n )
{
    if ( Difference( n ) > 0 )
        return true ;
    return false ;
}
bool Number :: operator < ( const Number &n )
{
    if ( Difference( n ) < 0 )
        return true ;
    return false ;
}
bool Number :: operator <= ( const Number &n )
{
    if ( Difference( n ) <= 0 )
        return true ;
    return false ;
}
bool Number :: operator >= ( const Number &n )
{
    if ( Difference( n ) >= 0 )
        return true ;
    return false ;
}
bool Number :: operator == ( const Number &n )
{
     if ( Difference( n ) == 0 )
        return true ;
    return false ;
}
void Number :: SwitchBase ( int newBase )
{
    int numar = 0 ;
    int putere = 0 ;
    for ( int i = strlen ( this -> v ) - 1 ; i >= 0 ; i -- )
    {
        numar += ( ( this -> v [ i ] - 48 ) * pow ( this -> baza , putere ) ) ;
        putere ++ ;
    }
    this -> baza = newBase ;
    
    int nr = 0 ;
    int p = 1 ;
     
    while ( numar >= 0 )
    {
        nr = ( nr % this -> baza ) * p + nr ;
        p *= 10 ;
        numar /= this -> baza ;
    }
    
}
int Number :: GetDigitsCount  ( )
{
    return strlen ( this -> v ); 
}
int  Number :: GetBase ( )
{
    int max = 1;
    for ( int i = strlen ( this -> v ) - 1 ; i >= 0 ; i -- )
    if( (this -> v [ i ] - 48) > max )
    max = max + v [ i ] - 48;
    return max + 1 ;
}