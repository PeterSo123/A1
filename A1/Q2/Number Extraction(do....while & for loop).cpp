#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, innum = 0, mod = 1000000000, div = 100000000, sum = 0;
    int count = 9;
    
    do{
        cin >> num;
        if (num < 10 || num > 999999999) {
            cout << "Error" << endl;
        }
    }while (num < 10 || num > 999999999) ;
    
    for (int i = 0; i < count; i++)
    {
        innum = (num % mod) / div;
        mod /= 10;
        div /= 10;
        
        if (i%2 == 0) {
            sum = sum + pow(innum, 3);
        }
        else
        {
            sum = sum - pow(innum, 3);
        }
    }
    cout << sum << endl;
    
    return 0;
}

