#include <iostream>
using namespace std;
int main() {
    int marks;
    cout<<"Enter the marks scored : ";
    cin>>marks;
    if (marks>=90){
        cout<<"You got grade 'A'.";
    }else if(marks>=75 && marks<90){
        cout<<"You got grade 'B'.";
    }else {
        cout<<"You got grade 'C'.";
    }
    return 0;
}