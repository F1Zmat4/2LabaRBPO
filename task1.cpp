#include <iostream>
#include <cmath>

int main() {
    using namespace std;
    {
        double x = 5, f;
        f = pow(cos(3.0/8.0 * M_PI - x/4.0), 2) - pow(cos(11.0/8.0 * M_PI + x/4.0), 2);
        cout << "x = " << x << endl;
        cout.precision(4);
        cout << "f = " << f << endl;
    }
    double x, f;
    cout << "x = ";
    cin >> x;
    f = pow(cos(3.0/8.0 * M_PI - x/4.0), 2) - pow(cos(11.0/8.0 * M_PI + x/4.0), 2);
    cout.precision(4);
    cout << "f = " << f << endl;
    return 0;
}