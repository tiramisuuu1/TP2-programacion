 #include <iostream>

using namespace std;

int main()
{
  int numero;
  
    cout<<"Ingresar un numero: ";
        cin>>numero;
        
    if (numero>0)
    {
        cout<<"El numero "<<numero<<" es positivo.";
    }   
    else if (numero<0)
    {
        cout<<"El numero "<<numero<<" es negativo.";
    }
   
    else if (numero==0)
    {  
        cout<<"El numero "<<numero<<" es nulo.";
    }
    
    return 0;
    
    
}