

#include <iostream>
#include <string.h>
#include <Windows.h> 
#include <stdlib.h>
#include <utility> 


using namespace std;

 
void Console_Clear() {

	system("CLS");

}

int default_array[100][100];
int min = 9999; 
bool arrayBOOL = false;
bool repeat_bool = false;
int p_curr = 2;
int default_n, default_m;
int main()
{ 
	pair <int, int > coordMIN;
	pair <int, int > coordMAX;
	
	//menu 
	int menu_choice; 
	 
	do
	{
		cout << "Te rog sa selectezi  o varianta :" << endl;
		cout << "1- BORDARE MATRICE CU CARACTER CERUT " << endl; 
		cout << "2-GASIRE ELEMENT MININM/MAXIM IN MATRICE " << endl; 
		cout << "3-ADUNARE 2 MATRICI " << endl; 
		cout << "4-INMULTIRE 2 MATRICI " << endl; 
		cout << "5-RIDICARE LA PUTERE A MATRICII " << endl; 
		cout << "6-TRANSPUSA UNEI MATRICI " << endl;	
		cout << "." << endl;
		cout << "." << endl;
		cout << "." << endl;
		cout << "0-IESIRE " << endl;
		cin >> menu_choice; 
		
		switch (menu_choice)
		{
#pragma region Case 1 - Bordare matrice 

		case 1:
			int  n, m; //doar pentru cazul 1

			int A[100][100];
			//verificam daca utilizatorul are o matrice salvata anterior 

			if (arrayBOOL)
			{
				cout << "Am detectat  o matrice salvata anterior. Doriti sa initializati alta ? " << endl;
				cout << "1-DA" << " " << "2-NU" << endl;
				int change_array;
				cin >> change_array;
				//se initializeaza o alta matrice 
				if (change_array == 1)
				{
					Console_Clear();
					//date matrice 

					cout << "Introdu numarul de linii si de coloane" << endl;

					cin >> n >> m;
					Console_Clear();
					cout << "Introdu pe rand elementele matricei" << endl;


					// citire matrice 
					for (int i = 0; i < n; i++)
					{
						for (int j = 0; j < m; j++)
						{
							cin >> A[i][j];
						}
					}
					arrayBOOL = false;
					goto END_READ;
				}
				//daca utlizatoru vrea sa foloseasca aceeeasi matrice 
				else
				{
					n = default_n;
					m = default_m;
					for (int i = 0; i < n; i++)
					{
						for (int j = 0; j < m; j++)
						{
							A[i][j] = default_array[i][j];
						}
					}

					goto END_READ;
				}
			}



			Console_Clear();
			//date matrice 

			cout << "Introdu numarul de linii si de coloane" << endl;

			cin >> n >> m;
			Console_Clear();
			cout << "Introdu pe rand elementele matricei" << endl;


			// citire matrice 
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					cin >> A[i][j];
				}
			}



		END_READ:


			cout << "Introdu numarul cu care vrei sa bordezi matricea" << endl;
			int border_number;
			cin >> border_number;

			// se face bordarea matricei 
			cout << "Se executa bordarea matricei ..." << endl;


			int B[100][100];
			for (int i = 0; i < n + 2; i++)
			{
				for (int j = 0; j < m + 2; j++)
				{

					if (i == 0 || j == 0 || i == n + 1 || j == m + 1) B[i][j] = border_number;
					else { B[i][j] = 0; }
				}
			}

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{

					B[i + 1][j + 1] = A[i][j];

				}


			}

			for (int i = 0; i < n + 2; i++)
			{
				for (int j = 0; j < m + 2; j++)
				{

					cout << B[i][j] << " ";
				}
				cout << endl;
			}
			if (!arrayBOOL)
			{
				cout << "Doresti sa salvezi matricea introdusa anterior pentru toate exemplele ? " << endl;
				cout << "1-DA" << " " << "2-NU" << endl;
				int rasp;
				cin >> rasp;
				if (rasp == 1)
				{
					default_n = n;
					default_m = m;

					for (int i = 0; i < default_n; i++)
					{

						for (int j = 0; j < default_m; j++) {

							default_array[i][j] = A[i][j];

						}

					}

					cout << "Matrice salvata cu succes ! " << endl;

					arrayBOOL = true;
				}
				else arrayBOOL = false;
			}
			system("pause");
			Console_Clear();

			break;
