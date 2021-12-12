#include<bits/stdc++.h>
using namespace std;

/*
Time Complexity: O(n)
Auxiliary space: O(n)
Space complexity: O(n)
*/

int max_subarray_sum(vector<int> arr) {

    int n = arr.size();
    vector<int> max_till_here(n);

    max_till_here[0] = arr[0];
    int result = arr[0];

    for (int i = 1; i < n; i++) {
        max_till_here[i] = max(arr[i], max_till_here[i - 1] + arr[i]);
        result = max(result, max_till_here[i]);
    }

    return result;
}


/*
Time Complexity: O(n)
Auxiliary space: O(1)
Space complexity: O(n)
*/

int max_subarray_sum_space_optimized(vector<int> arr) {

    int n = arr.size();
    int max_till_previous = arr[0];

    int result = arr[0];

    for (int i = 1; i < n; i++) {
        int max_till_here = max(arr[i], max_till_previous + arr[i]);
        result = max(result, max_till_here);
        max_till_previous = max_till_here;
    }

    return result;
}


int main() {

    cout << max_subarray_sum({-1, 2, 3, -6, 7, -8}) << endl;
    cout << max_subarray_sum({1, 2, 3, -1, -2, -1, 5}) << endl;

    cout << max_subarray_sum_space_optimized({-1, 2, 3, -6, 7, -8}) << endl;
    cout << max_subarray_sum_space_optimized({1, 2, 3, -1, -2, -1, 5}) << endl;
}