#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int num, count = 0;
    long int a, b, c, d, e, f, g, h, i;
   
    do{
    cin >> num;
    
    if(num < 10 || num >999999999)
    {
        cout << "Error" << endl;
    }
    }while (num < 10 || num >999999999);
    
    a = num / 100000000;
    b = (num % 100000000)/10000000;
    c = (num % 10000000)/1000000;
    d = (num % 1000000)/100000;
    e = (num % 100000)/10000;
    f = (num % 10000)/1000;
    g = (num % 1000)/100;
    h = (num % 100)/10;
    i = (num % 10)/1;
    
    while (num > 0) {
        num /= 10;
        count ++;
    }
    
    switch (count) {
            case 2:
                cout << -pow(h, 3) + pow(i, 3) << endl;
                break;
            case 3:
                cout << -pow(g, 3) + pow(h, 3) - pow(i, 3) << endl;
                break;
            case 4:
                cout << -pow(f, 3) + pow(g, 3) - pow(h, 3) + pow(i, 3) << endl;
                break;
            case 5:
                cout << -pow(e, 3) + pow(f, 3) - pow(g, 3) + pow(h, 3) - pow(i, 3) << endl;
                break;
            case 6:
                cout << -pow(d, 3) + pow(e, 3) - pow(f, 3) + pow(g, 3) - pow(h, 3) + pow(i, 3) << endl;
                break;
            case 7:
                cout << -pow(c, 3) + pow(d, 3) - pow(e, 3) + pow(f, 3) - pow(g, 3) + pow(h, 3) - pow(i, 3) << endl;
                break;
            case 8:
                cout << -pow(b, 3) + pow(c, 3) - pow(d, 3) + pow(e, 3) - pow(f, 3) + pow(g, 3) - pow(h, 3) + pow(i, 3) << endl;
                break;
            case 9:
                cout << -pow(a, 3) + pow(b, 3) - pow(c, 3) + pow(d, 3) - pow(e, 3) + pow(f, 3) - pow(g, 3) + pow(h, 3) - pow(i, 3) << endl;
                break;
        }
    
    return 0;
}


