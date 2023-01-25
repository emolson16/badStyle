using namespace std;
#include <iostream>

// f is food level
// e is eat
void eatFood(int &f, int e) {
    f +=e;
}
// s is sleep level
// b is go to bed
void sleep(int& s,int b) 
{
    s+=b;
}

int main() {
    int foodLevel = 0;
    int sleepLevel = 0;
    if(foodLevel < 50 && sleepLevel < 80) {
        cout<<"I am tired and hungry" << endl;
        eatFood(foodLevel,30);
        sleep(sleepLevel, 50);
    } else if(foodLevel < 50) {
        cout<<"I am hungry" << endl;
        eatFood(foodLevel, 30);
    } else if(sleepLevel < 80) {
        cout << "I am tired" <<endl;
        sleep(sleepLevel, 50);
    } else {
        cout << "I am happy!" << endl;
    }







    if(foodLevel < 50 && sleepLevel < 80) {
        cout << "I am tired and hungry" << endl;
        eatFood(foodLevel, 30);
        sleep(sleepLevel, 50);
    } else if(foodLevel < 50) {
        cout << "I am hungry" << endl;
        eatFood(foodLevel, 30);
    } else if(sleepLevel < 80) {
        cout << "I am tired" <<endl;
        sleep(sleepLevel, 50);
    } else {
        cout << "I am happy!" << endl;
    }

    
    if(foodLevel < 50 && sleepLevel < 80) {
        cout << "I am tired and hungry" << endl;
        eatFood(foodLevel, 30);
        sleep(sleepLevel, 50);
    } else if(foodLevel < 50) {
        cout << "I am hungry" << endl;
        eatFood(foodLevel, 30);
    } else if(sleepLevel < 80) {
        cout << "I am tired" <<endl;
        sleep(sleepLevel, 50);
    } else {
        cout << "I am happy!" << endl;
    }

}