#include<iostream>
using namespace std;
#include "Marchandise.hpp"

Marchandise::Marchandise()
{
	numero=0;
	poids=0;
	volume=0;
}

Marchandise::Marchandise(int numero,float poids,float volume)
{
	this->numero=numero;
	this->poids=poids; 
	this->volume=volume;
}

Marchandise::~Marchandise()
{
	cout<<endl<<"Marchandise a ete supprimer!";
}

int Marchandise::getNumero()
{
	return numero;
}

void Marchandise::setNumero(int numero)
{
	this->numero=numero;
}

float Marchandise::getPoids()
{
	return poids;
}

void Marchandise::setPoids(float poids)
{
	this->poids=poids;
}

float Marchandise::getVolume()
{
	return volume;
}

void Marchandise::setVolume(float volume)
{
	this->volume=volume;
}

void Marchandise::afficher()
{
	cout<<endl<<"numero : ["<<numero<<"]";
	cout<<endl<<"poids  : ["<<poids<<"]";
	cout<<endl<<"volume : ["<<volume<<"]";
}