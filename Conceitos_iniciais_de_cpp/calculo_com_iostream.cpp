#include <iostream>

using namespace std;

float somaNumeros(float primeiroNumero, float segundoNumero){
	float resultadoSoma = primeiroNumero + segundoNumero;
	return resultadoSoma;
}

int main(){
	//Vari�eis
	float primeiroNumero;
	float segundoNumero;
	float somaNumeros;
	
	//Input de n�meros
	cout << "Digite um primeiro n�mero: ";
	cin >> primeiroNumero;
	cout << endl;
	
	cout << "Digite seu segundo n�mero: ";
	cin >> segundoNumero;
	cout << endl;
	
	//Processamento das informa��es
	somaNumeros = somaNumeros(primeiroNumero, segundoNumero);
	
	//Sa�da de resultado
	cout << "O resultado da soma �: " << somaNumeros;
	
	return 0;
}
