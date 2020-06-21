#include<iostream>
using namespace std;

namespace myGlobals {
    int val = 3;
}

int main() {
    using namespace myGlobals;
    cout << val << endl;
    return 0;
}
