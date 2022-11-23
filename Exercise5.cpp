/*5. Escriba un fragmento de programa que
intercambie los valores de dos variables*/

#include<iostream>

using namespace std;
int main(){
	int a,b,aux;
	a = 10;
	b = 5;
	cout<<"Value\na: "<<a<<"\nb: "<<b<<endl;
	aux = a;
	a = b;
	b = aux;
	cout<<"Value\na: "<<a<<"\nb: "<<b<<endl;
	
	return 0;
}