#include <iostream>
#include <vector>
using namespace std;

long merge(vector<int> &arr, vector<int> &temp, int start, int mid, int end)
{
    long c = 0;
    int i = start, j = mid + 1, k = start;
    while (i <= mid and j <= end)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else{
            temp[k++] = arr[j++];
            c += mid-i+1;
        }

    }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= end)
        temp[k++] = arr[j++];

    while (start <= end)
    {
        arr[start] = temp[start];
        start++;
    }
    return c;
}

long mergeSort(vector<int> &arr, vector<int> &temp, int l, int r)
{
    if (l >= r)
        return 0;
    int mid = l + (r - l) / 2;
    long c = 0;

    c += mergeSort(arr, temp, l, mid);
    c +=mergeSort(arr, temp, mid + 1, r);
    c += merge(arr, temp, l, mid, r);
    return c;
}

int main()
{
    vector<int> arr{2, 4, 1, 3, 5};
    vector<int> temp(arr.size(), 0);
    // int n = 5;
    long count = 0;

    count = mergeSort(arr, temp, 0, arr.size() - 1);
    cout<<count;
    // for (auto it : arr)
    //     cout << it << " ";
}