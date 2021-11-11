#include <iostream>
#include <cmath>

void f(const double &x, double &result);

int main() {
    using namespace std;
    {
        double x = 5, result;
        f(x, result);
        cout << "x = " << x << endl;
        cout.precision(4);
        cout << "f = " << result << endl;
    }
    double x, result;
    cout << "x = ";
    cin >> x;
    f(x, result);
    cout.precision(4);
    cout << "f = " << result;
    return 0;
}

void f(const double &x, double &result) {
    result = pow(cos(3.0/8.0 * M_PI - x/4.0), 2) - pow(cos(11.0/8.0 * M_PI + x/4.0), 2);
}
