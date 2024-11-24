#include <iostream>
using namespace std;

class Passager{
	int id,age;
	string nom,prenom,tel,adresse;
	public:
	Passager();
	Passager(int i,int a,string n,string p,string t,string ad);
	void show();
	int getId();
	int getAge();
	string getNom();
	string getPrenom();
	void setId(int i);
	void setNom(string n);
	void setPrenom(string p);
	void setAge(int a);
	void setTel(string t);
	void setAdresse(string ad);
};
