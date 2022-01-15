#include <iostream>
using namespace std;
#include "Marchandise.cpp"


#include "Cargaison.cpp"
#include "CargaisonAerienne.cpp"
#include "CargaisonRoutiere.cpp"
#include "SocieteTransport.cpp"
#include "clientTransport.cpp"
#include "AdminTransport.cpp"

int main()
{
	/*
	Marchandise * m = new Marchandise(1,2,4);
	Marchandise * m2 = new Marchandise(1,2,4);
	m->afficher();
	
	AdminTransport * a = new AdminTransport("soufiane", "12ed");
	a->afficher();
	
	Cargaison * c = new Cargaison("ji1",20);
	
	cout <<endl<<"getDestance :"<<c->getDestance();
	
	c->setLesMarchandise(m);
	c->setLesMarchandise(m2);
	
	for(int i=0 ; i< c->n ;i++)
	{
		cout<<endl<<"getLesMarchandise :"<<c->getLesMarchandise()[i].getPoids();
	}
	
	cout<<endl<<endl<<"/////////////////////////////";
	
	///////////////////////////
	CargaisonAerienne * ca = new CargaisonAerienne("ji2",5);
	ca->setLesMarchandise(m);
	ca->setLesMarchandise(m2);

	
	ca->afficher();
	
	cout<<endl<<endl;
	
	
	CargaisonRoutiere * cr = new CargaisonRoutiere("ji5",6);
	cr->setLesMarchandise(m);
	cr->setLesMarchandise(m2);

	
	cr->afficher();
	*/
	//clientTransport * c1 = new clientTransport("soufiane","smj1");
	//c1->afficher();
	
	
	
	
	
	
	///////////////////////////////////////////////////////////////////////////////
	
	SocieteTransport * s1= new SocieteTransport();
	
	Marchandise * m = new Marchandise(1,2,4);
	CargaisonRoutiere * cr = new CargaisonRoutiere("j5",6);
	cr->setLesMarchandise(m);
	
	CargaisonRoutiere * cm = new CargaisonRoutiere("CR1",8);
	cm->setLesMarchandise(m);
	

	s1->addCargaisons(cm);
	s1->addCargaisons(cr);
	
	for(int j=0 ; j< cr->n ;j++)
	{
		cout<<endl<<"getLesMarchandise :"<<cr->getLesMarchandise()[j].getNumero();
	}
	
	
	for(int i=0 ; i< s1->n ;i++)
	{
		cout<<endl<<"getLesCargaisons :"<<s1->getLesCargaisons()[i].getReference();
		cout<<endl<<"cout :"<<s1->getLesCargaisons()[i].getcout();
	}
	
	clientTransport * cl = new clientTransport("nom");
	
	
	AdminTransport * ad = new AdminTransport("sof");
	
	ad->ajouterCargaison();
	

	
	
	cl->st.addCargaisons(cr);
	cl->st.addCargaisons(cm);	
	ad->ajouterMarchandise("CR1");
	ad->ajouterMarchandise("CR1");
	
	cl->afficherCout("CR1");
	// admin ajouter carg..
	cl->afficherCargaison();
	cl->afficherCargaison("CR1");
		
	ad->ajouterCargaison();
	
	cl->afficherMarchandise();
	
	cl->afficherPoidsTotal("CR1");
	
	cl->afficherMarchandise(2);
	
	
	char q;
	cin>>q;
	
	///////////////////////////////////////////////////////////////////////////////
	/*
	
	

	admin->afficherCargaison();
	
	admin->ajouterMarchandise("CR1");
	
	admin->afficherCargaison();
		s1->setClients(c1);
	 
	for(int i=0 ; i< s1->nc ;i++)
	
		cout<<endl<<"getClient nom :"<<s1->getClients()[i].getnom();
		cout<<endl<<"getClient code :"<<s1->getClients()[i].getcode();
	}*/
	/*
	s1->afficherCargaison("ji5");
	s1->afficherMarchandise(1);
	s1->afficherCargaison();
	
		int a;
	int c;
	int b;

	
	cout<<" 1 -> administrateur "<<endl;
	cout<<" 2 -> le client "<<endl;
	cout<<"----->"<<endl;cin>>a;
	if(a==1){
		do
		{
			
		cout<<"1 ->Ajouter une nouvelle cargaison."<<endl;
		cout<<"2 ->Ajouter une marchandise a une cargaison."<<endl;
		cout<<"3 ->Consulter toutes les matchandises que contient une cargaison."<<endl;
		cout<<"4 ->Supprimer une marchandise d'une cargaison donnee."<<endl;
		cout<<"5 ->supprimer une cargaison."<<endl;
		cout<<"6 ->Modifier les informations d'une marchandises donnee."<<endl;
		cout<<"------->";cin>>c;
		switch(c)
		{
			case 1:
				cout<<"hello "<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				break;
			case 2:
				cout<<"hello 2 "<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				break;
			case 3:
				cout<<"hello 3 "<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				break;
			case 4:
				cout<<"hello 4 "<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				break;
			case 5:
				cout<<"hello 5 "<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				break;
			case 6:
				cout<<"hello 6"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				break;
			default :
				cout<<"invalid"; break;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				
        }
		}while(c!=6);
	
	}
	
	if(a==2){
		
	do{
		cout<<"1 ->Consulter une cargaison sachant sa reference."<<endl;
		cout<<"2 ->Consulter une marchandise sachant son numero."<<endl;
		cout<<"3 ->Consulter toutes les marchandises que contient une cargaison."<<endl;
		cout<<"4 ->Consulter toutes les cargaisons."<<endl;
		cout<<"5 ->Consulter le poids total d'une cargaison donnee."<<endl;
		cout<<"6 ->Consulter le cout de transport d'une cargaison donnee."<<endl;
		cout<<"7 ->Trier par order croissant les cargaisons par le cout de transport."<<endl;
		cout<<"------->";cin>>b;
		switch(c)
		{
			case 1:
				cout<<"hello "<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				break;
			case 2:
				cout<<"hello 2 "<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				break;
			case 3:
				cout<<"hello 3 "<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				break;
			case 4:
				cout<<"hello 4 "<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				break;
			case 5:
				cout<<"hello 5 "<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				break;
			case 6:
				cout<<"hello 6"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				break;
			case 7:
				cout<<"hello 7"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				break;
				
			default :
				cout<<"invalid"; break;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				cout<<"----------------------------------"<<endl;
				
        }
		}while(c!=7);
	}
	
	
	
	
	*/
}
