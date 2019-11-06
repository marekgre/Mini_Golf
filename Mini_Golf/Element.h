#ifndef ELEMENT_H
#define ELEMENT_H

#include<iostream>

#include"Plansza.h"
using namespace std;



class Element{

public:

	int rozmiar;  // wielkosc elementu
	char znak;
	
	int polozenieX; //  parametry punktu zaczepienia (lewy gorny rog) elementu  
	int polozenieY; //  parametry punktu zaczepienia (lewy gorny rog) elementu  

	virtual void WstawNaPlansze(Plansza& pl)=0;
	void UstalPolozenie(); 
	void UstalRozimiar();
	


};





#endif
