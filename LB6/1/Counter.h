#ifndef COUNTER_H 
#define COUNTER_H

class Counter {
    private:
    int count, min_limit, max_limit;
    public:
    Counter(int minl, int maxl);
    Counter();
    void increment();
    void decrement();
    int getCurrent();
};

#endif