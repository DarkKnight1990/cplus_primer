#include<iostream>
#include<string>
using namespace std;

int main() {
    enum MealType { NO_PREF, REGULAR, LOW_FAT, VEGETARIAN };
    struct Passenger
    {
        string name;
        MealType mealPref;
        bool isFreqFlyer;
        string freqFlyerNo;
    };

    Passenger p1 = { "John Doe", VEGETARIAN, true, "293145" };

    cout << p1.name << " - " << p1.mealPref << endl;

    /* 
    Pointers, Dynamic Allocation of memory and the "new" operator
    */

    Passenger* p;

    p = new Passenger;
    p->name = "Pocahontas";
    p->mealPref = REGULAR;
    p->isFreqFlyer = false;
    p->freqFlyerNo = "NONE";

    cout << (*p).name << endl;
    cout << p->name << endl;

    delete p;
    
    return 0;
}