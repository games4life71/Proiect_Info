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
        n/=q;
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
        n/=q;
        if(rest >9)
     {
        char c = 'A'+rest-2;
        rez[i] =c;
     }
        else
        {
         // facem restul un caracter
          char c = rest +'0';
           rez[i] =c ;
        }
    }

rez[i+1]=NULL;
for(int k = 0 , j=i k<j;k++,j--)
    swap(rez[k] , rez[j]);


return rez;
}

//din baza  q<10  in baza 10
int f3(int q , int n )
{
//se inmulteste cu puteri ale lui  i
int rez = 0;
while(n!=0)
    {











    }




}

int main()
{

    return 0;
}
