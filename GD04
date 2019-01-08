#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
typedef long long lint;  
using namespace std;  
struct job{  
    int t,d;  
};  
bool cmp(job a,job b){  
    if(a.d==b.d) return a.t<b.t;  
    return a.d<b.d;  
}  
int main(){  
    int ncase;  
    scanf("%d",&ncase);  
    while(ncase--){  
        int n;  
        scanf("%d",&n);  
        job a[n+5];  
        for(int i=0;i<n;i++){  
            scanf("%d",&a[i].t);  
        }  
        for(int i=0;i<n;i++){  
            scanf("%d",&a[i].d);  
        }  
        sort(a,a+n,cmp);  
        int sum=0;  
        int i;  
        for(i=0;i<n;i++){  
            sum+=a[i].t;  
            if(sum>a[i].d){  
                printf("No\n");  
                break;  
            }  
        }  
        if(i==n) printf("Yes\n");  
    }  
    return 0;  
}