#pragma endregion	
#pragma region case 2 - element maxim /minim

		case 2:

			int C[100][100];
			int nmax, mmax;

			if (arrayBOOL)
			{
				cout << "Am detectat  o matrice salvata anterior. Doriti sa initializati alta ? " << endl;
				cout << "1-DA" << " " << "2-NU" << endl;
				int change_array;
				cin >> change_array;
				//se initializeaza o alta matrice 

				if (change_array == 1)
				{
					Console_Clear();
					//date matrice 

					cout << "Introdu numarul de linii si de coloane" << endl;

					cin >> nmax >> mmax;
					Console_Clear();
					cout << "Introdu pe rand elementele matricei" << endl;


					// citire matrice 
					for (int i = 0; i < nmax; i++)
					{
						for (int j = 0; j < mmax; j++)
						{
							cin >> C[i][j];
						}
					}
					goto END_READ1;
				}
				//utilizatrorul decide sa foloseasca matricea default 
				else
				{
					mmax = default_m;
					nmax = default_n;
					for (int i = 0; i < default_n; i++)
					{
						for (int j = 0; j < default_m; j++)
						{
							C[i][j] = default_array[i][j];
						}
					}

					goto END_READ1;
				}

			}


			//initializare matrice daca nu exista una deja salvata


			Console_Clear();
			//date matrice 

			cout << "Introdu numarul de linii si de coloane" << endl;

			cin >> nmax >> mmax;
			Console_Clear();
			cout << "Introdu pe rand elementele matricei" << endl;


			// citire matrice 
			for (int i = 0; i < nmax; i++)
			{
				for (int j = 0; j < mmax; j++)
				{
					cin >> C[i][j];
				}
			}

		END_READ1:

			cout << "Afisare minim matrice - 1 " << endl;
			cout << "Afisare maxim matrice - 2 " << endl;
			int rasp1;
			cin >> rasp1;

			switch (rasp1)

			{

				//case 1 -> se afiseaza minimul matricei 
			case 1: //raspunsul este 1 


				for (int i = 0; i < nmax; i++)
				{
					for (int j = 0; j < mmax; j++)
					{
						if (C[i][j] < min)
						{
							min = C[i][j];
							coordMIN.first = i;
							coordMIN.second = j;
						}
					}
				}

				for (int i = 0; i < nmax; i++)
				{
					for (int j = 0; j < mmax; j++)
					{

						cout << C[i][j] << " ";

					}

					cout << endl;

				}

				cout << endl;
				cout << endl;

				cout << "Valoare minima a matricei este " << " " << min << endl;
				cout << "Coordonatele acesteia sunt" << " " << " linia " << " " << coordMIN.first + 1 << " " << "coloana" << " " << coordMIN.second + 1 << endl;
				system("pause");
				break;


				//case 2 -> se afiseaza maximul matricei 

			case 2: //raspunsul este 2 


				int max = -9999;

				for (int i = 0; i < nmax; i++)
				{
					for (int j = 0; j < mmax; j++)
					{
						if (C[i][j] > max)
						{
							max = C[i][j];
							coordMAX.first = i;
							coordMAX.second = j;
						}
					}
				}

				for (int i = 0; i < nmax; i++)
				{
					for (int j = 0; j < mmax; j++)
					{

						cout << C[i][j] << " ";

					}

					cout << endl;
					cout << endl;

				}
				cout << endl;
				cout << "Valoare maxima a matricei este " << " " << max << endl;
				cout << "Coordonatele acesteia sunt" << " " << " linia " << " " << coordMAX.first + 1 << " " << "coloana" << " " << coordMAX.second + 1 << endl;
				system("pause");


				break;
			}

			if (!arrayBOOL)
			{

				cout << "Doresti sa salvezi matricea introdusa anterior pentru toate exemplele ? " << endl;
				cout << "1-DA" << " " << "2-NU" << endl;
				int rasp_case2;
				cin >> rasp_case2;
				if (rasp_case2 == 1)
				{
					default_n = nmax;
					default_m = mmax;
					for (int i = 0; i < default_n; i++)
					{

						for (int j = 0; j < default_n; j++) {

							default_array[i][j] = C[i][j];

						}

					}

					cout << "Matrice salvata cu succes ! " << endl;

					arrayBOOL = true;
				}
				else arrayBOOL = false;
			}
			system("pause");
			Console_Clear();



			break;
#pragma endregion
#pragma region case 3  - adunare a 2 matrici

		case 3:

			//adunare a 2 matrici 

			int M1[100][100], M2[100][100];



			Console_Clear();
			//date matrice 
			int n1, m1;
			int n2, m2;
			//se repeta cat timp numarele  nu sunt egale 
			do {
				cout << "Introdu numarul de linii si de coloane al primei matrice : " << endl;

				cin >> n1 >> m1;
				Console_Clear();
				cout << "Introdu numarul de linii si de coloane al celei de-a doua matrice :" << endl;

				cin >> n2 >> m2;
				if (m1 != m2 || n1 != n2)
				{
					repeat_bool = true; cout << "Imi pare rau ,dar numarul de linii si coloane nu corespund " << endl;
				}
				else if (m1 == m2 && n1 == n2) repeat_bool = false;

			} while (repeat_bool);


			cout << "Introdu pe rand elementele  primei matrici" << endl;


			// citire matrice 1 
			for (int i = 0; i < n1; i++)
			{
				for (int j = 0; j < m1; j++)
				{
					cin >> M1[i][j];
				}
			}

			Console_Clear();






			Console_Clear();
			cout << "Introdu pe rand elementele celei de-a doua matrici" << endl;


			// citire matrice 2
			for (int i = 0; i < n2; i++)
			{
				for (int j = 0; j < m2; j++)
				{
					cin >> M2[i][j];
				}
			}

			Console_Clear();

			cout << "Asteapta cat timp se calculeaza suma ..." << endl;
			Sleep(2500);
			cout << "Suma celor 2 matrici este : " << endl;

			for (int i = 0; i < n2; i++)
			{
				for (int j = 0; j < m2; j++)
				{
					cout << M1[i][j] + M2[i][j] << " ";
				}
				cout << endl;
			}






			break;
