#include<iostream>
#include "Passager.hpp"
using namespace std;

Passager::Passager(){
		nom=prenom=tel=adresse="null";
		id=age=0;
}
Passager::Passager(int i,int a,string n,string p,string t,string ad):id(i),age(a),nom(n),prenom(p),tel(t),adresse(ad)
{
}
void Passager::show(){
		cout<<"id : "<<id<<endl;
		cout<<"name : "<<nom<<" "<<prenom<<endl;
		cout<<"age : "<<age<<endl;
		cout<<"adresse : "<<adresse<<endl;
		cout<<"telephone : "<<tel<<endl;
}
int Passager::getId(){
	return id;
}
int Passager::getAge(){
	return age;
}
string Passager::getNom(){
	return nom;
}
string Passager::getPrenom(){
	return prenom;
}
//setters
void Passager::setId(int i){
	id=i;
}
void Passager::setNom(string n){
	nom=n;
}
void Passager::setPrenom(string p){
	prenom=p;
}
void Passager::setAge(int a){
	age=a;
}
void Passager::setAdresse(string ad){
	adresse=ad;
}
void Passager::setTel(string t){
	tel=t;
}

