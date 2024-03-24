#include <iostream>
#include <cmath>
using namespace std;

void update(int *a, int *b) {
    int sumValue = *a + *b;
    int absValue = abs(*a - *b);

    *a = sumValue;
    *b = absValue;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    cin >> a >> b;
    update(pa, pb);

    cout << a << endl;
    cout << b << endl;

    return 0;
}
