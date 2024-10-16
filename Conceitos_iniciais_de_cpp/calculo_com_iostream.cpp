#include <iostream>

using namespace std;

float somaNumeros(float primeiroNumero, float segundoNumero){
	float resultadoSoma = primeiroNumero + segundoNumero;
	return resultadoSoma;
}

int main(){
	//Variáeis
	float primeiroNumero;
	float segundoNumero;
	float somaNumeros;
	
	//Input de números
	cout << "Digite um primeiro número: ";
	cin >> primeiroNumero;
	cout << endl;
	
	cout << "Digite seu segundo número: ";
	cin >> segundoNumero;
	cout << endl;
	
	//Processamento das informações
	somaNumeros = somaNumeros(primeiroNumero, segundoNumero);
	
	//Saída de resultado
	cout << "O resultado da soma é: " << somaNumeros;
	
	return 0;
}
