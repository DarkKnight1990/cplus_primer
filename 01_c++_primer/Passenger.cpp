#include<iostream>
#include<string>
using namespace std;

enum MealType { NO_PREF, REGULAR, LOW_FAT, VEGETARIAN };

class Passenger
{
    public:
    Passenger();
    Passenger(const string& nm, MealType mp, const string& ffn = "NONE");
    Passenger(const Passenger& pass);
    bool isFrequentFlyer() const { return isFreqFlyer; };
    void makeFreqFlyer(const string& newFreqFlyerNo);
    
    private:
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNo;
};

Passenger::Passenger() {
    name = "--NO NAME--";
    mealPref = NO_PREF;
    isFreqFlyer = false;
    freqFlyerNo = "NONE";
}

Passenger::Passenger(const string& nm, MealType mp, const string& ffn)
    : name(nm), mealPref(mp), isFreqFlyer(ffn != "NONE")
    { freqFlyerNo = ffn; }

Passenger::Passenger(const Passenger& pass) {
    name = pass.name;
    mealPref = pass.mealPref;
    isFreqFlyer = pass.isFreqFlyer;
    freqFlyerNo = pass.freqFlyerNo;
}

void Passenger::makeFreqFlyer(const string& newFreqFlyerNo){
    isFreqFlyer = true;
    freqFlyerNo = newFreqFlyerNo;
}

int main() {
    Passenger p1("John Smith", VEGETARIAN, "1123456");
    cout << p1.isFrequentFlyer() << endl;
    return EXIT_SUCCESS;
}
