#include<iostream>
using namespace std;

void f(int val, int& ref) {
    val ++;
    ref ++;
    cout << val << endl;
    cout << ref << endl;
}

int main() {
    int cat = 1;
    int dog = 5;
    f(cat, dog);
    cout << cat << endl;
    cout << dog << endl;
    return EXIT_SUCCESS;
}
