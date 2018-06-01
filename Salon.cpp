#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Salon_Samochodowy{
	public:
		string model;
		int cena;
		Salon_Samochodowy(){
			cena=0;
		}
};
class Motocykl : Salon_Samochodowy{
	private:
		int cena;
		string model;
		int dostepnosc;
		
		public:
			Motocykl(int _cena,string _model,int _dostepnosc){
				cena=_cena;
				model=_model;
				dostepnosc=_dostepnosc;
			}
			void pokaz(){
				cout<<"Motocykl: "<<endl;
				cout<<"Cena "<<cena<<endl;
				cout<<"model "<<model<<endl;
				cout<<"Dostepnosc "<<dostepnosc<<endl;
			}
};
int main(int argc, char** argv) {
	Motocykl bike=Motocykl(1500,"yamaha",9);
	bike.pokaz();
	return 0;
}
