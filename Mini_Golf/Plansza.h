#ifndef PLANSZA_H
#define PLANSZA_H

#include<iostream>
#include<fstream>
#include"Wynik.h"

using namespace std;

/////////////////////////////////////////////////////////////////////////



class Plansza {

private:
	char **tab;   
	int dl, sz;  //dlugosc i szerokosc

public:

	Plansza();
	Plansza(int x, int y);  // gdzie x jest szerokoscia, a y dlugoscia
	~Plansza();
	void UzupelnijSpac();
	void UzupelnijKraw();
	char CzyKrawedz(int x, int y);

	void WyczyscMiejsce(int x, int y);
	int ZwrocDlugosc();
	int ZwrocSzerokosc();
	friend class Pileczka;
	friend class Dolek;
	friend class PrzeszkodaProsta;
	friend class PrzeszkodaPodluzna;

	void ZapiszTablice();
	
	

};

//////////////////////////////////////////////////////////////////////////

Plansza::Plansza()
{
	this->dl=0;
	this->sz=0;
}


Plansza::Plansza(int x, int y)
{
	this->dl=y;
	this->sz=x;
}

Plansza::~Plansza()
{
	delete [] tab;
}

void Plansza::UzupelnijSpac()
{
	tab = new char *[dl];
		for(int i=0; i<dl; ++i)
		{
			tab[i] = new char [sz];
			for(int j=0; j<sz; ++j)
				tab[i][j] = ' ';
		}
}


void Plansza::UzupelnijKraw()
{
	for(int i=0; i<sz; i++)
		tab[dl-dl][i] ='g';
	for(int j=0; j<sz; j++)
		tab[dl-1][j] = 'd';
	for(int k=0; k<dl; k++)
		tab[k][sz-sz] = 'l';
	for(int l=0; l<dl; l++)
		tab[l][sz-1] = 'p';
}


char Plansza::CzyKrawedz(int x, int y)
{
	return tab[y][x];
}


void Plansza::WyczyscMiejsce(int x, int y)
{
	tab[y][x]=' ';
}




int Plansza::ZwrocDlugosc()
{
	return dl;
}

int Plansza::ZwrocSzerokosc()
{
	return sz;
}

void Plansza::ZapiszTablice()
{
	fstream plik;
	plik.open("tablica.txt");
	for (int i=0; i<dl; i++)
	{
		for (int j=0; j<sz; j++)
		{
			plik<<tab[i][j];
			
		}
		plik<<endl;
	}
	plik.close();
}


#endif

