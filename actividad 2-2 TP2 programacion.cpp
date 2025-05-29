#include <iostream>

using namespace std;

int main()
{
  int num1, num2, suma, resta, multi, divi;
    cout<<"Ingresa dos números: "<<endl;
    cout<<"Primer número: ";
        cin>>num1;
    cout<<"Segundo número: ";
        cin>>num2;

    if (num1>num2)
    {
            suma=num1+num2;
            resta=num1-num2;
    cout<<"El primer número es mayor, aca su suma y diferencia: "<<endl;
    cout<<"Suma: "<<suma<<endl;
    cout<<"Su diferencia: "<<resta;
    } 
    else if (num1<num2)
    {
            multi=num2*num1;
            divi=num2/num1;
    cout<<"El segundo número es mayor, aca su producto y división: "<<endl;
    cout<<"Producto: "<<multi<<endl;
    cout<<"Su division: "<<divi;
    }


    return 0;
} 
