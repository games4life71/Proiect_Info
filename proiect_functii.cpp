#include <iostream>
#include<string.h>
#include <math.h>
using namespace std;

 bool isLetter( char S)
 {
 return 'A'<=S && S<='Z';

 }

//din baza 10 in baza q data , q<10
int f1 (int n , int q )
{

int rez = 0;
 //1223 -> in baza 5
   int i = 0;
    while (n!=0)
    {
        int rest  = n%q;
        rez += pow(10 , i)*rest;
    }
    return rez;
}

//din baza 10 in baza q data , q>10

char* f2 ( int n , int q )
{   int i = 0 ; 
    char rez[30];
//1234 -> baza 11 A22 
   while(n!=0)
    {
        int rest = n%q;
        if(rest >9)
     {
        char c = 'A'+rest-2;
        rez[i] =c;
     }
        else 
        {
         // facem restul un caracter 
          
            
        }
    }
    
    
    
    
    
    
}




int main()
{

    return 0;
}
