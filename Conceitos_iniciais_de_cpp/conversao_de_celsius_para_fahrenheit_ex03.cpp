#include <iostream>

using namespace std;

int main(){
	//Vari�veis
	float temperaturaCelsius, temperaturaFahrenheit;
	
	//Entrada de dados
	cout << "Qual a temperatura para Celsius (�C): ";
	cin >> temperaturaCelsius;
	
	//Processamento de convers�o
	temperaturaFahrenheit = (temperaturaCelsius * 9/5) + 32;
	
	//Sa�da de resultado
	cout << "O resultado da convers�o �: " << temperaturaFahrenheit << endl;
	
	return 0;
}
