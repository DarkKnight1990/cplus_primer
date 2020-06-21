#include<iostream>
using namespace std;

bool evenSum(int a[], int n) {
    int sum = 0;
    for(int i=0; i < n; i++){
        sum += a[i];
    }
    return (sum % 2) == 0;
}

int main() {
    int list[] = {3, 5, 6, 7, 9};
    int len = 5;
    bool result = evenSum(list, len);
    if(result) cout << "the sum is even\n" << endl;
    else cout << "the sum is odd]\n" << endl;
    return EXIT_SUCCESS;
}
