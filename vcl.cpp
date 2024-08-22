#include <iostream>
#include <vector>

using namespace std;

// Function to check if a progressive square can be constructed
string can_construct_progressive_square(int n, int c, int d, const vector<int>& b) {
    // Iterate through all possible starting values of the progressive square
    for (int a11 = 1; a11 <= 1000; ++a11) {
        // Initialize a variable to store the current value in the progression
        int current_value = a11;
        // Initialize a flag to track if all elements match
        bool all_match = true;

        // Iterate through each element of the array b
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                // Calculate the expected value based on the current position and progression rules
                int expected_value = current_value + c * j + d * i;

                // If the expected value doesn't match the corresponding element of b, set the flag to false
                if (expected_value != b[i * n + j]) {
                    all_match = false;
                    break;
                }

                // Update the current value for the next iteration
                current_value += c;
            }
            if (!all_match) break;
        }

        // If all elements match, return "YES"
        if (all_match) return "YES";
    }

    // If no matching progressive square is found, return "NO"
    return "NO";
}

int main() {
    int t;
	freopen("test.inp", "r", stdin);
    cin >> t; // Read the number of test cases

    // Iterate through each test case
    while (t--) {
        int n, c, d;
        cin >> n >> c >> d; // Read inputs
        vector<int> b(n * n);
        for (int i = 0; i < n * n; ++i) {
            cin >> b[i];
        }

        // Check if a progressive square can be constructed
        string result = can_construct_progressive_square(n, c, d, b);
        // Output the result
        cout << result << endl;
    }

    return 0;
}
