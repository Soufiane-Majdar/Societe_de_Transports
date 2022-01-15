
class clientTransport{
	protected :
		string nom;
		
	public:
		static	SocieteTransport st;
		
	public:
        void setnom(string nom);
        string getnom();
        clientTransport();
        clientTransport(string nom);
        clientTransport(string nom,SocieteTransport* s);
        ~clientTransport();
        void afficher();
        
        ////////////
  
		/// functions
		// Client
		void afficherCargaison(string ref);
		void afficherMarchandise(int num);
		void afficherMarchandise();
		void afficherCargaison();
		
		void afficherCout(string ref);
		void afficherPoidsTotal(string ref);
		
		//admin
		void ajouterCargaison();
		void ajouterMarchandise(string ref);
		
		void supprimerCargaison();
};
