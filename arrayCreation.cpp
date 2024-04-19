#include <iostream>
#include <string>
using namespace std;

int main() {
    //  array decralation and initialisation
    string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int num_elements = sizeof(elements) / sizeof(elements[0]);

    
    for (int i = 0; i < num_elements; ++i) {
        
        if (elements[i][0] == 'B') {
            
            cout << elements[i] << endl;
        }
    }

    return 0;
}