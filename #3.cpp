#include <iostream>
 
using namespace std;
 
int main()
{
    int w,h,answ;
    char m,n;
    cin >> h >> w;
    
    char arr[w][h];
    char neg[w][h];
    
    answ = 0;
    
    for (int i = 0; i < h; i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i < h; i++){
        cin >> neg[i];
    }
    
    for (int x = 0; x < w; x++){
        for (int y = 0; y < h; y++){
            if (arr[x][y] == neg[x][y]){
                answ++;
            }
        }
    }
    
    cout << answ;
}