#pragma endregion
#pragma region case 4 - inmultire a doua matrici 

		case 4:

			int F1[10][10], F2[10][10], F3[10][10];
			//se face inmultirea a 2 matrici  
			Console_Clear();
			//date matrice 
			int l1, c1;
			int l2, c2;
			//se repeta cat timp numarele  nu sunt egale 
			do {
				cout << "Introdu numarul de linii si de coloane al primei matrice : " << endl;

				cin >> l1 >> c1;
				Console_Clear();
				cout << "Introdu numarul de linii si de coloane al celei de-a doua matrice :" << endl;

				cin >> l2 >> c2;
				if (c1 != l2)
				{
					repeat_bool = true; cout << "Imi pare rau ,dar numarul de linii si coloane nu corespund " << endl;
				}
				else if (c1 == l2) repeat_bool = false;

			} while (repeat_bool);

			//se citesc pe rand cele 2 matrici 
			cout << "Introdu	elementele  primei matricei pe rand" << endl;

			for (int i = 0; i < l1; i++)
				for (int j = 0; j < c1; j++)
					cin >> F1[i][j];

			cout << "Introdu	elementele  celei de-a doua matrice pe rand" << endl;

			for (int i = 0; i < l2; i++)
				for (int j = 0; j < c2; j++)
					cin >> F2[i][j];
			//se afiseaza cele 2 matrici 


	/*		for (int i = 0; i < l1; i++)
	    {
			{
				for (int j = 0; j < c1; j++)
					cout << F1[i] << " ";
			}
			cout << endl;
		}
			cout << endl;
			for (int i = 0; i < l2; i++)
			{
				{
					for (int j = 0; j < c2; j++)
						cout << F2[i][j] << " ";
				}
				cout << endl;
			}*/




				/*system("PAUSE");*/

			//se face inmultirea propriu-zisa 
			for (int i = 0; i < l1; i++)
			{
				for (int j = 0; j < c2; j++)
				{
					int sum = 0;
					for (int k = 0; k < c1; k++) 
					{

						sum += F1[i][k] * F2[k][j];
					}
					F3[i][j] = sum;
				}
			}

			//se afiseaza matricea rezultata  
			Console_Clear();
			cout << "Matricea rezultanta este  :" << endl;
			for (int i = 0; i < l1; i++)
			{
				for (int j = 0; j < c2; j++)
				{
					cout << F3[i][j] << " ";
				}
				cout << endl;
			}




			break;


