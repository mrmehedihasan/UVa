#include <iostream>
#include <cstdio>
using namespace std;

int nCr(int n, int r){
    if(n==r || r==0){
        return 1;
    }else if(r==1){
        return n;
    }else{
        return nCr(n-1,r-1)+nCr(n-1, r);
    }
}

int main(){
    
    
    int a,b;
    while(scanf("%d %d", &a, &b)){
        if(a==0 && b==0){
            break;
        }
        printf("%d things taken %d at a time is %d exactly.\n", a,b,nCr(a,b));
    }
    return 0;
}
