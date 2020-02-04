
#include <iostream>

#include<string.h>

#include <math.h>

using namespace std;



 bool isLetter( char S)

 {

 return 'A'<=S && S<='Z';



 }



//din baza 10 in baza q data , q<10

int f1 (int n , int q ) //checked

{



int rez = 0;

 //1223 -> in baza 5

   int i = 0;

    while (n!=0)

    {

        int rest  = n%q;



        n/=q;

        rez += pow(10 , i)*rest;

        i++;

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

        char c = 'A'+rest-10;

        rez[i] =c;



        i++;

     }

        else

        {

         // facem restul un caracter

          char c = rest +'0';



          rez[i] =c ;

           i++;

        }

    }

rez[i+1]=NULL;

   char rez1[100];

   for (int i = strlen(rez), j = 0; i >= 0; i--, j--) {

       rez1[j] = rez[i];



   }

   cout << strlen(rez)<< "lenght";

   rez1[strlen(rez)-1] = NULL;

return rez1;

}//checked



//din baza  q<10  in baza 10 //checked
int f3(int n , int q )

{

//se inmulteste cu puteri ale lui  i

    //1234 ->

int rez = 0;

int i = 0;

while(n!=0)

    {

    rez += n % 10 * pow(q, i);

    n /= 10;

    i++;

    }

return rez;

}
//din baza p in baza q
char* f4 (int p , int q , int n )
{
  int temp;
    char* fin ;
    if(p<10)
    {
        //daca baza este mai mica decat 10

         temp = f3(n , p); //se converteste in baza 10

       //se conveteste din baza 10 in baza q
       if(q<10)  {
      int temp1 = f1(temp ,q );
//convert to char
       }

        else {
            fin =  f2(temp , q );
            return fin;
        }
    }











}

//din baza q>10 in baza b



int main ()
{








}



