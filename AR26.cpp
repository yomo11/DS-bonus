#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
using namespace std;  
int main(){  
    int n,m;  
    while(scanf("%d%d",&n,&m)!=EOF){  
        int t,cnt=0;  
        for(int i=0;i<n;i++){  
            for(int j=0;j<m;j++) {  
                scanf("%d",&t);  
                (t==0)?cnt++:cnt--;  
            }  
        }  
        printf("%d\n",(cnt==0)?2:(cnt>0)?0:1);  
    }  
  
  
  
    return 0;  
}
