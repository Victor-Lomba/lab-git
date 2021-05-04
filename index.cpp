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


main(){
	//teste fib
	cout << FibIndex(8);//deve retornar 21
}
