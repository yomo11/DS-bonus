#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
typedef long long lint;  
using namespace std;  
int main(){  
    int n,m,t;  
    while(scanf("%d%d",&n,&m)!=EOF){  
        int a[n+5][m+5];  
        for(int i=0;i<n;i++){  
            for(int j=0;j<m;j++){  
                scanf("%d",&a[i][j]);  
            }  
        }  
        for(int i=0;i<n;i++){  
            for(int j=0;j<m;j++){  
                scanf("%d",&t);  
                a[i][j]+=t;  
            }  
        }  
        for(int i=0;i<n;i++){  
            for(int j=0;j<m;j++){  
                printf("%d",a[i][j]);  
                if(j!=m-1) printf(" ");  
            }  
            printf("\n");  
        }  
    }  
    return 0;  
}
