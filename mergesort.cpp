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

    while (i <= mid && j <= high) // step 4.d
     { 
        if (arr[i] <= arr[j]) // step 4.d.i
        { 
            B[k] = arr[i]; 
            i++; 
        } 
        else 
        { 
            B[k] = arr[j]; 
            j++; 
        } 
        k++; // step 4.d.ii
    }

    while (j <= high) // Step 4.e
    {
        B[k] = arr[j]; //step 4.e.i
        j++;           //step 4.e.ii
        k = k + 1;     //step 4.e.iii
    }

    while (i <= mid) // Step 4.f
    {
        B[k] = arr[i]; // step 4.f.i
        i++;           // step 4.f.ii  
        k++;           // step 4.f.iii
    }

    // step 5
    for (int x = low; x <= higt; x++)
    {
        arr[x] = b[x];
    }
}

void output()
{
    cout << "\nData setelah diurutkan (Merge Sort): ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    input();
    mergeSort(0, n - 1);
    output();
}


