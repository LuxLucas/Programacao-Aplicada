#include "Retangulo.cpp"
#include <iostream>

using namespace std;

int main(){
	float altura=1.5, largura=0.8;
	Retangulo retangulo(altura, largura);
	
	cout << "Perímetro: " << retangulo.calcularPerimetro() << endl;
	cout << "Area: " << retangulo.calcularArea() << endl;
	
	return 0;
}
