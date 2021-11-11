#include <iostream>
#include <cmath>

double f(double x) {
    return pow(cos(3.0/8.0 * M_PI - x/4.0), 2) - pow(cos(11.0/8.0 * M_PI + x/4.0), 2);
}

int main() {
    using namespace std;
    {
        double x = 5;
        cout << "x = " << x << endl;
        cout.precision(4);
        cout << "f = " << f(x) << endl;
    }
    double x;
    cout << "x = ";
    cin >> x;
    cout.precision(4);
    cout << "f = " << f(x);
    return 0;
}
