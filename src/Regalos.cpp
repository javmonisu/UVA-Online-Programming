//============================================================================
// Name        : Regalos.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : 119-Greedy Givers
//============================================================================

#include <iostream>
#include<string>
#include<vector>
using namespace std;
struct Personas{
	string name;
	int gifts;
};
int main() {

	int numeropersonas, dineroParaRegalos=0,numRegalos,dineroPorPersona;
	bool first=true;
	string nombreEntrada;

	while(cin>>numeropersonas){

					vector<Personas> vectorPersonas;
					for(int i = 0 ; i<numeropersonas;i++){
							cin>>nombreEntrada;
							Personas individuo;
							individuo.name=nombreEntrada;
							individuo.gifts=0;
							vectorPersonas.push_back(individuo);

					}
					for(int a = 0 ; a < numeropersonas; a++){
								cin>>nombreEntrada >> dineroParaRegalos >> numRegalos;
								if(numRegalos>0){
									for(unsigned int i = 0 ; i < vectorPersonas.size(); i++){
																if(nombreEntrada==vectorPersonas.at(i).name){
																	vectorPersonas.at(i).gifts+=dineroParaRegalos%numRegalos-dineroParaRegalos;
																	break;
																}
															}
															dineroPorPersona=0;
															if(numRegalos!=0){
																dineroPorPersona =(dineroParaRegalos/numRegalos);
															}

															for(int i = 0 ; i < numRegalos;i++){
																cin>>nombreEntrada;
																for(unsigned int j = 0 ; j < vectorPersonas.size(); j++){
																	if(nombreEntrada==vectorPersonas.at(j).name){
																		vectorPersonas.at(j).gifts += dineroPorPersona;
																		break;
																	}
																}
															}
								}
					}
					first ? first=false : cout<<endl;
					for(unsigned int k = 0 ; k < vectorPersonas.size(); ++k){

								cout<<vectorPersonas.at(k).name<<' '<<vectorPersonas.at(k).gifts<<"\n";

					}


	}
return 0;
}
