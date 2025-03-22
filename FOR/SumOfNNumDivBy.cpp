#include <iostream>
using namespace std;
int main()
{
int n=100;
int num=7;
int sum=0;
for (int i=1;i<=n;i++){
    if(i%num==0){
        sum+=i;
        cout<<i<<" ";
    }else{
        cout<<" ";
    }
}
cout<<"\n";
cout<<sum<<"\n";
}
