#ifndef MALYDOLEK_H
#define MALYDOLEK_H

#include<iostream>
#include"Element.h"



using namespace std;

///////////////////////////////////////////////////////////

class Dolek: protected Element{
public:
	Dolek();
	void UstalPolozenie(int px, int py);
	void UstalRozmiar(int r);
	void WstawNaPlansze(Plansza& pl);
	char ZwrocZnak();
};

///////////////////////////////////////////////////////////

Dolek::Dolek()
{
	this->rozmiar=0;
	this->znak='#'; // w dolku nie uzywane wcale
	this->polozenieX=0;
	this->polozenieY=0;
}

void Dolek::UstalPolozenie(int px, int py)
{
	this->polozenieX=px;
	this->polozenieY=py;
}



void Dolek::UstalRozmiar(int r)
{
	this->rozmiar=r;
}

void Dolek::WstawNaPlansze(Plansza& pl)
{
	

// sprawdzenie czy na danym obszarze nie pojawil sie znak pilki "o", jesli tak to znak dolka zmienia sie na !
 
	for (int i=0; i<rozmiar; i++)
	{
		for (int j=0; j<rozmiar; j++)
		{
			
			if(pl.tab[polozenieY + i][polozenieX + j]=='o')
			{
				znak='!';
			}

		}
	}

}


char Dolek:: ZwrocZnak()
{
return znak;
}


#endif