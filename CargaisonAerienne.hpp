class CargaisonAerienne:public Cargaison
{
	
		
	public:
		float poid;
		float getcout();
		CargaisonAerienne();
		CargaisonAerienne(string reference,int destance);
		~CargaisonAerienne();
		void setLesMarchandise(Marchandise* Mar);
	
		void setCout();
	
};
