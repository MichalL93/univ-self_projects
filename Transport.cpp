#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Transport 
{
	public:
  		int cena;
  		int czas;
  
     Transport() {
			cena = 0;
      czas = 0;
    }
};

class Samolot : Transport
{
  private:
  	int ilosc_miejsc;
  	string typ;
	public:
  	Samolot(int _cena, int _czas, int _ilosc_miejsc, string _typ) {
      cena = _cena;
      czas = _czas;
      ilosc_miejsc = _ilosc_miejsc;
      typ = _typ;
  	}
  
  	void pokaz()
    {
      cout << "SAMOLOT: " << endl;
      cout << "Cena lotu: " << cena << endl;
      cout << "Czas lotu: " << czas << endl;
      cout << "Typ samolotu: " << typ << endl;
      cout << "Ilosc miejsc: " << ilosc_miejsc << endl;
    }
};

class Pociag : Transport
{
  private:
  	int ilosc_wagonow;
  	string typ;
  
  public:
  	Pociag(int _cena, int _czas, int _ilosc_wagonow, string _typ) {
      cena = _cena;
      czas = _czas;
      ilosc_wagonow = _ilosc_wagonow;
      typ = _typ;
  	}
  
  void pokaz()
  {
      cout << "POCIAG: " << endl;
      cout << "Cena przejazdu: " << cena << endl;
      cout << "Czas przejazdu: " << czas << endl;
      cout << "Typ pociagu: " << typ << endl;
      cout << "Ilosc wagonow: " << ilosc_wagonow << endl;
  }
};

int main()
{
  // Tworzymy poci¹g, co kosztuje 50 z³, jedzie sie 5 godzin, ma 20 wagonów i jest typ osobowy
  Pociag train = Pociag(50, 5, 20, "osobowy");
  // Tworzymy samolot, co kosztuje 100 z³, leci sie 1 godzine, ma on 250 miejsc i jest typ turystyczny
  Samolot plane = Samolot(100, 1, 250, "turystyczny");
  
  train.pokaz();
  plane.pokaz();
  
  system("EXIT");
  return 0;
}
