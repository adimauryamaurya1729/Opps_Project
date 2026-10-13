#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    friend Time addTime(Time t1, Time t2);

    void display() {
        cout << hours << "h " << minutes << "m" << endl;
    }
};

Time addTime(Time t1, Time t2) {
    Time temp;
    temp.minutes = t1.minutes + t2.minutes;
    temp.hours = t1.hours + t2.hours + (temp.minutes / 60);
    temp.minutes = temp.minutes % 60;
    return temp;
}

int main() {
    Time t1(4, 45);
    Time t2(3, 30);
    
    Time totalTime = addTime(t1, t2);
    
    cout << "First Time: ";
    t1.display();
    
    cout << "Second Time: ";
    t2.display();
    
    cout << "Total Time: ";
    totalTime.display();
    
    return 0;
}