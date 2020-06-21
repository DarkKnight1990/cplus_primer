#include<iostream>
using namespace std;
enum direction {East, West, North, South}dir;
enum DAY { SUN, MON, TUE, WED, THU, FRI, SAT };
enum MOOD { HAPPY=3, SAD=1, ANXIOUS=4, SLEEPY=2 };
int main() {
    dir = West;
    cout << dir << endl;
    DAY today = THU;
    cout << today << endl;
    MOOD myMood = SLEEPY;
    cout << myMood << endl;
    return 0;
}
