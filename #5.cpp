#include <iostream>
 
using namespace std;
 
int main()
{
    int w,h,answ;
    
    cin >> h >> w;
    
    char arr[w][h];
    int able[w][h];
    
    answ = 0;
    
    for (int i = 0; i < h; i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i < h; i++){
        for (int e = 0; e < w; e++){
            cin >> able[i][e];
        }
    }

    
    for (int x = 0; x < w; x++){
        for (int y = 0; y < h; y++){
            if ((able[x][y] == 0) and (arr[x][y] != '.')){
                answ++;
            }
            if ((able[x][y] == 1) and (arr[x][y] != 'B' or arr[x][y] != '.')){
                answ++;
            }
            if ((able[x][y] == 2) and (arr[x][y] != 'G' or arr[x][y] != '.')){
                answ++;
            }
            if ((able[x][y] == 3) and (arr[x][y] == 'R')){
                answ++;
            }
            if ((able[x][y] == 4) and (arr[x][y] != 'R' or arr[x][y] != '.')){
                answ++;
            }
            if ((able[x][y] == 5) and (arr[x][y] == 'G')){
                answ++;
            }
            if ((able[x][y] == 6) and (arr[x][y] == 'B')){
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