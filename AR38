#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
using namespace std;  
int main(){  
    int ncase;  
    scanf("%d",&ncase);  
    while(ncase--){  
        int n,m,k;  
        scanf("%d%d%d",&n,&m,&k);  
        int a[1005],t;  
        memset(a,0,sizeof(a));  
        for(int i=0;i<n;i++){  
            scanf("%d",&t);  
            a[t]++;  
        }  
        int ans=0;  
        for(int i=1;i<=k/2;i++){  
            if(i==k-i) ans+=a[i]/2;  
            else ans+=min(a[i],a[k-i]);  
        }  
        printf("%d\n",ans);  
    }  
    return 0;  
}
