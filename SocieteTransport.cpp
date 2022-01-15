#include <iostream>
using namespace std;

#include "SocieteTransport.hpp"

SocieteTransport::SocieteTransport()
{
	n=0;
}
SocieteTransport::~SocieteTransport()
{
	
}
void SocieteTransport::setLesCargaisons(Cargaison c[100])
{
	n=0;
		for(int i=0 ; i< c->n ;i++)
			{

					LesCargaisons[i].setReference(c[i].getReference());
					LesCargaisons[i].setDestance(c[i].getDestance());
					LesCargaisons[i].setCout(c[i].getcout());
					this->n++;
			}	
}

Cargaison * SocieteTransport::getLesCargaisons()
{
	return LesCargaisons;
	
}


void SocieteTransport::addCargaisons(Cargaison* c)
{
	
	LesCargaisons[n].setReference(c->getReference());
	LesCargaisons[n].setDestance(c->getDestance());
	LesCargaisons[n].setCout(c->getcout());

	n++;
}

void SocieteTransport::afficher()
{
		//cout<<"test SocieteTransport::afficher()"<<n;
	for(int i=0 ; i< n ;i++)
		{
		   cout<<endl<<endl<<"-------- Cargaisons :"<<i+1<<" --------";
			LesCargaisons[i].afficher();
		}
}