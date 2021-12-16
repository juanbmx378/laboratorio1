/*#include <iostream>
using namespace std;

int main()
{
    char c; int inicio=0, fin=100, n=50;
    bool adivine=true;
    while (adivine){
        cout<<"el numero es: " <<n<< " es > , es < o =? :" <<endl;
        cin>>c;
        switch (c) {
            case '>':
                inicio=n;
                n=((fin-inicio)/2)+inicio;
                break;
            case '<':
                fin=n;
                n=((fin-inicio)/2)+inicio;
                break;
            case '=':
                adivine=false;
                cout<<"el numero es: "<<n<<endl;
            default:
                cout<<"ingrese un caracter valido"<<endl;


        }
    }

return 0;
}
