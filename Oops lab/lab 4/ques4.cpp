#include <iostream>
using namespace std;

class Fibonacci {
private:
    int n;
    long long t1;
    long long t2;

public:
    Fibonacci() {
        n = 0;
        t1 = 0;
        t2 = 1;
    }

    void getInput() {
        cin >> n;
    }

    void generateSeries() {
        long long n1 = t1;
        long long n2 = t2;
        long long nextTerm;

        for (int i = 1; i <= n; ++i) {
            cout << n1 << " ";
            nextTerm = n1 + n2;
            n1 = n2;
            n2 = nextTerm;
        }
        cout << endl;
    }
};

int main() {
    Fibonacci fib;
    
    cout << "Enter the number of terms: ";
    fib.getInput();
    
    cout << "Fibonacci Series: ";
    fib.generateSeries();
    
    return 0;
}