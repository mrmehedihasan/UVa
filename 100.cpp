#include <iostream>

using namespace std;

int CycleLength(int n){

    int count = 0;
    while(n!=1){
        if(n%2==0){
            n/=2;
            count++;
        }else{
            n = 3*n+1;
            count++;
        }
    }
    return count;
}

int main() {
    int m = 0;
    int a,b;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        int temp = CycleLength(i);
        if(temp>=m){
            m = temp;
        }
    }
    cout << a << " "<< b << " " << m+1 << endl;
    return 0;

}
