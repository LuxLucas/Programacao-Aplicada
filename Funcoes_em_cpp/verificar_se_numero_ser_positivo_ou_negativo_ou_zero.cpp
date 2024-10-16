#include <iostream>

using namespace std;

char retornarCaractereQueIndicaSeNumeroForPositivoOuNegativoOuZero(int numero);

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	cout << "Digite seu número para verificar se é positivo, negativo ou zero: ";
	cin >> numero;
	cout << endl;
	
	cout << "Resultado: " << retornarCaractereQueIndicaSeNumeroForPositivoOuNegativoOuZero(numero);
	cout << endl;
	
	return 0;
}

char retornarCaractereQueIndicaSeNumeroForPositivoOuNegativoOuZero(int numero){
	if(numero > 0){
		return 'P';
	}else if(numero < 0){
		return 'N';
	}
	return 'Z';
}
