#include <iostream>
 
using namespace std;
 
int main()
{
    int w,h,n,answ,x1,y1,x2,y2;
    
    cin >> w >> h;
    cin >> n;
    
    answ = 0;
    
    int array[w][h];
    for (int i = 0; i < w; i++){
        for (int j = 0; j < h; j++){
            array[i][j] = 0;
        }   
    }
    
    
    for (int i = 0; i < n; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1; x < x2; x++){
            for (int y = y1; y < y2; y++){
                array[x][y] = 1;
            }    
        }
    }
    
    
    for (int x = 0; x < w; x++){
        for (int y = 0; y < h; y++){
            if (array[x][y] == 0){
                answ++;
            }
        }
    }
    
    cout << answ;
}