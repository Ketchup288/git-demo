#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    double f;
    cout << "Input your number here and I'll solve the function: "; cin >> x;
    f = pow(sin(x), 2);
    cout << "Your answer is: " << f << endl;
    return 0;
}
