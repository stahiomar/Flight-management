#include<iostream>
#include "Passager_methods.cpp"
#include "Avion_methods.cpp"
#include "Vol_methods.cpp"
using namespace std;
int main(){
	Vol v(1,100,3,"walid","2012-03-15","Airbus","2023-01-07","2023-01-08");
	Vol V[10];int N=10;
	V[0]=Vol(1,100,5,"ahmed","2002-03-11","Boeing","2023-01-21","2023-01-22");
	V[1]=Vol(2,100,1,"khaled","2002-03-16","Bombardier CRJ900","2023-01-22","2023-01-24");
	V[2]=Vol(3,100,5,"ali","2005-04-11","Boeing","2023-02-11","2023-02-12");
	V[3]=Vol(4,100,2,"maher","2020-01-12","Embraer","2023-04-11","2023-04-12");
	V[4]=Vol(5,100,7,"omar","2009-01-18","Cessna","2023-04-01","2023-04-02");
	V[5]=Vol(6,100,12,"hamza","2005-03-11","Pilatus","2023-02-11","2023-02-12");
	V[6]=Vol(7,100,3,"abass","2015-11-21","Gulfstream","2023-01-25","2023-01-26");
	V[7]=Vol(8,100,2,"amine","2002-03-15","Hawker","2023-01-13","2023-01-14");
	V[8]=Vol(9,100,8,"adel","2002-05-11","Antonov","2023-01-09","2023-01-10");
	V[9]=Vol(10,100,6,"soufiane","2001-03-11","Airbus","2023-11-21","2023-11-22");
	int ch=1;
	cout<<"0-exit"<<endl;
	cout<<"1-test existance passager"<<endl;
	cout<<"2-add"<<endl;
	cout<<"3-modifier passager"<<endl;
	cout<<"4-modifier la date d'un vol"<<endl;
	cout<<"5-test si un vol appartient a un groupe de vols"<<endl;
	cout<<"6-test si un passager appartient a un groupe de vols"<<endl;
	cout<<"7-ajouter un vol"<<endl;
	cout<<"8-ajouter un passager a un vol"<<endl;
	cout<<"9-afficher les infos d'un table de vols"<<endl;
	cout<<"10-afficher les infos de tous les vols d'un passager"<<endl;
	cout<<"11-afficher les passagers ayant au moins 10 ans"<<endl;
	cout<<"12-les vols de le lendemain"<<endl;
	cout<<"13-supprimer un vol"<<endl;
	cout<<"14-clear"<<endl;
	while(ch!=0){
		cout<<"enter votre choix : ";
		cin>>ch;
		if(ch==1){
			int id,test;
			cout<<"enter l'id : ";
			cin>>id;
			Passager PassagerDeTest(id,0,"0","0","0","0");	//On va passer dans PassagerDeTest seulement les infos utiles pour le test 
			test=v.passagerInVol(PassagerDeTest);
			if(test)
			cout<<"passager existe"<<endl;
			else
			cout<<"passager non existe"<<endl;
		}
		if(ch==2){
			int id,age;
			string nom,prenom,adresse,tel;
			cout<<"entrer l'id : ";
			cin>>id;
	      	cout<<"entrer le nom : ";
			cin>>nom;
	      	cout<<"entrer le prenom : ";
			cin>>prenom;
	      	cout<<"entrer l'age : ";
			cin>>age;
	      	cout<<"entrer l'adresse : ";
			cin>>adresse;
	      	cout<<"entrer le telephone : ";
			cin>>tel;
			Passager P(id,age,nom,prenom,tel,adresse);	//Passager(int i,int a,string n,string p,string t,string ad);
			v.addPassager(P);
			cout<<"Passager ajoutee avec succee"<<endl;
		}
		if(ch==3){
			int id,age;
			string nom,prenom,adresse,tel;
			cout<<"enter vos infos : "<<endl;
			cout<<"entrer l'id : ";
			cin>>id;
	      	cout<<"entrer le nom : ";
			cin>>nom;
	      	cout<<"entrer le prenom : ";
			cin>>prenom;
	      	cout<<"entrer l'age : ";
			cin>>age;
	      	cout<<"entrer l'adresse : ";
			cin>>adresse;
	      	cout<<"entrer le telephone : ";
			cin>>tel;
			Passager P(id,age,nom,prenom,tel,adresse);	//Passager(int i,int a,string n,string p,string t,string ad);
			v.editPassager(P);
			cout<<"les infos sont edites avec succes"<<endl;
		}
		if(ch==4){
			v.editDate();
		}
		if(ch==5){
			int codeAvion,test;
			string dateDepart;
			cout<<"enter le code d'avion : ";
			cin>>codeAvion;
			cout<<"enter la date de depart : ";
			cin>>dateDepart;
			Vol vTest(codeAvion,0,0,"","","",dateDepart,""); //On va passer dans vTest seulement les infos utiles pour le test
			test=vTest.testVol(V, N);
			if(test)
			cout<<"vol existe"<<endl;
			else
			cout<<"vol non existe"<<endl;
		}
		if(ch==6){
			int id,test;
			cout<<"enter l'id : ";
			cin>>id;
			test=v.testPassagerInArrayVol(V,id,N);
			if(test)
			cout<<"passager existe"<<endl;
			else
			cout<<"passager non existe"<<endl;
		}
		if(ch==7){
			int code,capSt,nbrVol;
			string pilote,dateFab,model,dtDepart,dtArrive;
			cout<<"enter la date de depart : ";
			cin>>dtDepart;
			cout<<"enter la date d'arrive : ";
			cin>>dtArrive;
			cout<<"enter le code de l'avion : ";
			cin>>code;
			cout<<"enter le modele de l'avion : ";
			cin>>model;
			cout<<"enter la date de fabrication : ";
			cin>>dateFab;
			cout<<"enter le nom de pilote : ";
			cin>>pilote;
			cout<<"enter la capacite de stockage : ";
			cin>>capSt;
			cout<<"enter le nombre de vols assuré : ";
			cin>>nbrVol;
			Vol vo(code,capSt,nbrVol,pilote,dateFab,model,dtDepart,dtArrive);
			v.addVol(V, vo, N);
			cout<<"Vol est ajoutee avec succee"<<endl;
		}
		if(ch==8){
			int volN;
			int id,age;
			string nom,prenom,adresse,tel;
			cout<<"enter vos infos : "<<endl;
			cout<<"entrer l'id : ";
			cin>>id;
	      	cout<<"entrer le nom : ";
			cin>>nom;
	      	cout<<"entrer le prenom : ";
			cin>>prenom;
	      	cout<<"entrer l'age : ";
			cin>>age;
	      	cout<<"entrer l'adresse : ";
			cin>>adresse;
	      	cout<<"entrer le telephone : ";
			cin>>tel;
			Passager P(id,age,nom,prenom,tel,adresse);
			cout<<"On a 10 vols, laquel vous choisi?  ";
			cin>>volN;
			v.addPassagerToVol(V[volN],P);
		}
		if(ch==9){
			for(int i=0 ;i<N; i++){
				cout<<endl<<"les infos de vol numero "<<i<<" :"<<endl;
				v.showTab(V[0]);
			}
		}
		if(ch==10){
			int id;
			cout<<"enter l'id : ";
			cin>>id;
			Passager PassagerDeTest(id,0,"0","0","0","0");	//On va passer dans PassagerDeTest seulement les infos utiles pour le test(id dans ce cas) 
			cout<<"voila les vols de passager que vous avez saisi : "<<endl;
			v.volsOfPassager(V,PassagerDeTest,N);
			
		}
		if(ch==11){
			cout<<"les passager ayant au moins 10 ans : "<<endl<<endl;
			v.showPassagersAge10(V, N);			
		}
		if(ch==12){
			string dateLendemain;
			cout<<"entrer la date de lendemain : ";
			cin>>dateLendemain;
			v.volsLendemain(V, dateLendemain, N);
		}
		if(ch==13){
			int codeAvion;
			string dtDepart;
			cout<<"enter le code d'avion : ";
			cin>>codeAvion;
			cout<<"enter la date de depart : ";
			cin>>dtDepart;
			v.deleteVol(V,codeAvion,dtDepart,N);	
		}
		if(ch==14){
			system("cls");
			cout<<"0-exit"<<endl;
			cout<<"1-test existance passager"<<endl;
			cout<<"2-add"<<endl;
			cout<<"3-modifier passager"<<endl;
			cout<<"4-modifier la date d'un vol"<<endl;
			cout<<"5-test si un vol appartient a un groupe de vols"<<endl;
			cout<<"6-test si un passager appartient a un groupe de vols"<<endl;
			cout<<"7-ajouter un vol"<<endl;
			cout<<"8-ajouter un passager a un vol"<<endl;
			cout<<"9-afficher les infos d'un table de vols"<<endl;
			cout<<"10-afficher les infos de tous les vols d'un passager"<<endl;
			cout<<"11-afficher les passagers ayant au moins 10 ans"<<endl;
			cout<<"12-les vols de le lendemain"<<endl;
			cout<<"13-supprimer un vol"<<endl;
			cout<<"14-clear"<<endl;
		}
	}
	return 0;
}
