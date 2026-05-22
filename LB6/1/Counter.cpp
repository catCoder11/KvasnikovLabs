#include "Counter.h"
#include <iostream>
using namespace std;
Counter::Counter(int minl, int maxl) {
    if (minl > maxl) throw invalid_argument("min>max");
    count = minl;
    min_limit = minl;
    max_limit = maxl;
}

Counter::Counter() {
    count = 0;
    min_limit = 0;
    max_limit = 0;
}
void Counter::increment() {
    if (count != max_limit) count++;
}

void Counter::decrement() {
    if (count != min_limit) count--;
}

int Counter::getCurrent() {
    return count;
}

