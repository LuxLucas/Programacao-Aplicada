#include <iostream>

int main(){
	int A[6] = {1, 0, 5, -2, -2, 7};
	int soma = A[0] + A[1] + A[5]; 
	
	std::cout << "Resultado: " << soma << std::endl;
	
	A[4] = 100;
	
	for(int i=0; i<5; i++){
		std::cout << A[i] << std::endl;
	}
	
	return 0;
}
