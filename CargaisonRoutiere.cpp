#include "CargaisonRoutiere.hpp"
#include<iostream>
using namespace std;


	float CargaisonRoutiere::getcout(){
		return couts;
	}
	CargaisonRoutiere::CargaisonRoutiere(){
	n=0;
	}
	CargaisonRoutiere::CargaisonRoutiere(string reference,int destance)
	{
			n=0;
		    this->reference=reference;
            this->destance=destance;
            
			CargaisonRoutiere::setCout();

	}
	
	void CargaisonRoutiere::setLesMarchandise(Marchandise* Mar)
	{
		LesMarchandise[n].setNumero(Mar->getNumero());
		LesMarchandise[n].setPoids(Mar->getPoids());
		LesMarchandise[n].setVolume(Mar->getVolume());
		n++;
		
		CargaisonRoutiere::setCout();
	}
	CargaisonRoutiere::~CargaisonRoutiere()
	{
		cout<<"cette cargaison Aerienne a ete supprimer !";
	}


	void CargaisonRoutiere::setCout()
	{
				float poid=0;
				for(int i=0 ; i<n ;i++)
					{
						poid = poid + LesMarchandise[i].getPoids();
					}
			if((4*destance*poid) < 380000)
			{
				this->couts=4*destance*poid;
			}
			else
			{
				this->couts=6*destance*poid;
			}
    		
	}