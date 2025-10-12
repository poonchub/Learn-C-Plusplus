#include <iostream>
#include <array.h>

using namespace std;

void array(){
    int numberArray1D[4] = {1, 2, 3, 4};
    int numberArray2D[2][3] = {
        {1, 2, 3},
        {3, 4, 5}
    };

    cout << "================= Array =====================" << endl;
    cout << "numberArray1D: " << endl;
    for (int i = 0 ; i < 4 ; i++) {
        cout << numberArray1D[i] << " ";
    }

    cout << "" << endl;

    cout << "numberArray2D: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << numberArray2D[i][j] << " ";
        }
        cout << endl;
    }
}