#pragma once
class Artisti
{
	char *nume;
	int zi;
	int luna;
	char *locatie;
	int locuriDisponibele;
	int locuriVandute;
public:
	Artisti();
	Artisti(const char* n, int zi, int luna, char* locatie, int locuriD, int locuriV);
	Artisti(const Artisti&c);
	Artisti& operator=(const Artisti& c);
	~Artisti();

	char* getNume();
	char* getLocatie();
	int getZi();
	int getLuna();
	int getLocuriDisponibile();
	int getLocuriVandute();

	void setNume(char *n);
	void setZi(int z);
	void setLuna(int l);
	void setLocatie(char *l);
	void setLocuriDisponibile(int d);
	void setLocuriVandute(int v);
};
