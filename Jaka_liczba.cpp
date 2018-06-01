#include <iostream>
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Suma(int nLiczba){
	int nSuma=0;
	for (int i=1; i<=nLiczba; i++){
		nSuma+=i;
	}
	return nSuma;
}
int main(int argc, char** argv) {
	int nLiczba;
	cout<<"Wprowadz liczbe: ";
	cin>>nLiczba;
	
	if (nLiczba < 0){
		cout<<"liczba ujemna";
	}
	else{
		if (nLiczba >=0 && nLiczba <10){
		cout<<"Liczba jednocyfrowa";
		}
		else{
			if (nLiczba >=10 && nLiczba <100){
			cout<<"liczba dwucyfrowa";
			}
			else
			cout<<"pozostale";	
		}
	}
	getch();
}
