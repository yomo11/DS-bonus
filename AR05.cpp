#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
//#include<bits/stdc++.h>  
using namespace std;  
int main(){  
    int ncase,n,t,N;  
    while(scanf("%d",&ncase)!=EOF){  
        while(ncase--){  
            int a[15];  
            int i=0;  
            while(scanf("%d",&t)&&t!=-1){  
                a[i++]=t;  
            }  
            n=i;  
            scanf("%d",&N);  
            sort(a,a+n);  
            int ans=0;  
            do{  
                int num=0;  
                for(i=0;i<n;i++){  
                    num=num*10+a[i];  
                }  
                //printf("num=%d\n",num);  
                if(num%N==0) ans++;  
            }while(next_permutation(a,a+n));  
            printf("%d\n",ans);  
        }  
    }  
  
  
  
    return 0;  
} 
