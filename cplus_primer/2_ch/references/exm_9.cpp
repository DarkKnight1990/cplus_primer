#include <iostream>
int main(){
    int ival = 1024;
    int &refVal = ival;
    // int &refVal2; error: reference must always be initialised

    std::cout << ival << " " << &ival << std::endl;
    std::cout << &refVal << std::endl;
    //std::cout << refVal << " " << &ival << std::endl;
    //std::cout << refVal2 << "" << &refVal2 << std::endl;

    //int newVal = 345;
    // &refVal = &newVal; we cannot re-assign new reference to the refVal
    //std::cout << newVal << " " << &newVal << std::endl;
    //std::cout << refVal << std::endl;

    // After a reference is defined all operations on that reference are
    // actually operations on the object to which the reference is bound
    refVal = 2;
    std::cout << ival << " " << &refVal << std::endl;
    int nVal = refVal;
    int &refVal3 = refVal;
    int i = refVal;
    std::cout << refVal3 << std::endl;

    double dval = 3.14;
    double &refDVal = dval;
    std::cout << "Reference to a double " << dval
        << " is " << &refDVal << std::endl;
    return 0;
}
