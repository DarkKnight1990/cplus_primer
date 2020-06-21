#include<iostream>
using namespace std;

int main() {
    char c[] = {'c', 'a', 't'};
    cout << c[0] << endl;
    cout << c[1] << endl;
    cout << c[2] << endl;
    char* p = c;
    char* q = &c[0];
    cout << c << p << q << endl;
    cout << c[2] << p[2] << q[2] << endl;
    return 0;
}
