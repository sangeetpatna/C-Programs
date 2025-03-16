#include <iostream>
using namespace std;
int main (){
    int n;
    bool isPrime=true;
    cout<<"Enter the Number : ";
    cin>>n;
    if(n<=1){
        isPrime=false;
    }else{
        for(int i=2;i<=n-1;i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
    }   
    if (isPrime==true){
        cout<<n<<" is a prime number.";
    }else{
        cout<<n<<" is not a prime number.";
    }
    return 0;
}
// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     bool isPrime = true;
    
//     cout << "Enter a number: ";
//     cin >> num;
    
//     if (num <= 1) {
//         isPrime = false;
//     } else {
//         for (int i = 2; i * i <= num; i++) {
//             if (num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//     }
    
//     if (isPrime)
//         cout << num << " is a prime number.";
//     else
//         cout << num << " is not a prime number.";
    
//     return 0;
// }
