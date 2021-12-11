// ----------------------------------------------------------

// a[] and b[] are integer arrays.
// Time Complexity: O(n + m).

for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
}
for (int i = 0; i < m; i++) {
    cout << b[i] << " ";
}

// ----------------------------------------------------------

// 's' is a string. Length of the string = m.
// Time complexity: O(n * m)

for (int i = 0; i < n; i++) {
    cout << s << " ";
}

// ----------------------------------------------------------

// Time complexity: O(n * m)

for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << "hello world!";
    }
}

// ----------------------------------------------------------

for (int i = 0; i < n; i++) {
    for (int j = i + 1; i < n; i++) {
        cout << 10 << endl;
    }
}