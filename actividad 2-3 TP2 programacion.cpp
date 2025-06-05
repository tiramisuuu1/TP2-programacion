/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
  
  int numA, numB, numC;
   
    cout<<"Ingresa un numero: ";
        cin>>numA;
    cout<<"Ingresa otro numero: ";
        cin>>numB;
    cout<<"Ingresa otro numero mas: ";
        cin>>numC;
    
    if (numA==numB && numA==numC)
    {
        cout<<"HAY NUMEROS QUE SE REPIITEEEEEENN!!!!!!!"<<endl;
    }
    
    else if (numB==numA && numB==numC)
    {
        cout<<"HAY NUMEROS QUE SE REPIITEEEEEENN!!!!!!!"<<endl;
    }
    
    else
    {
        cout<<"HAY NUMEROS QUE SE REPIITEEEEEENN!!!!!!!"<<endl;
    }
    
    
     if (numA>numB && numA>numC)
    {
        cout<<"El numero "<<numA<<" es el mayor."<<endl;
    }
    
    else if (numB>numA && numB>numC)
    {
        cout<<"El numero "<<numB<<" es el mayor."<<endl;
    }
    else
    {
        cout<<"El numero "<<numC<<" es el mayor."<<endl;
    }
   
    if (numA<numB && numA<numC)
    {
        cout<<"El numero "<<numA<<" es el menor.";
    }
    
    else if (numB<numA && numB<numC)
    {
        cout<<"El numero "<<numB<<" es el menor.";
    }
    else
    {
        cout<<"El numero "<<numC<<" es el menor.";
    }
   
    return 0;
}