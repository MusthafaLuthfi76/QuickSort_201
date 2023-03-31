#include <iostream>
using namespace std;

//Array of integers to hold values
int arr[20];
int cmp_count = 0;  // Number of comparison
int mov_count = 0;  // Number of movement
int n;
void input() {
    while (true)
    {
        cout << "Masukkan panjang elemen array :";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\n Maksimum Panjang array adalah 20" << endl;
    }

    cout << "\n====================" << endl;
    cout << "\nEnter array elemen" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">":
        cin >> arr[i];
    }
}

// swap the elemen at index x with the elemen at index y
void swap(int x, int y)
{
    int temp;
    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void q_short(int low, int high)
{
    int pivot, i, j;
    if (low > high)     // Langkah 1
        return;

    //Partition the list into two parts
    //One containing elemen less than that or equal to pivot
    //Outher containing elemen greater than pivot
    pivot = arr[low];     // Langkah 2
    i = low + 1;         // Langkah 3
    j = high;            // Langkah 4

    while (i <= j)   // Langkah 10
    {
        //Search for elemen greater than pivot
        while ((arr[i] <= pivot) && (i <= high))    // Langkah 5
        {
            i++;                                    // Langkah 6
            cmp_count++;
        }
        cmp_count++;
        //Search for an elemen less than or equal to pivot
        while ((arr[j] > pivot) && (j >= low))      //Langkah 7
            j--;                                    //Langkah 8
        cmp_count++;
    }
    cmp_count++;
    if (i < j)                                       //Langkah 9
        // If greater element is on left of the element
    {
        //Swap the element at index i with the element at index j
        swap(i, j);
        mov_count++;
    }   

}

//j now containt the index of the last element in the sort list
if (low < j)                                     //Langkah 11
    //Move the pivot to its correct position in the list
    {
    swap(low, j);
    mov_count++;
    }
int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
