#include<iostream>

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


main(){
	//teste fib
	cout << FibIndex(8)<< endl;//deve retornar 21

    int sequencia_fib= FibIndex(8);

    cout<< SomaSimples(sequencia_fib, 1); //deve retornar 22
}
