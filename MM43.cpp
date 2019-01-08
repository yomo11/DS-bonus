#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
typedef long long lint;  
using namespace std;  
int gcd(int a,int b){  
    if(b==0) return a;  
    return gcd(b,a%b);  
}  
int main(){  
    int a,b,c;  
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){  
        int n=gcd(gcd(a,b),c);  
        printf("Common factor in ascending order:\n");  
        for(int i=2;i<n;i++){  
            if(n%i==0){  
                printf("%d ",i);  
            }  
        }  
        printf("%d\n",n);  
    }  
    return 0;  
}
