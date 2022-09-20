#pragma once
#include <string>
using namespace std;
class Actif
{
private:
	int id;
	string nom;
	double pru;
	Actif(const Actif&);

public: 
	Actif(string nom, int id , double pru);
};

