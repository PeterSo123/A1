#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int size;
    
    cin >> size;
    
    if (size < 2 || size > 6)
    {
        do {
            cout << "Error" << endl;
            cin >> size;
        } while (size < 2 || size > 6);
    }
    
    for(int space = 0; space < 1; space++)
    {
        cout << setw(3);
        for(int repeat = 2; repeat > 0; repeat--)
        {
            cout << setw(3);
            for(int top = 0; size > top; top++)
            {
                cout << "#";
            }
            cout << endl;
        }
        
        for (int gap = 0; (size - 2) > gap; gap++)
        {
            cout << setw(3) << "#" << setw(size - 1) << "#" << endl;
        }
        
        cout << setw(2) << "#" << setw(size + 1) << "#" << endl;
        cout << "#" << setw(size + 3) << "#" << endl;
        
        for (int gap = 0; (size + 4) > gap; gap++)
        {
            for (int down = 0; (size + 4) > down; down++)
            {
                cout << "#";
            }
            cout << endl;
        }
    }
    
    return 0;
}

