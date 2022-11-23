/*10. Escribe un programa que calcule las
soluciones de una ecuación de segundo grado de la
forma ax^2+bx+c = 0 teniendo en cuenta:

x1 = ((-1*b)+sqrt(pow(b,2)-4*a*c))/(2*a)
x2 = ((-1*b)-sqrt(pow(b,2)-4*a*c))/(2*a)
*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float x1,x2,a,b,c;
	
	cout<<"Value a: ";
	cin>>a;
	cout<<"Value b: ";
	cin>>b;
	cout<<"Value c: ";
	cin>>c;
	
	x1 = ((-1*b)+sqrt(pow(b,2)-4*a*c))/(2*a);
	x2 = ((-1*b)-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	cout<<"X1: "<<x1<<endl;
	cout<<"X2: "<<x2<<endl;
	
	
	return 0;
}