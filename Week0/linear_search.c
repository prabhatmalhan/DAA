#include<stdio.h>

int linearSearch(int arr[],int l,int key){
    int no_of_comparison=0,isFound=0;
    for(int i=0;i<l;++i){
        no_of_comparison++;
        if(arr[i]==key){
            isFound=1;
            break;
        }
    }
    printf("No. of comparisons : %d\n",no_of_comparison);
    return isFound;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0 ; i<n ; ++i){
        int l;
        scanf("%d",&l);
        int arr[l];
        for(int i=0 ; i<l ; ++i)
            scanf("%d",&arr[i]);
        int k;
        scanf("%d",&k);
        if(linearSearch(arr,l,k))
            printf("Found");
        else
            printf("Not Found");
        printf("\n");
    }
}