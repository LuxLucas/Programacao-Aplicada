#include <iostream>

using namespace std;

float sacar(float saldo, float valorDeSaque);

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float limite = 1000, saldo = 100, saque;
	
	cout << "Saldo atual: " << saldo << endl;
	
	cout << "Digite seu valor de saque: ";
	cin >> saque;
	cout << endl;
	
	saldo = sacar(saldo, saque);
	
	cout << "Saldo atual: " << saldo << endl;
	
	return 0;
}

float sacar(float saldo, float valorDeSaque){
	float saque = saldo - valorDeSaque;
	return saque;
}
