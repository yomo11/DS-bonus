#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
typedef long long lint;  
using namespace std;  
int main(){  
    int a,b;  
    int sum=0;  
    for(int i=0;i<3;i++){  
        scanf("%d%d",&a,&b);  
        sum+=a*b;  
    }  
    printf("%d\n",sum);  
    return 0;  
}
