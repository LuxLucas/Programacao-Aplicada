#include "CidadesBrasil.cpp"
#include <iostream>
#include <string>
using namespace std;

string receberString();
int receberInteger();

int main(){
	setlocale(LC_ALL, "portuguese-brazilian");
	
	string nome, dataFundacao;
	int numeroHabitantes, numeroEleitores;
	
	cout << "Nome da cidade: ";
	nome = receberString();
	
	cout << "Data de funda��o: ";
	dataFundacao = receberString();
	
	cout << "N�mero de habitantes: ";
	numeroHabitantes = receberInteger();
	
	cout << "N�mero de eleitores: ";
	numeroEleitores = receberInteger();
	
	CidadesBrasil cidadesBrasil(nome, dataFundacao, numeroHabitantes, numeroEleitores);
	
	cout << cidadesBrasil.getNome() << endl;
	cout << cidadesBrasil.getDataFundacao() << endl;
	cout << cidadesBrasil.getNumeroHabitantes() << endl;
	cout << cidadesBrasil.getNumeroEleitores() << endl;
	
	return 0;
}

string receberString(){
	string valorString;
	cin >> valorString;
	cout << endl;
	return valorString;
}

int receberInteger(){
	int valorInt;
	cin >> valorInt;
	cout << endl;
	return valorInt;
}

