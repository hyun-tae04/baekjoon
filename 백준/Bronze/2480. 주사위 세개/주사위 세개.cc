#include<iostream>
using namespace std;
int main(){
    int a[10], max=-999;
    
    for(int i=0; i<3; i++){
        cin >> a[i];
        if(a[i]>max){
            max = a[i];
        }
    }
    if(a[0] == a[1] and a[1] == a[2] and a[0] == a[2]){
        cout << 10000+(a[0]*1000);
    }
    else if(a[0] == a[1] or a[1] == a[2] or a[0] == a[2]){
        if(a[0]==a[1]){
            cout << 1000+(a[0]*100);
        }
        else if(a[1]==a[2]){
            cout << 1000+(a[1]*100);
        }
        else{
            cout << 1000+(a[2]*100);
        }
    }
    else{
        cout << max*100;
    }
    return 0;
}