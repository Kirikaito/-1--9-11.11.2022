#include <iostream>
using namespace std;

int main() 
{
    char x; int c=0; 
    while ( cin >> x ) 
        if (x=='1') {
            cout << (char)(97+c); 
            c=0;
        }else 
          c++;
}