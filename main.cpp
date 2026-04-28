#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void printArray(char arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insertionSort(char arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        char key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;

        cout << "Крок " << i << ": ";
        printArray(arr, size);
    }
}

int main()
{
    setlocale(LC_ALL, "ukr");
    srand(time(0));

    int size = 15;
    char* arr = new char[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = 33 + rand() % 94; 
    }

    cout << "Початковий масив: ";
    printArray(arr, size);

    insertionSort(arr, size);

    cout << "Відсортований масив: ";
    printArray(arr, size);

    delete[] arr;
    return 0;
}
