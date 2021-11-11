#include <iostream>

extern double f(double x);

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
