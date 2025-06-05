#include <iostream>
using namespace std;
int main()
{
  
  int nota1, nota2, nota3, notaf;
  
    cout<<"Ingrese tres notas del alumno a evaluar"<<endl;
    cout<<"Primera nota: ";
        cin>>nota1;
    cout<<"Segunda nota: ";
        cin>>nota2;
    cout<<"Tercera nota: ";
        cin>>nota3;
     notaf=(nota1+nota2+nota3)/3;
    
    if (notaf>=7)
    {
        cout<<"TEA. El alumno esta aprobado.";
    }
    
    else if (notaf>=4 && notaf<7)
    {
        cout<<"TEP. El alumno esta en proceso.";
    }
    else
    {
        cout<<"TED. El alumno esta desaprobado.";
    }
    
    
    return 0;
}