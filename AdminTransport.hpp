class AdminTransport:public clientTransport
{

	
public :
	void setnom(string nom);
	string getnom();

	AdminTransport();
	AdminTransport(string nom);
	~AdminTransport();
	void afficher();
	
	
			/// functions
		// Client

		
		//admin
		void ajouterCargaison();
		void ajouterMarchandise(string ref);
		
		void supprimerCargaison();


};