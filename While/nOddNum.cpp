#include <iostream>
using namespace std;
int main(){
    int n=100;
    int i=1;
    while(i<=n){
        if(i%2!=0){
            cout<<i<<" ";
            i++;
        }else{
            i++;
        }
    }
    return 0;
}