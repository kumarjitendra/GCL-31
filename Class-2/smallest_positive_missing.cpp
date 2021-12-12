#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
// Auxiliary Space: O(1)
// Space Complexity: O(n)

int smallest_positive_missing(vector<int> arr) {

    int n = arr.size();

    // Update the unwanted negatives and zeros with (n + 1).
    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0) {
            arr[i] = n + 1;
        }
    }

    // Update the buckets if a valid element (ie, [1, n]) is found.
    for (int i = 0; i < n; i++) {
        // Bucket for abs(arr[i]) => index [(abs(arr[i])) - 1]
        if (abs(arr[i]) >= 1 and abs(arr[i]) <= n and arr[abs(arr[i]) - 1] > 0) {
            arr[abs(arr[i]) - 1] *= -1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            return i + 1;
        }
    }

    return n + 1;
}

int main() {

    cout << smallest_positive_missing({1, 2, 3, 4, 5}) << endl;
    cout << smallest_positive_missing({0, -10, 1, 3, -20}) << endl;
}