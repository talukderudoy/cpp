#include <iostream>
using namespace std;

// Function to check if a is divisible by b
bool is_divisible(long long a, int b) {
    if (a % b == 0)
        return true;
    else
        return false;
}

int main() {
    int T;
    cin >> T; // Input the number of test cases

    for (int case_num = 1; case_num <= T; ++case_num) {
        long long a;
        int b;
        cin >> a >> b; // Input integers a and b for each test case

        // Check if a is divisible by b and print the result
        if (is_divisible(a, b))
            cout << "Case " << case_num << ": divisible" << endl;
        else
            cout << "Case " << case_num << ": not divisible" << endl;
    }
    return 0;
}

