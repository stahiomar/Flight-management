#include<iostream>
#include<string>
#include "Vol.hpp"
using namespace std;

Vol::Vol(){

}

void Vol::show(){
		cout<<"Date de depart : "<<dateDepart<<endl;
		cout<<"Date d'arrive : "<<dateArrive<<endl;
		cout<<"code d'avion : "<<av.code<<endl;
		cout<<"modele d'avion : "<<av.modele<<endl;
		cout<<"pilote : "<<av.pilote<<endl;
}

Vol::Vol(int c,int cap,int nbrV,string pil,string date,string m,string dtD,string dtA):av(c,cap,nbrV,pil,date,m)
{
	dateDepart=dtD;
	dateArrive=dtA;
	t = new Passager[100];
}

void Vol::setDateDepart(string dtD){
	dateDepart=dtD;
}
bool Vol::passagerInVol(Passager p){
  for (int i = 0; i < 100; i++){
    if (t[i].getId() == p.getId()){
      return true;
    }
  }
  return false;
}

void Vol::addPassager(Passager p){
	if(passagerInVol(p))
	cout<<"Le passager est deja existe";
	else{
		for (int i = 0; i < 100; i++){
    	if (t[i].getId() == 0){
      	t[i]=p;
      	return;
      	}
  	}
}
}

void Vol::editPassager(Passager p){
	if(passagerInVol(p)){
		int id,a;
		string ad,n,pr,te;
		for (int i = 0; i < 100; i++){
    	if (t[i].getId() == p.getId()){
		cout<<"editer vos infos : "<<endl;
		cout<<"new l'id : ";
		cin>>id;
      	t[i].setId(id);
      	cout<<"new le nom : ";
		cin>>n;
      	t[i].setNom(n);
      	cout<<"new le prenom : ";
		cin>>pr;
      	t[i].setPrenom(pr);
      	cout<<"new l'age : ";
		cin>>a;
      	t[i].setAge(a);
      	cout<<"new l'adresse : ";
		cin>>ad;
      	t[i].setAdresse(ad);
      	cout<<"new le telephone : ";
		cin>>te;
      	t[i].setTel(te);
      	return;
	}
  	}
}
	else
	cout<<"Le passager n'existe pas";
}
string Vol::actualDate(){
    string day;
    string month;
    string year;
    string actualDt="";
    string date=__DATE__;//__DATE__ retourne la date actuel est on va la formater sur cette forme DD-MM-YYYY
    month=date.substr(0, 3);
    day=date.substr(4, 2);
    year=date.substr(7, 4);
    if (month == "Jan") month = "01";
    else if (month == "Feb") month = "02";
    else if (month == "Mar") month = "03";
    else if (month == "Apr") month = "04";
    else if (month == "May") month = "05";
    else if (month == "Jun") month = "06";
    else if (month == "Jul") month = "07";
    else if (month == "Aug") month = "08";
    else if (month == "Sep") month = "09";
    else if (month == "Oct") month = "10";
    else if (month == "Nov") month = "11";
	else if (month == "Dec") month = "12";
    actualDt=year+"-"+month+"-"+day;
    if(actualDt.substr(8,1)==" ")
    actualDt.replace(8, 1, "0");
    return actualDt;
}
void Vol::editDate(){
	repeat:
	cout<<"entrer la nouvelle date de depart"<<endl;
	cin>>dateDepart;
	if(dateDepart<=actualDate()){
	cout<<"date non valide"<<endl;
	goto repeat;
	}
	else
	setDateDepart(dateDepart);
}

bool Vol::testVol(Vol tab[],int N){
	for (int i = 0; i < N; i++){
    if (av.code==tab[i].av.code && dateDepart==tab[i].dateDepart){
      return true;
    }
  }
  return false;
}
bool Vol::testPassagerInArrayVol(Vol tab[], int id, int N){
	int i,j;
	for (i = 0; i < N; i++){
		for (j = 0; j < 100; j++){
			if (id == tab[i].t[j].getId())
     			return true;
		}
    }
  return false;
}

void Vol::addVol(Vol tab[], Vol v,int N){
	for(int i=0;i<N;i++){
		if(tab[i].av.code==0){
			tab[i]=v;
			return;
		}
	}
}

void Vol::addPassagerToVol(Vol v,Passager p){
	if(!v.passagerInVol(p))
	v.addPassager(p);
}

void Vol::showTab(Vol v){
	v.show();
}

void Vol::volsOfPassager(Vol tab[], Passager p, int N){
	for (int i=0; i<N ;i++){
		for (int j=0; j<100; j++){
			if (p.getId()==tab[i].t[j].getId())
			tab[i].show();
		}
	}
}

void Vol::showPassagersAge10(Vol tab[], int N){
	for (int i=0; i<N ;i++){
		for (int j=0; j<100; j++){
			if (tab[i].t[j].getAge() >= 10){
				cout<<"Id : "<<tab[i].t[j].getId()<<endl;
				cout<<"Nom : "<<tab[i].t[j].getNom()<<endl;
				cout<<"Prenom : "<<tab[i].t[j].getPrenom()<<endl;
			}
		}
	}
}

void Vol::deleteVol(Vol tab[], int codeAv, string dtDepart, int N){
	for (int i=0; i<N ;i++){
		if (codeAv==tab[i].av.code && dtDepart==tab[i].dateDepart){
			for(int j=0; j<N-1; j++){
				tab[j]=tab[j+1];
			}
			cout<<"Vol supprimee avec succee"<<endl;
		}
	}
}

void Vol::volsLendemain(Vol tab[], string dateLendemain, int N){
	for (int i=0; i<N ;i++){
		if (tab[i].dateDepart == dateLendemain){
			tab[i].show();
	}
}
}
