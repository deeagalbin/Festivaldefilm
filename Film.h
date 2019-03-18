#pragma once
#include<string>
#include <vector>
using namespace std;
class Filme
{
	char*nume;
	char *titlu;
	vector<string> listaActori;
	int zi;
	int luna;
	char *locatie;
	int locuriDisponibele;
	int locuriVandute;
public:
	Filme();
	Filme(const char* n, int zi, int luna, char* locatie, int locuriD, int locuriV, vector<string> l);
	Filme(const Filme&c);
	Filme& operator=(const Filme& c);
	~Filme();

	char* getNume();
	char* getLocatie();
	vector<string> getListaActori();
	int getZi();
	int getLuna();
	int getLocuriDisponibile();
	int getLocuriVandute();

	void setListaActori(vector<string>c);
	void setNume(char *n);
	void setZi(int z);
	void setLuna(int l);
	void setLocatie(char *l);
	void setLocuriDisponibile(int d);
	void setLocuriVandute(int v);
};
