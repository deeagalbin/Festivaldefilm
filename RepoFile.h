#pragma once
#include "Repo.h"
#include<iostream>
#include<fstream>
#include "Artist.h"
template<class T>
class RepoFile :public Repo<T> {


public:

	RepoFile();
	void citire1();
	void citire2();
};

template<class T>
RepoFile<T>::RepoFile() :Repo<T>()
{

}
template<class T>
void RepoFile<T>::citire1()
{
	ifstream fin("artisti.txt");

	while (!fin.eof())
	{
		char *nume = new char[100];
		char *locatie = new char[100];
		int zi, luna, locd, locv;
		fin >> nume;
		fin >> zi;
		fin >> luna;
		fin >> locatie;
		fin >> locd;
		fin >> locv;
		Artisti c = Artisti(nume, zi, luna, locatie, locd, locv);
		this->add(c);
	}
	fin.close();
}
template<class T>
void RepoFile<T>::citire2()
{
	ifstream fin("filme.txt");
	while (!fin.eof())
	{
		char *nume = new char[100];
		char *locatie = new char[100];
		int zi, luna, locd, locv;
		fin >> nume;
		fin >> locatie;
		fin >> zi;
		fin >> luna;
		fin >> locd;
		fin >> locv;
		Filme c = Filme(nume, zi, luna, locatie, locd, locv);
		this->add(c);
	}
	fin.close();
}
