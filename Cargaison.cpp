#include <iostream>
using namespace std;
#include "Cargaison.hpp"




Cargaison::Cargaison()
{
	n=0;
}

Cargaison::Cargaison(string reference,int destance)
{
	this->reference=reference;
	this->destance=destance;
	n=0;
}



Cargaison::~Cargaison()
{
	cout<<endl<<"Cargaison a ete supprimer!";
}

void Cargaison::setLesMarchandise(Marchandise* Mar)
{
	LesMarchandise[n].setNumero(Mar->getNumero());
	LesMarchandise[n].setPoids(Mar->getPoids());
	LesMarchandise[n].setVolume(Mar->getVolume());
	n++;
}

Marchandise * Cargaison::getLesMarchandise()
{
	return LesMarchandise;
}

void Cargaison::setReference(string reference){
		 	this->reference=reference;	 	
}

string Cargaison::getReference(){
 return reference;
}

void Cargaison::setDestance(int destance)
	{
	this->destance=destance;
	}
	
int Cargaison::getDestance(){return destance;}


float Cargaison::getcout(){
		return couts;
}
void Cargaison::setCout(float couts)
{
	this->couts=couts;
}

void Cargaison::afficher()
{
	cout<<endl<<"le reference est : ["<<reference<<"]";
	cout<<endl<<"la destance  est : [ "<<destance<<"]";
	cout<<endl<<"le cout      est : [  "<<couts<<"  ]";
	cout<<endl<<"le nombre de Marchandise est : ["<<n<<"]";
}