#include <iostream>
 
using namespace std;
 
int main()
{
    int w = 4,h = 4,answ;
    char m,n;
    
    char arr[w][h];
    
    answ = 0;
    
    for (int i = 0; i < h; i++){
        cin >> arr[i];
    }

    
    for (int x = 0; x < w - 1; x++){
        for (int y = 0; y < h - 1; y++){
            if (arr[x][y] == arr[x + 1][y] == arr[x][y + 1] == arr[x + 1][y + 1]){
                answ++;
            }
        }
    }
    if (answ == 0){
        cout <<  "yes";
    }else{
        cout <<  "no";
    }
}