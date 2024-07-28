#include <bits/stdc++.h>
using namespace std;

int countKdivPairs(int arr[], int n, int k) {
    int freq[k] = {0};
    for (int i = 0; i < n; i++)
        ++freq[arr[i] % k];

    int sum = freq[0] * (freq[0] - 1) / 2; // Pairs with remainder 0
    for (int i = 1; i <= k / 2 && i != (k - i); i++)
        sum += freq[i] * freq[k - i];

    if (k % 2 == 0)
        sum += (freq[k / 2] * (freq[k / 2] - 1)) / 2;

    return sum % 1000000007;
}

int main() {
    int A[] = {1,2,3,2,1};
    int n = sizeof(A) / sizeof(A[0]);
    int K = 3;
    cout << countKdivPairs(A, n, K);
}