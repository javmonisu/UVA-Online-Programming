//============================================================================
// Name        : Edades.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int entradas,n;
	while(std::cin>>entradas){
		std::vector<int> numeros;
		if(entradas==0){
			break;
		}
		for(int i = 0 ; i < entradas; i++){
			std::cin>>n;
			numeros.push_back(n);
		}
		std::sort(numeros.begin(),numeros.end());
		for(unsigned int j = 0 ; j < numeros.size() ; j++){
			if(j!=numeros.size()-1){
				std::cout<<numeros.at(j)<<" ";
			}else{
				std::cout<<numeros.at(j);
			}

		}
		std::cout<<std::endl;
	}
	return 0;
}
