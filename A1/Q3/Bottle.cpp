#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int size;
    
    cin >> size;
        
    if ((size < 2 || size == 4) || size > 5)
    {
        do {
            cout << "Error" << endl;
            cin >> size;
        } while ((size < 2 || size == 4) || size > 5);
    }
    
    switch (size) {
        case 2:
            for (int d = 0; d < 1; d++) {
                cout << "######" << endl;
                for (int h = 2; h > 0; h--) {
                    cout << "#" << setw(size + 3) << "#" << endl;
                }
                for (int m = 0; (size + 2) > m; m++) {
                    cout << "######" << endl;
                }
                cout << setw(size + 3) << "####" << endl;
                for (int t = 0; size > t; t++) {
                    cout << setw(size + 2) << "##" << endl;
                }
            }
            break;
        case 3:
            for (int d = 0; d < 1; d++) {
                cout << "#######" << endl;
                for (int h = 2; h > 0; h--) {
                    cout << "#" << setw(size + 3) << "#" << endl;
                }
                for (int m = 0; (size + 2) > m; m++) {
                    cout << "#######" << endl;
                }
                cout << setw(size + 3) << "#####" << endl;
                for (int t = 0; size > t; t++) {
                    cout << setw(size + 2) << "###" << endl;
                }
            }
            break;
        case 5:
            for (int d = 0; d < 1; d++) {
                cout << "#########" << endl;
                for (int h = 2; h > 0; h--) {
                    cout << "#" << setw(size + 3) << "#" << endl;
                }
                for (int m = 0; (size + 2) > m; m++) {
                    cout << "#########" << endl;
                }
                cout << setw(size + 3) << "#######" << endl;
                for (int t = 0; size > t; t++) {
                    cout << setw(size + 2) << "#####" << endl;
                }
            }
            break;
    }
    
    return 0;
}


