#include <iostream>
#include <string>
#include <cstdlib>
#include "funciones_cripto.h"

bool cripto1 (std::string str, std::string password){
    for (int i = 0; i <= str.size(); i++){
		str[i] = password[i];
	    if (i > password.size()){
			str[i] = password [password.size() - (i-1)];
		}
	}
    return str;
}
bool cripto2 (std::string str, std::string password){
    password = atoi(password.c_str())
    
    for(int i = 0; i <= str.length(); i++){
        
        std::string palabra_coficada = ""
        palabra_codificada[i] = (str[i] + password);
    }
    return palabra_codificada;

}
