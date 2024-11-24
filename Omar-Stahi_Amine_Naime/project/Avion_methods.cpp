#include<iostream>
#include "Avion.hpp"
using namespace std;

Avion::Avion(){
	code=capStockage=nbrVols=0;
	pilote=modele=dateFabric="null";
}
Avion::Avion(int c,int cap,int nbrV,string pil,string date,string m):code(c),capStockage(cap),nbrVols(nbrV),pilote(pil),dateFabric(date),modele(m)
{
}
void Avion::show(){
		cout<<"code : "<<code<<endl;
		cout<<"pilote : "<<pilote<<endl;
		cout<<"nombre de vols : "<<nbrVols<<endl;
		cout<<"modele : "<<modele<<endl;
		cout<<"date de fabrication : "<<dateFabric<<endl;
}

