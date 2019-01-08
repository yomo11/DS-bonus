#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
using namespace std;  
int main(){  
    int n,m,c;  
    while(scanf("%d%d%d",&n,&m,&c)!=EOF){  
        int a[n+5][m+5],t;  
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
        for(int j=0;j<m;j++){  
            for(int i=0;i<n;i++){  
                printf("%d",a[i][j]*c);  
                if(i!=n-1) printf(" ");  
            }  
                printf("\n");  
        }  
    }  
    return 0;  
}
