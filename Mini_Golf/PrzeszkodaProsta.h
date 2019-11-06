#ifndef PRZESZKODAPROSTA_H
#define PRZESZKODAPROSTA_H

#include<iostream>
#include"Element.h"


using namespace std;

//////////////////////////////////////////////////////////

class PrzeszkodaProsta: public Element{
public:
	PrzeszkodaProsta();
	void UstalPolozenie(int px, int py);
	void UstalRozmiar(int r);
	void WstawNaPlansze(Plansza& pl);
};

//////////////////////////////////////////////////////////

PrzeszkodaProsta::PrzeszkodaProsta()
{
	this->rozmiar=0;
	this->znak='x'; // w dolku nie uzywane wcale
	this->polozenieX=0;
	this->polozenieY=0;
}
void PrzeszkodaProsta::UstalPolozenie(int px, int py)
{
	this->polozenieX=px;
	this->polozenieY=py;
}

void PrzeszkodaProsta::UstalRozmiar(int r)
{
	this->rozmiar=r;
}


void PrzeszkodaProsta::WstawNaPlansze(Plansza& pl)
{

	for (int i=0; i<rozmiar; i++)
	{
		for (int j=0; j<rozmiar; j++)
		{
			pl.tab[polozenieY + i][polozenieX + j]=znak;
		}
	}

	
}

#endif