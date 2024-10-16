#include <iostream>

using namespace std;

int numeroEPar(int numero){
	return numero % 2 == 0;
}

int main(){
	int contador;
	
	while(contador < 50){
		++contador;
		if(numeroEPar(contador)){
			cout << contador << endl;
		}
	}
	return 0;
}