#pragma endregion
#pragma region case5 - ridicare la putere 



		case 5:




			int P[100][100], R[50][50], Q[50][50];
			int n3, m3;
			 
			if (arrayBOOL)
			{
				cout << "Am detectat  o matrice salvata anterior. Doriti sa initializati alta ? " << endl;
				cout << "1-DA" << " " << "2-NU" << endl;
				int change_array;
				cin >> change_array;
				//se initializeaza o alta matrice 

				if (change_array == 1)
				{
					Console_Clear();
					//date matrice 

					cout << "Introdu numarul de linii si de coloane" << endl;

					cin >> n3 >> m3;
					Console_Clear();
					cout << "Introdu pe rand elementele matricei" << endl;


					// citire matrice 
					for (int i = 0; i < n3; i++)
					{
						for (int j = 0; j < m3; j++)
						{
							cin >> P[i][j];
						}
					}
					goto END_READ3;
				}
				//utilizatrorul decide sa foloseasca matricea default 
				else
				{
					n3 = default_n;
					m3 = default_m;

					for (int i = 0; i < default_n; i++)
					{
						for (int j = 0; j < default_m; j++)
						{
							P[i][j] = default_array[i][j];
							Q[i][j] = P[i][j];
						}
					}

					goto END_READ3;
				}

			}
			

			cout << "Te rog sa introduci numarul de linii si coloane " << endl;
			cin >> n3 >> m3;
			Console_Clear();
			cout<< "Introdu pe rand elementele matricei"<<endl;
			
			for (int i = 0; i < n3; i++)
			{
				for (int j = 0; j < m3; j++)
				{
					cin >> P[i][j];
					Q[i][j] = P[i][j];
				}
			}
			    
			END_READ3:
			
			cout << "Introdu puterea la care vrei sa se calculeze matricea " << endl;
			int pow;
			cin >> pow;

			Console_Clear();
			cout << "Se ridica la putere matricea ..." << endl;
			
	
			for(int times = 2 ; times <= pow  ;times++)
			{
				//R = P *Q ; 
				for (int i = 0; i < n3; i++)
				{
					for (int j = 0; j <m3; j++)
					{
						int sum = 0;
						for (int k = 0; k < m3; k++)
						{

							sum += P[i][k] * Q[k][j];
						}
						R[i][j] = sum;
					}
				}
			

				//P egal cu Q si se repeta 
				 
				for (int i = 0; i < n3; i++)
				{
					for (int j = 0; j < m3; j++)
					{
						
					Q[i][j] =R[i][j];
					}
				}



			}
			cout << "Rezultatul este : " << endl;

			//afisare rez 
			for (int i = 0; i < n3; i++)
			{
				for (int j = 0; j < m3; j++)
				{
					cout << R[i][j]<< " ";
				}
				cout << endl;
			}


			//daca nu este nici o matrice salvata .. 
			if (!arrayBOOL)
			{

				cout << "Doresti sa salvezi matricea introdusa anterior pentru toate exemplele ? " << endl;
				cout << "1-DA" << " " << "2-NU" << endl;
				int rasp_case2;
				cin >> rasp_case2;
				if (rasp_case2 == 1)
				{
					default_n = n3;
					default_m = m3;
					for (int i = 0; i < default_n; i++)
					{

						for (int j = 0; j < default_m; j++) {

							default_array[i][j] = P[i][j];

						}

					}

					cout << "Matrice salvata cu succes ! " << endl;

					arrayBOOL = true;
				}
				else { arrayBOOL = false; }
			}
			system("PAUSE");
			Console_Clear();
			

			break;











#pragma endregion
#pragma region case 6 - transpusa unei matrici 
		case 6:  //se face transpusa unei matrici 


			int T[100][100];  int nT, mT;
			if (arrayBOOL)
			{
				cout << "Am detectat  o matrice salvata anterior. Doriti sa initializati alta ? " << endl;
				cout << "1-DA" << " " << "2-NU" << endl;

				int change_array;
				cin >> change_array;
				//se initializeaza o alta matrice 

				if (change_array == 1)
				{
					Console_Clear();
					//date matrice 

					cout << "Introdu numarul de linii si de coloane" << endl;

					cin >> nT >> mT;
					Console_Clear();
					cout << "Introdu pe rand elementele matricei" << endl;


					// citire matrice 
					for (int i = 0; i < nT; i++)
					{
						for (int j = 0; j < mT; j++)
						{
							cin >> T[i][j];
						}
					}
					goto READ_ENDT;
				}

				else
				{



					//se copiaza matricea salvata in T 
					nT = default_n;
					mT = default_m;

					for (int i = 0; i < default_n; i++)
					{
						for (int j = 0; j < default_m; j++)
						{
							T[i][j] = default_array[i][j];
						}


					}


					goto READ_ENDT;

				}
			}
			// se face initializarea matricei daca nu  s-a gasit una salvata sau daca utilzatorul nu a vrut 


			Console_Clear();
			//date matrice 

			cout << "Introdu numarul de linii si de coloane" << endl;

			cin >> nT >> mT;
			Console_Clear();
			cout << "Introdu pe rand elementele matricei" << endl;


			// citire matrice 
			for (int i = 0; i < nT; i++)
			{
				for (int j = 0; j < mT; j++)
				{
					cin >> T[i][j];
				}
			}

		READ_ENDT:
			Console_Clear();

			int T1[100][100];

			//se copiaza coloanele pe linie si liiile pe coloane 

			cout << "Se efectueaza transpusa matricei ... " << endl;
			Sleep(2500);
			Console_Clear();
			for (int i = 0; i < nT; i++)
			{
				for (int j = 0; j < mT; j++)
				{

					T1[j][i] = T[i][j];


				}
			}

			cout << "Transpusa este : " << endl;
			cout << endl;

			for (int i = 0; i < nT; i++)
			{
				for (int j = 0; j < mT; j++)
				{

					cout << T1[i][j] << " ";


				}
				cout << endl;
			}




			break;
#pragma endregion

		case  0:   
			Console_Clear();
			cout << "O seara in continuare ! " << endl;  break;

		default: 
			Console_Clear();
			cout << "Imi pare rau dar nu ai introdus o optiune valida ..." << endl;

			break;




		}






		



	}


	while (menu_choice != 0);


}

