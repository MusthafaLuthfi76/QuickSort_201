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
