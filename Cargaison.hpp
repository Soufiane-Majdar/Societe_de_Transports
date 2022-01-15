

class Cargaison{
	protected:
		string reference;
		int destance;
		float couts;
		Marchandise  LesMarchandise[100];
	
	public:
		int n;
	public: 
		Cargaison();
		Cargaison(string reference,int destance);
		~Cargaison();
		void afficher();
		
		void setLesMarchandise(Marchandise* Mar);
		Marchandise * getLesMarchandise();
		
		void setReference(string reference);
		string getReference();
		
		void setDestance(int destance);
		int getDestance();
		
		float getcout();
		void setCout(float couts);
		
		
 
};
