#ifndef PRZESZKODAPODLUZNA_H
#define PRZESZKODAPODLUZNA_H

#include<iostream>
#include"PrzeszkodaProsta.h"
//#include"Plansza.h"

using namespace std;

///////////////////////////////////////////////////////////

class PrzeszkodaPodluzna: public PrzeszkodaProsta{
public:
	int dlugosc;
	PrzeszkodaPodluzna();
	void UstalRozmiar(int r, int d);
	//void UstalPolozenie(int px, int py); // nie trzeba - bêdzie uzywana metoda z klasy nadrzêdnej Przeszkodaprosta - bo niczym sie nie rozni
	void WstawNaPlansze(Plansza& pl);
};

///////////////////////////////////////////////////////////

PrzeszkodaPodluzna::PrzeszkodaPodluzna()
{
	this->rozmiar=0;
	this->dlugosc=0;
	this->znak='x';
	this->polozenieX=0;
	this->polozenieY=0;
}


void PrzeszkodaPodluzna::UstalRozmiar(int r, int d)
{
	this->rozmiar=r;
	this->dlugosc=d;
}

void PrzeszkodaPodluzna::WstawNaPlansze(Plansza& pl)
{
	
	for (int i=0; i<rozmiar; i++)
	{
		for (int j=0; j<dlugosc; j++)
		{
			pl.tab[polozenieY + i][polozenieX + j]=znak;
		}
	}




}

#endif