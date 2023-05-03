#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double salary;
        cin >> salary;
        
        double hra, da;
        if (salary < 1500) {
            hra = 0.1 * salary;
            da = 0.9 * salary;
        }
        else {
            hra = 500;
            da = 0.98 * salary;
        }
        
        double gross_salary = salary + hra + da;
        cout << fixed << setprecision(2) << gross_salary << endl;
    }
    
    return 0;
}