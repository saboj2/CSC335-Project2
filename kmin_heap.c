/*Jeffrey Sabo, Richard Bustamante, Brendan Behrens
CSC 335
Programming Assignment 2*/

#include <stdio.h>
#include <time.h>

void bubble_down(int* heap, long k, long n);
void delete_root(int* heap);
long n;

int main(int argc, char** argv)
{
    /*Read in from std in*/
    /*get size n from first line*/
    //long n;
    long k;
    //need to read in size and k on same line
    scanf("%ld %ld", &n, &k); 
    int heap[n];

    /*fill up array*/
    long i; 
    for(i = 0; i < n; ++i) {
       scanf("%d", &heap[i]);
       
    }

    /*Bubble Down logic*/
    for(i = n/2; i >= 0; --i) {
        bubble_down(heap, i, n);
    }

    //after heap is constructed, we need to now delete the root and fix the heap k times.
    for(i = 0; i < k-1; ++i) {
        delete_root(heap);
    }

    printf("%d\n", heap[0]);   
    
    return 0;
}


/*Bubble down has two comparisons, parent to both children*/
void bubble_down(int* heap, long k, long n)
{
    int temp;
    long smallest = k;

    /*check for left child and compare*/
    if(2*k+1 < n) {
        if(heap[k] > heap[2*k+1]) {
            smallest = 2*k+1;
        } 
    }
    /*check for right child and compare*/
    if(2*k+2 < n) {
        if(heap[k] > heap[2*k+2] && heap[smallest] > heap[2*k+2] ) {
            smallest = 2*k+2;
        }
    }
    
    /*if current node is not the smallest, swap and recursively call bubble down on swapped node*/
    if(smallest != k){
            temp = heap[k];
            heap[k] = heap[smallest];
            heap[smallest] = temp; 
            bubble_down(heap, smallest, n);
    }
        
    return; 
}

void delete_root(int* heap)
{
    heap[0] = heap[n-1];
    n = n-1;
    bubble_down(heap,0,n);

    return;
}
