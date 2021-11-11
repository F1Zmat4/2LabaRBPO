#include <iostream>

extern double x, result;
extern void f();

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
    return 0;
}