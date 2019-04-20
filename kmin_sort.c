#include <stdio.h>
#include <stdlib.h>

int comparator(const void* p, const void* q)
{
    if(*(int*) p < *(int*)q) {
        return -1;
    }
    else if (*(int*) p > *(int*) q) {
        return 1;
    }
    else {
        return 0;
    }
}

int main(int argc, char** argv) 
{
    /*Read in from std in*/
    /*get size n and requested element k from first line*/
    long n;
    long k;
    scanf("%ld %ld", &n, &k); 
    int arr[n];
    
    /*fill up array*/
    long i; 
    for(i = 0; i < n; ++i) {
       scanf("%d", &arr[i]);
    }
    /*
    printf("Size: %ld\nSearching for %ldth smallest element.\n", n, k);
    printf("Unsorted Array:\n");
    for(i = 0; i < n; ++i) {
        printf("%d\n", arr[i]);
    }*/
    
    //sort values
    qsort(arr, n, sizeof(int), comparator);
    
    //read the kth smallest element,
    //in a sorted array this should just be the k-1th element in the array
    //print it to stdout
    /*
    printf("Sorted Array:\n");
    for(i = 0; i < n; ++i) {
        printf("%d\n", arr[i]);
    }*/
    
    printf("%d\n", arr[k-1]);
    return 0;
}
