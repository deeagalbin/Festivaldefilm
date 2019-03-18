#include "Film.h"
#include <cstring>
#include <iostream>
using namespace std;

Filme::Filme()
{
	this->nume = NULL;
	this->locatie = NULL;
	this->zi = 0;
	this->luna = 0;
	this->locuriDisponibele = 0;
	this->locuriVandute = 0;
}
Filme::Filme(const Filme&c)
{
	this->listaActori = c.listaActori;
	this->zi = c.zi;
	this->luna = c.luna;
	this->locuriDisponibele = c.locuriDisponibele;
	this->locuriVandute = c.locuriVandute;
	this->nume = new char[strlen(c.nume) + 1];
	strcpy_s(this->nume, strlen(c.nume) + 1, c.nume);
	this->locatie = new char[strlen(c.locatie) + 1];
	strcpy_s(this->locatie, strlen(c.locatie) + 1, c.locatie);
}
Filme& Filme::operator=(const Filme& c)
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
		this->setListaActori(c.listaActori);
	}
	return *this;
}
Filme::Filme(const char* n, int zi, int luna, char* locatie, int locuriD, int locuriV, vector<string> l)
{
	this->zi = zi;
	this->luna = luna;
	this->locuriDisponibele = locuriD;
	this->locuriVandute = locuriV;
	this->nume = new char[strlen(n) + 1];
	strcpy_s(this->nume, strlen(n) + 1, n);
	this->locatie = new char[strlen(locatie) + 1];
	strcpy_s(this->locatie, strlen(locatie) + 1, locatie);
	this->listaActori = l;
}

Filme::~Filme()
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
int Filme::getZi()
{
	return this->zi;
}
int Filme::getLuna()
{
	return this->luna;
}
char* Filme::getNume()
{
	return this->nume;
}
char* Filme::getLocatie()
{
	return this->locatie;
}
int Filme::getLocuriDisponibile()
{
	return this->locuriDisponibele;
}
int Filme::getLocuriVandute()
{
	return this->locuriVandute;
}
vector<string> Filme::getListaActori()
{
	return this->listaActori;
}
void Filme::setZi(int p)
{
	this->zi = p;
}
void Filme::setLuna(int c)
{
	this->luna = c;
}
void Filme::setNume(char *n)
{
	this->nume = new char[strlen(n) + 1];
	strcpy_s(this->nume, strlen(n) + 1, n);
}
void Filme::setLocatie(char *n)
{
	this->locatie = new char[strlen(n) + 1];
	strcpy_s(this->locatie, strlen(n) + 1, n);
}
void Filme::setLocuriDisponibile(int n)
{
	this->locuriDisponibele = n;
}
void Filme::setLocuriVandute(int n)
{
	this->locuriVandute = n;
}
void Filme::setListaActori(vector<string> n)
{
	this->listaActori = n;
}
