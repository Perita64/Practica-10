#include <iostream>
#include <string>
#include "funciones_cripto.h"

int main (int argc, char* argv[]){

	std::string palabra {argv[1]};
	std::string modo {argv[2]};
	std::string password {argv[3]};
    
	if (modo = "xor"){
	   cripto1 (palabra, password);
	}

	if (modo = "cesar"){
		cripto2 (palabra, password);
	}
	
	return 0;
}
