#include <iostream>
 
using namespace std;
 
int main()
{
    int size, max = 0;
    cin >> size;
    int array[size];
    
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    
    for (int i = 1; i < size; i++) {
        if (array[i] > array[max])
            max = i;
    }
    
    cout << array[max];
}