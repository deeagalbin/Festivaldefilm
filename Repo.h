#pragma once
#include <vector>
using namespace std;
template<class T>
class Repo
{
private:
	vector<T> lista;
public:
	Repo();
	Repo(int n);
	vector<T> getAll();
	void add(T &c);
	void pop(int cnt);
	int getSize();

};
