#include <iostream>

int receberNumero(){
	int numero;
	
	std::cout << "Digite um número para o vetor: ";
	std::cin >> numero;
	
	return numero;
}

int retornarIndiceDoVetor(int vetor[10], int elemento){
	for(int i=0; i<10;++i){
		if(vetor[i] == elemento){
			return i;
		}
	}
	return -1;
}

int encontrarMaiorNumeroDoVetor(int vetor[10]){
	int maiorNumero = vetor[0];
	for(int i=0; i<10; ++i){
		if(vetor[i] > maiorNumero){
			maiorNumero = vetor[i];
		}
	}
	return maiorNumero;
}

void mostrarNumerosDoVetor(int vetor[10]){
	for(int i=0; i<10; ++i){
		std::cout << vetor[i] << std::endl;
	}
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int numero[10], maiorNumero, indice;
	for(int i=0; i<10; i++){
		numero[i] = receberNumero();
	}
	std::cout << "Elementos do vetor: " << std::endl;
	mostrarNumerosDoVetor(numero);
	
	maiorNumero = encontrarMaiorNumeroDoVetor(numero);
	indice = retornarIndiceDoVetor(numero, maiorNumero);
	
	std::cout << "Maior elemento do vetor: " << maiorNumero << " :Índice: " << indice << std::endl;
	return 0;
}
