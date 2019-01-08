#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
typedef long long lint;  
using namespace std;  
int solve(int n){  
    if(n==0) return 1;  
    return n*solve(n-1);  
}  
int main(){  
    int ncase;  
    scanf("%d",&ncase);  
    while(ncase--){  
        int n;  
        scanf("%d",&n);  
        printf("%d\n",solve(n));  
    }  
    return 0;  
}
