#include <iostream>
#include <cmath>

void f();
double x, result;

int main() {
    using namespace std;
    {
        x = 5;
        f();
        cout << "x = " << x << endl;
        cout.precision(4);
        cout << "f = " << result << endl;
    }
    cout << "x = ";
    cin >> x;
    f();
    cout.precision(4);
    cout << "f = " << result;
}

void f() {
    result = pow(cos(3.0/8.0 * M_PI - x/4.0), 2) - pow(cos(11.0/8.0 * M_PI + x/4.0), 2);
}
