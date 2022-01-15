class Marchandise{
	private:
		int numero;
		float poids;
		float volume;
	
	public:
		
		// les Constrictuer
		Marchandise();	
		Marchandise(int numero,float poids,float volume);
		~Marchandise();
		
		// geters & seters
		int getNumero();
		void setNumero(int numero);
		
		float getPoids();
		void setPoids(float poids);
		
		float getVolume();
		void setVolume(float volume);
		
		// function
		void afficher();
		
		
};