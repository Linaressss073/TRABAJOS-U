#include <iostream>

using namespace std;

int main(){
	
    int x, y;
    int resultado = 1;

    cout << "\n\tDigite la variable de X "; cin >> x;
    cout << "\n\tDigite la variable de Y "; cin >> y;

    for (int i = 1; i <= y; i++) {
        resultado *= x; // resultado = resultado * x;  resultado *= x;
    }

    cout << "\n\tEl resultado es: " << resultado << endl; 

    return 0;
}
