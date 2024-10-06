#include <stdio.h>
int main()
{
    /* new pattten program*/
    char arr[]={'w','e','l','c','o','m','e','t','o','z','o','h','o','c','o','r','p','o','r','a','t','i','o','n','s'};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=0,k=n-1;
    for(i;i<n;i++){
        for(j;j<n;j++){
            if(j==i){
                printf("%c ",arr[i]);
            }
            else if(j==n-1-i){
                printf("%c ",arr[j]);
            }
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}