// лаба 3.2

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double x;
    double F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

    // method 1
    if (x - 1 < 0 && b - x != 0)
    {
        F = a*x*x + b;
    }
    else if (x - 1 > 0 && b + x == 0)
    {
        F = (x-a)/x;
    }
    else
    {
        F = x/c;
    }



    
    // method 2
    if (x - 1 < 0 && b - x != 0)
    {
        F = a*x*x + b;
    }
    else {
        if (x - 1 > 0 && b + x == 0){
            F = (x-a)/x;
        }
        else{
        F = x/c;
        }
    }


    cout << "F = " << F << endl;
    cin.get();
    return 0;
}