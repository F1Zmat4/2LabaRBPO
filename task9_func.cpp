#include "func_t9.h"
#include "cmath"

double x, result;
namespace Drebuzhan {
    void f() {
        result = pow(cos(3.0/8.0 * M_PI - x/4.0), 2) - pow(cos(11.0/8.0 * M_PI + x/4.0), 2);
    }
}
