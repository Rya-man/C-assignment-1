
#include <stdio.h>

int main() {
    
    int n,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s=s+(i*i);
    }
    printf("\n\n\nSum = %d",s);
    return 0;
}
