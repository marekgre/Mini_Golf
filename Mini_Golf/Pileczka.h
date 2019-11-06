#ifndef PILECZKA_H
#define PILECZKA_H

#include<iostream>

using namespace std;

/////////////////////////////////////////////////////////////

class Pileczka{

private:
	int x, y;   // polozenie pileczki
	char znak;  

	char kierpion, kierpoziom;  // informacje o  kierunku - tj gora-dol, prawo-lewo
	int szybkoscpion, szybkoscpoziom; // informacje o szybkosci miêdzy x i y - czyli kat poruszania

public:
	Pileczka();
	Pileczka(int ox, int oy, char z, char kiery, char kierx, int szy, int szx);
	void UstalPolozenie(int ox, int oy);
	void WstawNaPlansze(Plansza&pl);

	int ZwrocPolozenieX();
	int ZwrocPolozenieY();

		// metody do ustawieñ parametrow pilki
	void ZmienKierunekPion(char kiery);
	void ZmienKierunekPoziom(char kierx);
	void ZmienSzybkoscPion(int szy);
	void ZmienSzybkoszcPoziom(int szx);
	    // metody do zwracania parametrow pilki
	char wPrawoCzywLewo();
	char wGoreCzywDol();
	int PredkoscPion();
	int PredkoscPoziom();

		
};

/////////////////////////////////////////////////////////////////

Pileczka::Pileczka()
{
	this->x=0;
	this->y=0;
	this->znak=NULL;
	this->kierpion='""';
	this->kierpoziom='""';
	this->szybkoscpion=0;
	this->szybkoscpoziom=0;
}


Pileczka::Pileczka(int ox, int oy, char z, char kiery, char kierx, int szy, int szyx)

{
	this->x=ox;
	this->y=oy;
	this->znak=z;
	this->kierpion=kiery;;
	this->kierpoziom=kierx;
	this->szybkoscpion=szy;
	this->szybkoscpoziom=szyx;
}


void Pileczka::UstalPolozenie(int ox, int oy)
{
	this->x=ox;
	this->y=oy;
	
}

void Pileczka::WstawNaPlansze(Plansza & pl)
{
   pl.tab[y][x]=znak;
}


void Pileczka::ZmienKierunekPion(char kiery)
{
	kierpion=kiery;
}

void Pileczka::ZmienKierunekPoziom(char kierx)
{
	kierpoziom=kierx;
}



void Pileczka::ZmienSzybkoscPion(int szy)
{
	szybkoscpion=szy;
}


void Pileczka::ZmienSzybkoszcPoziom(int szx)
{
	szybkoscpoziom=szx;
}
	   
char Pileczka::wPrawoCzywLewo()
{
	return kierpoziom;
}


char Pileczka::wGoreCzywDol()
{
	return kierpion;
}

int Pileczka::PredkoscPion()
{
	return szybkoscpion;
}

int Pileczka::PredkoscPoziom()
{
	return szybkoscpoziom; 
}

int Pileczka::ZwrocPolozenieX()
{
	return x;
}
	
int Pileczka::ZwrocPolozenieY()
{
	return y;
}




#endif