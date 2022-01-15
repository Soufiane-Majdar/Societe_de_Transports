#include "AdminTransport.hpp"
#include<iostream>
using namespace std;





AdminTransport::AdminTransport(){}

AdminTransport::AdminTransport(string nom){
this->nom=nom;
}
AdminTransport::~AdminTransport(){
cout<<"ce admin a bien supprimer";
}
void AdminTransport::afficher()
{
cout<<" le nom d'admin : ["<<nom<<"]"<<endl;
}




	
	//4
void AdminTransport::ajouterCargaison()
{
	cout<<endl<<endl<<"------------- ajouter une Cargaison -------------";
	string ref;
	int d;
	cout<<endl<<"ecrire un reference :";
	cin>>ref;
	cout<<"ecrire une destance :";
	cin>>d;
	
	int t;
	cout<<endl<<endl<<"1- CargaisonRoutiere ";
	cout<<endl<<"2- CargaisonAerienne ";
	cin>>t;
	if(t==1){
		CargaisonRoutiere * c = new CargaisonRoutiere(ref,d);
		st.addCargaisons(c);
	}
	else
	{
		CargaisonAerienne * c = new CargaisonAerienne(ref,d);
		st.addCargaisons(c);
	}

}

void AdminTransport::ajouterMarchandise(string ref)
{
	int n;
	float p;
	float v;
	cout<<endl<<endl<<"ecrire un numero :";
	cin>>n;
	cout<<"ecrire un poids :";
	cin>>p;
	cout<<"ecrire un volume :";
	cin>>v;
	
	Marchandise * m = new Marchandise(n,p,v);

	for(int i=0 ; i< st.n ;i++)
		{
			if(st.getLesCargaisons()[i].getReference()==ref)
			{
				st.getLesCargaisons()[i].setLesMarchandise(m);
			}
		}
}

