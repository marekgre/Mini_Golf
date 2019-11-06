#include<iostream>
#include"Plansza.h"
#include "stdafx.h"

using namespace std;

Plansza::Plansza()
{
	this->dl=0;
	this->sz=0;
}

//
//Plansza::Plansza(int x, int y)
//{
//	this->dl=y;
//	this->sz=x;
//}


//void Plansza::UzupelnijSpac()
//{
//	tab = new char *[dl];
//		for(int i=0; i<dl; ++i)
//		{
//			tab[i] = new char [sz];
//			for(int j=0; j<sz; ++j)
//				tab[i][j] = ' ';
//		}
//}


//void Plansza::UzupelnijKraw()
//{
//	for(int i=0; i<sz; i++)
//		tab[dl-dl][i] ='g';
//	for(int j=0; j<sz; j++)
//		tab[dl-1][j] = 'd';
//	for(int k=0; k<dl; k++)
//		tab[k][sz-sz] = 'l';
//	for(int l=0; l<dl; l++)
//		tab[l][sz-1] = 'p';
//}