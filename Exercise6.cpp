/*6. Escribe un program que lea la nota final de
cuatro alumnos y calcule la nota final media de
los cuatro alumnos.
*/

#include<iostream>

using namespace std;

int main(){
	float n1,n2,n3,n4,promedio;
	
	cout<<"Nota 1: ";
	cin>>n1;
	
	cout<<"Nota 2: ";
	cin>>n2;
	
	cout<<"Nota 3: ";
	cin>>n3;
	
	cout<<"Nota 4: ";
	cin>>n4;
	
	promedio = (n1+n2+n3+n4)/4;
	
	cout<<"Promedio: "<<promedio<<endl;
	return 0;
}