
using namespace std;

void mergeArrays(int arr1[], int arr2[], int arr3[])
{
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int i = 0, j = 0, k = 0;
    // traverse the arr1 and insert its element in arr3
    while (i < n1) {
        arr3[k++] = arr1[i++];
    }

    // now traverse arr2 and insert in arr3
    while (j < n2) {
        arr3[k++] = arr2[j++];
    }

    // sort the whole array arr3
    sort(arr3, arr3 + n1 + n2);
}