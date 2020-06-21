#include <iostream>
using namespace std;

void reverseArray(int a[], int size){
    for (int i=0; i<size/2; i++) {
        int temp = a[size - 1 - i];
        a[size -1 - i] = a[i];
        a[i] = temp;
    }
}

int main(){
    int size = 2000000;
    int arr[size];
    for (int j=0; j<size; j++){
        arr[j] = j + 1;
    }
    for (int i=0; i<size; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
    cout << "**************" << endl;
    reverseArray(arr, size);
    for (int i=0; i<size; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
    return EXIT_SUCCESS;
}
