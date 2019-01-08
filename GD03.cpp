#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
typedef long long lint;  
using namespace std;  
int main(){  
    int n;  
    scanf("%d",&n);  
    int sum=0;  
    int a[n+5];  
    for(int i=0;i<n;i++){  
        scanf("%d",&a[i]);  
    }  
    sort(a,a+n);  
    for(int i=0;i<n;i++){  
        sum+=(i*2+1)*a[n-1-i];  
    }  
    printf("%d\n",sum);  
    return 0;  
}
