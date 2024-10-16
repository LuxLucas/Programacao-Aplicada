#include <iostream>

using namespace std;

int main(){
	//Variáveis
	int primeiroNumero;
	int segundoNumero;
	float divisaoNumeros;
	int somaNumeros, subtracaoNumeros, multiplicacaoNumeros;
	
	//Input de números
	cout << "Digite um primeiro número: ";
	cin >> primeiroNumero;
	cout << endl;
	
	cout << "Digite seu segundo número: ";
	cin >> segundoNumero;
	cout << endl;
	
	//Processamento das informações
	somaNumeros = primeiroNumero + segundoNumero;
	subtracaoNumeros = primeiroNumero - segundoNumero;
	multiplicacaoNumeros = primeiroNumero * segundoNumero;
	divisaoNumeros = primeiroNumero / segundoNumero;
	
	//Saída de resultado
	cout << "O resultado da soma é: " << somaNumeros << endl;
	cout << "O resultado da subtração é: " << subtracaoNumeros << endl;
	cout << "O resultado da multiplicação é: " << multiplicacaoNumeros << endl;
	cout << "O resultado da divisão é: " << divisaoNumeros << endl;
	
	return 0;
}
