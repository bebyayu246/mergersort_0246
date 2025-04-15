#include <iostream>
using namespace std;

//create main array & temporary array
int arr[20], b[20];
// n is array input size
int n;

void input()
{
    while (true)
    {
        cout << " Masukkan panjang element array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }
    cout << "\n--------------------------" << endl;
    cout << "\nInputkan isi element array" << endl;
    cout << "\n--------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " Array index ke- " << i << " : ";
        cin >> arr[i];
    }
}

//create function mergesort
void mergeSort(int low, int higt)
{
    if (low >= higt) // step 1
    {
        return; // step 1.a
    }

    int mid = (low + higt) / 2; //step 2

    // step 3
    // fungsi rekursi - memanggil diri sendiri
    mergeSort(low, mid);        //step 3.a
    mergeSort(mid + 1, higt);  // step 3.b

    // Step 4
    int i = low;     // Step 4.a
    int j = mid + 1; // Step 4.b
    int k = low;     // Step 4.c


}

