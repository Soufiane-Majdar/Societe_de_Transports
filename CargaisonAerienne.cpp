#include "CargaisonAerienne.hpp"
#include<iostream>
using namespace std;


	float CargaisonAerienne::getcout(){
		return couts;
	}
	CargaisonAerienne::CargaisonAerienne(){
	n=0;
	}
	CargaisonAerienne::CargaisonAerienne(string reference,int destance)
	{
			n=0;
		    this->reference=reference;
            this->destance=destance;
            
			CargaisonAerienne::setCout();

	}
	
	void CargaisonAerienne::setLesMarchandise(Marchandise* Mar)
	{
		LesMarchandise[n].setNumero(Mar->getNumero());
		LesMarchandise[n].setPoids(Mar->getPoids());
		LesMarchandise[n].setVolume(Mar->getVolume());
		n++;
		
		CargaisonAerienne::setCout();
	}
	CargaisonAerienne::~CargaisonAerienne()
	{
		cout<<"cette cargaison Aerienne a ete supprimer !";
	}


	void CargaisonAerienne::setCout()
	{
				float poid=0;
				for(int i=0 ; i<n ;i++)
					{
						poid = poid + LesMarchandise[i].getPoids();
					}
			if((10*destance*poid) < 80000)
			{
				this->couts=10*destance*poid;
			}
			else
			{
				this->couts=10*destance*poid;
			}
    		
	}