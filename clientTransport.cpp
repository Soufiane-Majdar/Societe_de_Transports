#include "clientTransport.hpp"
#include<iostream>
using namespace std;


	SocieteTransport clientTransport::st;

	void clientTransport::setnom(string nom){
		this->nom=nom;
	}
	string clientTransport::getnom(){ return nom;	}
	

	clientTransport::clientTransport(){}
	
		clientTransport::clientTransport(string nom)
	{
		this->nom=nom;
	}
	clientTransport::clientTransport(string nom,SocieteTransport* s)
	{
		this->nom=nom;	
		

		for(int i=0 ; i< s->n ;i++)
			{
				this->st.addCargaisons(s->getLesCargaisons());
				
			}

			
	}
	
	clientTransport::~clientTransport()
	{
		cout<<" ce client a ete supprimer !";
	}

	
	/// functions
	// Client & Admin
	
	//1 Donne
	void clientTransport::afficherCargaison(string ref)
	{
		
		for(int i=0 ; i<st.n ;i++)
			{
				if(st.getLesCargaisons()[i].getReference()==ref)
				{
					cout<<endl<<endl<<"-------- afficher Cargaison avec Reference:"<<ref<<" --------";
					st.getLesCargaisons()[i].afficher();
				}
			}
				
	} 
	
	//2
	void clientTransport::afficherCargaison()
	{
		this->st.afficher();
	}
	
	
	/////
	void clientTransport::afficherCout(string ref)
	{
		
		for(int i=0 ; i<st.n ;i++)
			{
				if(st.getLesCargaisons()[i].getReference()==ref)
				{
					cout<<endl<<endl<<"--------  Cout du Cargaison avec Reference:"<<ref<<" --------";
					cout <<endl<<st.getLesCargaisons()[i].getcout();
				}
			}
				
	}
	
	
	void clientTransport::afficherPoidsTotal(string ref)
	{

		float c=0;
		
		for(int i=0 ; i< st.n ;i++)
		{
			if(st.getLesCargaisons()[i].getReference()==ref)
				{
					cout<<endl<<endl<<"-------- Poids Total du Marchandise du Cargaison avec Reference:"<<st.getLesCargaisons()[i].getReference()<<" --------";
					for(int j=0 ; j< st.getLesCargaisons()[i].n ;j++)
					{
						
						c += st.getLesCargaisons()[i].getLesMarchandise()[j].getPoids();
					}
					cout<<endl<<"Poids Total : "<<c;
				}

		}
		
		
	
	}
	
	
	
	//3
	void clientTransport::afficherMarchandise(int num)
	{
		cout<<endl<<"test afficherMarchandise(int num)"	;
		for(int i=0 ; i< st.n ;i++)
		{
			for(int j=0 ; j< st.getLesCargaisons()[i].n ;j++)
			{
				if(st.getLesCargaisons()[i].getLesMarchandise()[j].getNumero()==num)	
				{
					cout<<endl<<endl<<"--------  Marchandise  avec num :"<<st.getLesCargaisons()[i].getLesMarchandise()[j].getNumero()<<" --------";
					st.getLesCargaisons()[i].getLesMarchandise()[j].afficher();
				}

			}
		}
	}
	
	//4
	void clientTransport::afficherMarchandise()
	{
		cout<<endl<<"test afficherMarchandise()";
		
		for(int i=0 ; i< st.n ;i++)
		{
			for(int j=0 ; j< st.getLesCargaisons()[i].n ;j++)
			{
				cout<<endl<<endl<<"--------  Marchandise du Cargaison avec Reference:"<<st.getLesCargaisons()[i].getReference()<<" --------";
				st.getLesCargaisons()[i].getLesMarchandise()[j].afficher();
			}
		}
	
	}
	

