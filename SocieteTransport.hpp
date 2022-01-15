class SocieteTransport{
	private:
		Cargaison LesCargaisons[100];
	
	
	public:
		int n;
		
		SocieteTransport();
		~SocieteTransport();
		
		void setLesCargaisons(Cargaison c[100]);
		Cargaison * getLesCargaisons();
		
		void addCargaisons(Cargaison* c);
	
		void afficher();
};