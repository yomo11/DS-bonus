#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
using namespace std;  
int main(){  
    int n;  
    while(scanf("%d",&n)!=EOF){  
        int a[n+5];  
        for(int i=0;i<n;i++) scanf("%d",&a[i]);  
        int ans=0;  
        for(int i=0;i<n;i++){  
            for(int j=i+1;j<n;j++){  
                if(a[i]>2*a[j]) ans++;  
            }  
        }  
        printf("%d\n",ans);  
    }  
  
  
  
    return 0;  
}
