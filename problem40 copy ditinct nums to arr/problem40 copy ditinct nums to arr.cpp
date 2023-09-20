#include <iostream>
#include <cstdlib>
using namespace std;



void fillArrWithNumbers(int arr[100], int& length)
{
    cout << "How Many Elements of Array?\n";
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        cout << "Enter element ["<<i+1<<"] ";
        cin >> arr[i];
    }
}

void addElementArray(int arr[100], int& length, int num)
{
    length++;
    arr[length - 1] = num;
}

void copyDistinctNumbersToNewArr(int arr1[100], int arr2[100], int length1, int& length2)
{
    for (int i = 0; i < length1; i++)
    {
        if(arr1[i] != arr1[i+1])
        addElementArray(arr2, length2, arr1[i]);
    }
}

void printArray(int arr[100], int length)
{
    cout << "Array Elements: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n ";
}



int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arr2[100], length, length2 = 0;

    fillArrWithNumbers(arr, length);
    printArray(arr, length);

    copyDistinctNumbersToNewArr(arr, arr2, length, length2);
    printArray(arr2, length2);



    return main();

}