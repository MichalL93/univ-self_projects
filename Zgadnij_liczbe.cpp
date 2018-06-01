#include <iostream>
#include <ctime>
#include <conio.h>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	srand((int) time(NULL));
	int nWylosowana=rand()%100+1;
	cout<<"Wylosowano liczbe z przedziali 1-100."<<endl;
	
	int nWprowadzona;
	cout<<"Sprobuj ja odgadnac"<<endl;
	cin>>nWprowadzona;
	
	while (nWprowadzona!=nWylosowana){
		if (nWprowadzona<nWylosowana){
			cout<<"Liczba jest zbyt mala."<<endl;
			cout<<"Sprobuj jeszcze raz"<<endl;
			cin>>nWprowadzona;
			}
			else{
				cout<<"Liczba jest za duza"<<endl;
				cout<<"Sprobuj jeszcze raz"<<endl;
			    cin>>nWprowadzona;
			}
		}
	cout<<"Celny strzal."<<endl;
	getch();
}
