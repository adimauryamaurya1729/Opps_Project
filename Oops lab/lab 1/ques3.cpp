#include <iostream>
using namespace std;

class NumberSeries {
private:
    
    int n;
    long long sum; 
public:
    NumberSeries() {
        sum = 0;
    }

    void inputLimit() {
        cout << "Enter a positive integer (n): ";
        cin >> n;
    }
    void calculateSum() {
        sum = 0; 
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        
    }

    void displayResult() {
        cout << "The sum of all numbers from 1 to " << n << " is: " << sum << endl;
    }
};

int main() {
    NumberSeries series;

    series.inputLimit();
    series.calculateSum();
    series.displayResult();

    return 0;
}