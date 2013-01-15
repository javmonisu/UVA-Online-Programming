//============================================================================
// Name        : 102Bin.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

int main() {
	int B[3],G[3],C[3],menor_valor;

	std::string solucion;
	while(std::cin>>B[0]>>G[0]>>C[0]>>B[1]>>G[1]>>C[1]>>B[2]>>G[2]>>C[2]){

				//BCG
				menor_valor= B[1] + B[2] + C[0] + C[2] + G[0] + G[1];
				solucion="BCG";

				//BGC
				if(B[1] + B[2] + G[0]+ G[2]+ C[0]+ C[1]<menor_valor){
					menor_valor=B[1] + B[2] + G[0]+ G[2]+ C[0]+ C[1];
					solucion="BGC";
				}
				//CBG
				if(C[1] + C[2] + B[0] + B[2] + G[0] + G[1]<menor_valor){
					menor_valor=C[1] + C[2] + B[0] + B[2] + G[0] + G[1];
					solucion="CBG";
				}
				//CGB
				if(C[1] + C[2] + G[0] + G[2] + B[0] + B[1]<menor_valor){
					menor_valor=C[1] + C[2] + G[0] + G[2] + B[0] + B[1];
					solucion="CGB";
				}
				//GBC
				if( G[1] + G[2] + B[0] + B[2] + C[0] + C[1]<menor_valor){
					menor_valor= G[1] + G[2] + B[0] + B[2] + C[0] + C[1];
					solucion="GBC";
				}
				//GCB
				if(G[1] + G[2] + C[0] + C[2] + B[0] + B[1]<menor_valor){
					menor_valor=G[1] + G[2] + C[0] + C[2] + B[0] + B[1];
					solucion="GCB";
				}
		std::cout<<solucion<<" "<<menor_valor<<std::endl;
	}
	return 0;
}
