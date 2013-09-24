//============================================================================
// Name        : 441Lotto.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<vector>

using namespace std;

vector<int> numbers;
int k, n, cont;
//Backtrack
void bT(int x, int z){
    if(__builtin_popcount(x)==6){
        cont=0;
        for(int i=0;i<k;i++){
            if((x&(1<<i))!=0){
                cont++;
                cout<<numbers[i];
                if(cont<6) cout<<" ";
            }
        }
        cout<<endl;
        return;
    }
    for(int i=z+1 ; i<k ; i++){
    	bT((x|(1<<i)),i);
    }
    return;
}

int main(){
    bool auxNewLine=false;
    while(true){
        cin>>k;
        if(k==0){
        	break;
        	//exit
        }
        if(auxNewLine){
        	cout<<endl;
        }
        numbers.clear();
        for(int i=0;i<k;i++){
            cin>>n;
            numbers.push_back(n);
        }
        bT(0,-1);
        auxNewLine=true;
    }
    return 0;
}
