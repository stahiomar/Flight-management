#include <iostream>
using namespace std;

class Vol{
	Avion av;
	Passager *t;
	string dateDepart,dateArrive;//La date doit etre sur cette forme YYYY-MM-DD
	public:
	Vol();
	Vol(int c,int cap,int nbrV,string pil,string date,string m,string dtD,string dtA);
	void setDateDepart(string);
	
	void show();
	bool passagerInVol(Passager p);
	void addPassager(Passager p);
	void editPassager(Passager p);
	string actualDate();
	void editDate();
	bool testVol(Vol tab[], int N);
	bool testPassagerInArrayVol(Vol tab[],int id ,int N);
	void addVol(Vol tab[],Vol v, int N);
	void addPassagerToVol(Vol v,Passager p);
	void showTab(Vol v);
	void volsOfPassager(Vol tab[], Passager p, int N);
	void showPassagersAge10(Vol tab[],  int N);
	void deleteVol(Vol tab[], int codeAv, string dtDepart, int N);
	void volsLendemain(Vol tab[], string dateLendemain, int N);
};
