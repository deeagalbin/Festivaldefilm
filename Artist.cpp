#include <cstring>
#include <iostream>
#include "Artist.h"
#include <string.h>
using namespace std;



Artisti::Artisti()
{
	this->nume = NULL;
	this->locatie = NULL;
	this->zi = 0;
	this->luna = 0;
	this->locuriDisponibele = 0;
	this->locuriVandute = 0;
}
Artisti::Artisti(const Artisti&c)
{
	this->zi = c.zi;
	this->luna = c.luna;
	this->locuriDisponibele = c.locuriDisponibele;
	this->locuriVandute = c.locuriVandute;
	this->nume = new char[strlen(c.nume) + 1];
	strcpy_s(this->nume, strlen(c.nume) + 1, c.nume);
	this->locatie = new char[strlen(c.locatie) + 1];
	strcpy_s(this->locatie, strlen(c.locatie) + 1, c.locatie);
}
Artisti& Artisti::operator=(const Artisti& c)
{
	if (this != &c)
	{
		this->setZi(c.zi);
		this->setLuna(c.luna);
		this->setLocuriDisponibile(c.locuriDisponibele);
		this->setLocuriVandute(c.locuriVandute);
		this->nume = new char[strlen(c.nume) + 1];
		this->setNume(c.nume);
		this->locatie = new char[strlen(c.locatie) + 1];
		this->setLocatie(c.locatie);
	}
	return *this;
}
Artisti::Artisti(const char* n, int zi, int luna, char* locatie, int locuriD, int locuriV)
{
	this->zi = zi;
	this->luna = luna;
	this->locuriDisponibele = locuriD;
	this->locuriVandute = locuriV;
	this->nume = new char[strlen(n) + 1];
	strcpy_s(this->nume, strlen(n) + 1, n);
	this->locatie = new char[strlen(locatie) + 1];
	strcpy_s(this->locatie, strlen(locatie) + 1, locatie);
}

Artisti::~Artisti()
{

	if (this->nume != NULL)
	{
		delete[]this->nume;
		this->nume = NULL;
	}
	if (this->locatie != NULL)
	{
		delete[]this->locatie;
		this->locatie = NULL;
	}
	this->zi = 0;
	this->luna = 0;
	this->locuriDisponibele = 0;
	this->locuriVandute = 0;
}
int Artisti::getZi()
{
	return this->zi;
}
int Artisti::getLuna()
{
	return this->luna;
}
char* Artisti::getNume()
{
	return this->nume;
}
char* Artisti::getLocatie()
{
	return this->locatie;
}
int Artisti::getLocuriDisponibile()
{
	return this->locuriDisponibele;
}
int Artisti::getLocuriVandute()
{
	return this->locuriVandute;
}
void Artisti::setZi(int p)
{
	this->zi = p;
}
void Artisti::setLuna(int c)
{
	this->luna = c;
}
void Artisti::setNume(char *n)
{
	this->nume = new char[strlen(n) + 1];
	strcpy_s(this->nume, strlen(n) + 1, n);
}
void Artisti::setLocatie(char *n)
{
	this->locatie = new char[strlen(n) + 1];
	strcpy_s(this->locatie, strlen(n) + 1, n);
}
void Artisti::setLocuriDisponibile(int n)
{
	this->locuriDisponibele = n;
}
void Artisti::setLocuriVandute(int n)
{
	this->locuriVandute = n;
}