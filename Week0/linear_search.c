#include<stdio.h>

int linearSearch(int arr[]int l,int key){
    int no_of_comparison=0,isFound=0;
    for(int i=0;i<l;++i){
        no_of_comparison++;
        if(arr[i]==key){
            isFound=1;
            break;
        }
    }
    printf("No. of comparisons : %d",no_of_comparison);
    return isFound;
}