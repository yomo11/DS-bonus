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
        int t,now=0;  
        lint ans=0;  
        for(int i=0;i<n;i++){  
            scanf("%d",&t);  
            ans+=min(abs(t-now),min(t-now+10,now+10-t));  
            now=t;  
        }  
        printf("Minimal summation of swinging degrees is %d\n",ans*36);  
    }  
    return 0;  
}
