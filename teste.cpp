#include <iostream>
#include "teste.h"
#include <vector>
#include "Film.h"
#include "RepoFile.h"
#include "Artist.h"
#include <assert.h>
#include "stdafx.h"
using namespace std;
void teste()
{
	RepoFile<Artisti> rep = RepoFile<Artisti>();

	rep.citire1();
	vector<Artisti> v;
	v.reserve(10);
	v = rep.getAll();
	assert(v[0].getZi() == 10);
	assert(strcmp(v[0].getNume(), "Ana") == 0);
	cout << "teste pass";
}