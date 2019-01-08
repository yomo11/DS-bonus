#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
typedef long long lint;  
using namespace std;  
int main(){  
    int a[5];  
    int n=3;  
    for(int i=0;i<n;i++) scanf("%d",&a[i]);  
    sort(a,a+n);  
    if(a[0]+a[1]>a[2]){  
        if(a[0]*a[0]+a[1]*a[1]>a[2]*a[2]) printf("acute\n");  
        else if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]) printf("right\n");  
        else if(a[0]*a[0]+a[1]*a[1]<a[2]*a[2]) printf("obtuse\n");  
    }  
    else{  
        printf("invalid\n");  
    }  
    return 0;  
}
