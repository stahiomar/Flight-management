#include <iostream>
using namespace std;


class Avion{
	public:
	int code,capStockage,nbrVols;
	string pilote,dateFabric,modele;//La date doit etre sur cette forme YYYY-MM-DD
	
	Avion();
	Avion(int c,int cap,int nbrV,string pil,string date,string m);
	void show();
};

