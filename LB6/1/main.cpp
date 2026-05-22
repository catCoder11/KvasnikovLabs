#include <iostream>
#include "Counter.h"
using namespace std;
int main() {
    Counter counter;
    try {Counter counter(0,10);}
    catch (const exception e) {
        cout << e.what();
    }
    cout << "c: " << counter.getCurrent() << endl;
    counter.decrement();
    cout << "c--: " << counter.getCurrent() << endl;
    for (int i=0; i<11; i++) {
        counter.increment();
        cout << "c++: " << counter.getCurrent() << endl;
    }
    counter.decrement();
    cout << "c--: " <<counter.getCurrent() << endl;
    return 0;
}