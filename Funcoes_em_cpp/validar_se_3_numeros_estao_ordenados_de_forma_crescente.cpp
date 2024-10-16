#include <iostream>

using namespace std;

bool validarSeNumerosEstaoOrdenadosDeFormaCrescente(int primeiroNumero, int segundoNumero, int terceiroNumero);

int main(){
	setlocale(LC_ALL, "portuguese");

	int primeiroNumero, segundoNumero, terceiroNumero;
	bool respostaValidacao;

	
	cout << "Digite seu primeiro n�mero: ";
	cin >> primeiroNumero;
	cout << endl;
	
	cout << "Digite seu segundo n�mero: ";
	cin >> segundoNumero;
	cout << endl;
	
	cout << "Digite seu terceiro n�mero: ";
	cin >> terceiroNumero;
	cout << endl;
	
	respostaValidacao = validarSeNumerosEstaoOrdenadosDeFormaCrescente(primeiroNumero, segundoNumero, terceiroNumero);
	
	cout << "Os n�mero est�o de forma crescente?: " << respostaValidacao;
	cout << endl;
	
	return 0;
}

bool validarSeNumerosEstaoOrdenadosDeFormaCrescente(int primeiroNumero, int segundoNumero, int terceiroNumero){
	return primeiroNumero <= segundoNumero && segundoNumero <= terceiroNumero;
}
