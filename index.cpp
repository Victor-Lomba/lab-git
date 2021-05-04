#include<iostream>
#include <conio.h>
#include <string.h>

using namespace std;



int FibIndex(int index){
	int n1 = 0, n2 = 1, space;
	for(int i = 0; i < index; i++){
		space = n1;
		n1 += n2;
		n2 = space;
	}
	return n1;
}

int SomaSimples(int sequencia_fib, int somador){
    int soma= sequencia_fib + somador;

    return soma;
}

void meu_strcat (char v1[], char v2[])
{
string s1, s2;
s1 = v1;
s2 = v2;
s1 = s1+s2;
strcpy(v1, s1.c_str());
}


main(){
	//teste fib
	cout << FibIndex(8)<< endl;//deve retornar 21

    int sequencia_fib= FibIndex(8);

    cout<< SomaSimples(sequencia_fib, 1); //deve retornar 22
    
    char V1[256], V2[256];
	string S1, S2;
	S1 = "\nCEFET";
	S2 = "/RJ";
	strcpy(V1, S1.c_str());
	strcpy(V2, S2.c_str());
	meu_strcat(V1, V2);
	S1 = V1;
	cout << S1;
}
