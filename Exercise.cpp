//1. Escribe la siguiente expresión como expresión en C++

#include<iostream>

using namespace std;

int main(){
	float a,b,result;
	
	cout<<"Write value of a: ";
	cin>>a;
	cout<<"Write value of b: ";
	cin>>b;
	
	result = (a/b)+1;
	cout.precision(2);://permite redondear los digitos
	cout<<result<<endl;
	
	return 0;
}
