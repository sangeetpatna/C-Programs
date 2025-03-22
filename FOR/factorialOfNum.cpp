#include <iostream>
using namespace std;
int main(){
    int num=8;
    int fact=1;
    for(int i=1;i<=num;i++){
        if(num<=0){
            cout<<"Entered non positive number.";
        }else{
            cout<<fact<<"*"<<i<<"=";
        fact=fact*i;
    }
    cout<<fact<<"\n";
}
cout<<"\n"<<fact;   
}