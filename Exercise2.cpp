/*2. Escribe la siguiente expresión matemática
como expresión en C++
result = (a+b)/(c+d)
*/

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,result;
	
	cout<<"Write value of a: ";
	cin>>a;
	cout<<"Write value of b: ";
	cin>>b;
	cout<<"Write value of c: ";
	cin>>c;
	cout<<"Write value of d: ";
	cin>>d;
	
	result = (a+b)/(c+d);
	cout<<"Result: "<<result<<endl;
	cout.precision(3);//permite redondear el valor y mostrar el número de digitos despues del punto
	cout<<"Result con precision: "<<result<<endl;
	
	return 0;
}

