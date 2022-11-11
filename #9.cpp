#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string a,b,c;
    double n,lis[10];
    int i = 0,s = 1;
    cin >> a >> b >> c;
    ifstream file1(a);
    ifstream file2(b);
    ofstream file3(c);
    
    
    if (file1.is_open()){
        while (file1 >> n){
            if (n > 0){
                lis[i] = n;
                i++;  
            }
            if (i == 10){
                i = 0;
                for (int e = 0; e < 10; e++){
                    file3 << lis[e]<<" ";
                }
                file3 << "строка №" << s << "\n" ; // как сделать иначе я не разобрался, не знаю где взять словарь порядковых
                s++;
            }
        }
    }
    
    
    if (file2.is_open()){
        while (file2 >> n){
            if (n > 0){
                lis[i] = n;
                i++;  
            }
            if (i == 10){
                i = 0;
                for (int e = 0; e < 10; e++){
                    file3 << lis[e]<<" ";
                }
                file3 << "строка №" << s << "\n" ; // как сделать иначе я не разобрался, не знаю где взять словарь порядковых
                s ++;
            }
        }
        for (int e = 0; e < i; e++){
                    file3 << lis[e]<<" ";
                }
    }
    
}