#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
typedef long long lint;  
using namespace std;  
int main(){  
    int n,m;  
    while(scanf("%d%d",&n,&m)!=EOF){  
        int t=m;  
        int ans=0;  
        while(t>0){  
            if(t%100==n) ans++;  
            t/=100;  
        }  
        t=m/10;  
        while(t>0){  
            if(t%100==n) ans++;  
            t/=100;  
        }  
        printf("%d\n",ans);  
    }  
    return 0;  
}
