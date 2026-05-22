#ifndef DC_H 
#define DC_H

class DigitalClock {
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