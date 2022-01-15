class CargaisonRoutiere:public Cargaison
{

		
	public:
		float poid;
		float getcout();
		void setCout();
		CargaisonRoutiere();
		CargaisonRoutiere(string reference,int destance);
		~CargaisonRoutiere();
		void setLesMarchandise(Marchandise* Mar);
	
		
	
};
