/*8. Escribe un programa que lea de la entrada
estándar los dos catetos de un triangulo
réctangulo y escriba en la salida estándar la
hipotenusa.
*/

#include<iostream>
#include<math.h>//librería mátematica y trigonometrica

using namespace std;

int main(){
	float ca,co,hipotenusa;
	
	cout<<"Cateto adyacente: ";
	cin>>ca;
	cout<<"Cateto opuesto: ";
	cin>>co;
	
	hipotenusa = sqrt(pow(ca,2)+pow(co,2));
	
	cout<<"Hipotenusa: "<<hipotenusa<<endl;
	
	
	return 0;
}