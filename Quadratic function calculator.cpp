#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,delta,zero_place1,zero_place2, delta_root, one_zero_place;
    cout << "The quadratic function has the for: ax^2 + bx + c " << endl;
    cout << "Give the coefficients: " << endl;
    cin >> a >> b >> c;
    delta = pow(b,2)-4*a*c;
    if(delta > 0)
    {
        delta_root = sqrt(delta);
        zero_place1 = (-b-delta_root)/(2*a);
        zero_place2 = (-b+delta_root)/(2*a);
        cout << "Delta square = " << delta_root << endl;
        cout << "Zero place 1 = " << zero_place1 << endl;
        cout << "Zero place2 = " << zero_place2 << endl;
    }
    else if(delta == 0)
    {
        delta_root = sqrt(delta);
        one_zero_place = -b/(2*a);
        cout << "Delta = " << delta << endl;
        cout << "Only one zero place: " << one_zero_place << endl;
    }
    else
    {
        cout << "No solutions! " << endl;
    }
    return 0;
}
