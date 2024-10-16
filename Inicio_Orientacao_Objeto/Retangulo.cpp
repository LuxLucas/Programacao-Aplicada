class Retangulo{
	private:
		float altura, largura;
		
	public:
		Retangulo(float altura, float largura){
			this -> setAltura(altura);
			this -> setLargura(largura);
		}
		
		//geters
		float getAltura(){
			return altura;
		}
		
		float getLargura(){
			return largura;
		}
		
		//seters
		void setAltura(float novaAltura){
			altura = novaAltura;
		}
		
		void setLargura(float novaLargura){
			largura = novaLargura;
		}
		
		//calculos
		float calcularPerimetro(){
			float perimetro = 2*altura + 2*largura;
			return perimetro;
		}
		
		float calcularArea(){
			float area = largura*altura;
			return area;
		}
};
