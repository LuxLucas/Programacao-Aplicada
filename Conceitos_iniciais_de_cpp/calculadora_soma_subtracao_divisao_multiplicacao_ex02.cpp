#include <iostream>

using namespace std;

int main(){
	//Vari�veis
	int primeiroNumero;
	int segundoNumero;
	float divisaoNumeros;
	int somaNumeros, subtracaoNumeros, multiplicacaoNumeros;
	
	//Input de n�meros
	cout << "Digite um primeiro n�mero: ";
	cin >> primeiroNumero;
	cout << endl;
	
	cout << "Digite seu segundo n�mero: ";
	cin >> segundoNumero;
	cout << endl;
	
	//Processamento das informa��es
	somaNumeros = primeiroNumero + segundoNumero;
	subtracaoNumeros = primeiroNumero - segundoNumero;
	multiplicacaoNumeros = primeiroNumero * segundoNumero;
	divisaoNumeros = primeiroNumero / segundoNumero;
	
	//Sa�da de resultado
	cout << "O resultado da soma �: " << somaNumeros << endl;
	cout << "O resultado da subtra��o �: " << subtracaoNumeros << endl;
	cout << "O resultado da multiplica��o �: " << multiplicacaoNumeros << endl;
	cout << "O resultado da divis�o �: " << divisaoNumeros << endl;
	
	return 0;
}
