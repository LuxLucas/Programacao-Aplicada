#include <iostream>

using namespace std;

int somaDeTresNumeros(int primeiroNumero, int segundoNumero, int terceiroNumero){
	int soma;
	soma = primeiroNumero + segundoNumero + terceiroNumero;
	return  soma;
} 

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int primeiroNumero, segundoNumero, terceiroNumero, soma;
	
	cout << "Digite seu primeiro n�mero: ";
	cin >> primeiroNumero;
	cout << endl;
	
	cout << "Digite seu segundo n�mero: ";
	cin >> segundoNumero;
	cout << endl;
	
	cout << "Digite seu terceiro n�mero: ";
	cin >> terceiroNumero;
	cout << endl;
	
	soma = somaDeTresNumeros(primeiroNumero, segundoNumero, terceiroNumero);
	
	cout << soma << endl;
	
	return 0;
}
