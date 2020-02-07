
#include <iostream>

#include<string.h>

#include <math.h>

using namespace std;



bool isLetter(char S)

{

    return 'A' <= S && S <= 'Z';



}

int f(char n[20], int q)
{    //1010 binar ->  0xq la puterea 0
    //A in base 11 -> 10
    int x = 0, i;

    for (i = strlen(n) - 1; i >= 0; i--)
    {

        if (!isLetter(n[i]))
        {
            int temp = n[i] - '0';
            x += temp * pow(q, strlen(n) - 1 - i);
        }

        //daca este litera
        else {

            int temp = n[i] - 'A' + 10;
            x += temp * pow(q, strlen(n) - 1 - i);

        }



    }

    return x;
}

//din baza 10 in baza q data , q<10
int f1(long long n, int q) //checked

{



    double  rez = 0;

    //1223 -> in baza 5

    int i = 0;

    while (n != 0)

    {

        int rest = n % q;



        n /= q;

        rez += pow(10, i) * rest;

        i++;

    }

    return rez;

}

//din baza 10 in baza q data , q>10
void fp(int n, int q, char rasp[20])

{
    int i = 0;

    char rez[30];

    //1234 -> baza 11 A22

    while (n != 0)

    {

        int rest = n % q;

        n /= q;

        if (rest > 9)

        {

            char c = 'A' + rest - 10;
            rez[i] = c;

        }

        else

        {
            // facem restul un numar caracter

            char c = rest + '0';
            rez[i] = c;


        }
        i++;
    }
    rez[i] = NULL;



    //return rez inversat

    //22A --> A22
    char rez1[20];
    for (int j = i - 1; j >= 0; j--)
    {

        rasp[i - j - 1] = rez[j];



    }

    rasp[i] = NULL;

}//checked

//din baza  q<10  in baza 10 //checked
int f3(int n, int q)

{

    //se inmulteste cu puteri ale lui  i

        //1234 ->

    int rez = 0;
    int i = 0;

    while (n != 0)

    {

        rez += n % 10 * pow(q, i);

        n /= 10;

        i++;

    }

    return rez;

}
//din baza p in baza q
void f4(int p, int q, char n[20])
{


    //se converteste numarul in baza 10 indiferent

    int temp = f(n, p);

    //in temp e numarul in baza 10
    //daca q este mai mare decat 10
    if (q > 10) fp(temp, q, n);

    else {
        cout << "Rezultatul este" << " " << f1(temp, q) << endl;

    }


}
//dim baza q  in baza 10


int main()
{


    int aleg;
        do
    {

        cout << "Introdu alegerea : " << endl;

        cout << "1- Din baza introdusa in baza 10 :" << endl;
        cout << "2-Din baza 10 in baza introdusa" << endl;
        cout << "3-Din baza q in baza p introduse" << endl;
        cout << "4- IESIRE" << endl;
        cin >> aleg;

        switch (aleg)
        {
            int  q;
        case 1: //din baza introdusa in baza 10
            cout << "Introdu baza din care vrei sa faci conversia" << endl;
            cin >> q;
            char n[20];
            cout << "Introdu numarul" << endl;
            cin>>n;

            if (q == 10) cout <<"Raspunsul este "<< " " << n;
            else cout << "Raspunsul este" << " " << f(n, q);

            break;

            //din baza 10 in baza introdusa


        case 2 :
            cout << "Introdu numarul in baza 10 " << endl;
            int n1;
            cin >> n1;
            char rasp[20];
            cout << "Introdu baza in care vrei sa faci conversia" << endl;
            cin >> q;
            if (q < 10) cout << "rezultatul este" << " " << f1(n1, q) << endl;
            else {
                //daca baza este mai mare decat 10 se afiseaza char
                fp(n1, q, rasp);
                cout << "Rezultatul este " << " " << rasp << endl;

            }

            break;


        case 3 :
            //din baza q in baza p

            int b;
            cout << "Introdu baza din care vrei sa faci conversia" << endl;
            cin >> b;
            cout << "Introdu baza in care vrei sa faci conversia" << endl;
            cin >> q;
            cout << "Introdu numarul" << endl;

            char np[20];
            cin >> np;

            f4(b, q, np);
             cout<<"Raspunsul este "<<" " <<np<<endl;


break;
        case 4: cout<<"Ai selectat sa iesi din aplicatie" << endl;
            break;
        }
        cout << endl;
        cout << "Continua ...";
        cout << endl;
        cin.get();


    } while (aleg != 4);







    cin >> aleg;

}




