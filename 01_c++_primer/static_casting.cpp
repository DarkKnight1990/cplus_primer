#include<iostream>
using namespace std;

int main() {
    double d1 = 3.2;
    double d2 = 3.99;
    int i1 = static_cast<int>(d1);
    int i2 = int(d2);
    cout << i1 << endl;
    cout << i2 << endl;
    return 0;
}