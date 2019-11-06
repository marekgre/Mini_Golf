#ifndef WYNIK_H
#define WYNIK_H
#include<iostream>
using namespace std;

template <int n, class typ>

class Wynik{

public:
	int punkty;
	typ wyniki[n];
	friend class Plansza;
	~Wynik()
	{
		delete [] wyniki;
	}
	void WpiszWynik()
	{
		wyniki[0] = punkty;
	}
	Wynik operator +(int liczba)
	{
		Wynik wynik;
		wynik.punkty=this->punkty+liczba;
		return wynik;
	}
	void ZapiszPunkty()
{
	fstream plik;
	plik.open("punkty.txt");
	
	plik<<"Liczba uzyskanych punktow:  ";
	plik<<wyniki[0];
	plik.close();
}
	
};



#endif