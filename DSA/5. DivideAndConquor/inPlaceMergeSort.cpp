#include <iostream>
#include <vector>
using namespace std;

void inPlace(vector<int> &arr, int start, int mid, int end)
{
    int vecSize = (end - start + 1);
    int gap = vecSize / 2 + vecSize % 2;
    while (gap > 0)
    {
        int i = start, j = start + gap;
        while (j <= end)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
            i++;
            j++;
        }
        gap = gap <= 1 ? 0 : gap / 2 + gap % 2;
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        inPlace(arr, start, mid, end);
    }
}

int main()
{
    vector<int> arr{5, 1, 1, 2, 0, 0};
    mergeSort(arr, 0, arr.size() - 1);
    for (auto it : arr)
        cout << it << " ";
}