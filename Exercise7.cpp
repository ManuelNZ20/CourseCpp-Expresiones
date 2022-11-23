/*7. La calificación final de un estudiante es el
promedio de tres notas:
- La nota de prácticas que cuenta un 30% del
total.
- La nota teórica que cuenta un 60%.
- La nota de participación que cuenta el 10%
restante.

Escribe un programa que lea tres notas del alumno
y escribe la nota final
*/

#include<iostream>

using namespace std;

int main()
{
	float n1,n2,n3,p1,p2,p3,fin;
	cout<<"Nota 1: ";
	cin>>n1;
	cout<<"Nota 2: ";
	cin>>n2;
	cout<<"Nota 3: ";
	cin>>n3;
	
	
	fin = (n1*0.3+n2*0.6+n3*0.1);
	cout<<"Promedio: "<<fin<<endl;
	return 0;
}


