#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, A;
    double PI = 3.1416;
    cout << "Please enter the angle: ";
    cin >> A;
    cout << "Please enter the side: ";
    cin >> a;
    
    do {
        if (A <= 0 || A >= 90)
        {
            cout << "Error" << endl;
            cout << "Please enter the angle again: ";
            cin >> A;
        }
        else if(a <= 0)
        {
            cout << "Error" << endl;
            cout << "Please enter the side again: ";
            cin >> a;
        }
    } while (A <= 0 || A >= 90 || a <= 0);
    
    cout << setprecision(3);
    cout << fixed << a << endl;
    cout << fixed << a / tan(A * PI / 180) << endl;
    cout << fixed << a / sin(A * PI / 180) << endl;
    cout << setprecision(0);
    cout << A  << "°" << endl;
    cout << 180 - (A + 90) << "°" << endl;
    
    system("Pause");
    return 0;
}
