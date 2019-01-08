#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
typedef long long lint;  
using namespace std;  
int main(){  
    int n;  
    while(scanf("%d",&n)!=EOF){  
        while(n%2==0) n/=2;  
        while(n%3==0) n/=3;  
        while(n%5==0) n/=5;  
        if(n==1) printf("Regular number!\n");  
        else printf("Irregular number!\n");  
    }  
    return 0;  
}
