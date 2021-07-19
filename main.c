#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a, b, c;
    int ara[10];
    scanf("%d", &n);
    int count = 0;
    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &a, &b, &c);
        if(a && b || b && c || a && c){
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
