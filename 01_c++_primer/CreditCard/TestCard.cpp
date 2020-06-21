#include <vector>
#include "CreditCard.h"

using namespace std;

void testCard() {
    vector<CreditCard*> wallet(10);

    wallet[0] = new CreditCard("5391 0375 9387 4483", "John Doe", 2500);
    wallet[1] = new CreditCard("5485 7768 0987 8843", "John Doe", 3500);
    wallet[2] = new CreditCard("6756 8898 0345 7787", "John Doe", 4500);

    for (int j=1; j<=16; j++){
        wallet[0]->chargelt(double(j));
        wallet[1]->chargelt(2*j);
        wallet[2]->chargelt(double(3*j));
    }

    cout << "Card Payments: \n";
    for (int i=0; i<3; i++){
        cout << *wallet[i];
        while(wallet[i]->getBalance() > 100.0){
            wallet[i]->makePayment(100.0);
            cout << "New balance = " << wallet[i]->getBalance() << "\n";
        }
        cout << "\n";
        delete wallet[i];
    }
}

int main() {
    testCard();
    return EXIT_SUCCESS;
}
