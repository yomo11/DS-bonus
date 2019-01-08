#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
typedef long long lint;  
using namespace std;  
int main(){  
    int ncase;  
    scanf("%d",&ncase);  
    while(ncase--){  
        int n,m;  
        scanf("%d%d",&n,&m);  
        int a[n+5],b[m+5];  
        for(int i=0;i<n;i++) scanf("%d",&a[i]);  
        for(int i=0;i<m;i++) scanf("%d",&b[i]);  
        sort(a,a+n);  
        sort(b,b+m);  
        int i,j,sum=0;  
        for(i=0,j=0;i<n,j<m;){  
            if(i>=n) break;  
            if(b[j]>=a[i]){  
                sum+=b[j];  
                i++,j++;  
            }  
            else if(b[j]<a[i]){  
                j++;  
            }  
        }  
        if(i==n) printf("%d\n",sum);  
        else printf("-1\n");  
    }  
    return 0;  
}
