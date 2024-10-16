#include <iostream>

using namespace std;

int main(){
	//Variáveis
	float temperaturaCelsius, temperaturaFahrenheit;
	
	//Entrada de dados
	cout << "Qual a temperatura para Celsius (°C): ";
	cin >> temperaturaCelsius;
	
	//Processamento de conversão
	temperaturaFahrenheit = (temperaturaCelsius * 9/5) + 32;
	
	//Saída de resultado
	cout << "O resultado da conversão é: " << temperaturaFahrenheit << endl;
	
	return 0;
}
