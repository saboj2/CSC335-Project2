#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_ARR_LENGTH 100000

int main(int argc, char** argv)
{
    FILE* fp;
    int i;
    int generated_set[MAX_ARR_LENGTH];
    
    for(i = 0; i < MAX_ARR_LENGTH; ++i) {
        generated_set[i] = rand() % 100000;
    }
    
    fp = fopen("input_10.txt", "wt");
    fprintf(fp, "%d %d\n", MAX_ARR_LENGTH, 10);
    for(i = 0; i< MAX_ARR_LENGTH; ++i) {
        fprintf(fp, "%d\n", generated_set[i]);
    }
    fclose(fp);
    
    fp = fopen("input_100.txt", "wt");
    fprintf(fp, "%d %d\n", MAX_ARR_LENGTH, 100);
    for(i = 0; i< MAX_ARR_LENGTH; ++i) {
        fprintf(fp, "%d\n", generated_set[i]);
    }
    fclose(fp);
    
    fp = fopen("input_1000.txt", "wt");
    fprintf(fp, "%d %d\n", MAX_ARR_LENGTH, 1000);
    for(i = 0; i< MAX_ARR_LENGTH; ++i) {
        fprintf(fp, "%d\n", generated_set[i]);
    }
    fclose(fp);
    
    fp = fopen("input_10000.txt", "wt");
    fprintf(fp, "%d %d\n", MAX_ARR_LENGTH, 10000);
    for(i = 0; i< MAX_ARR_LENGTH; ++i) {
        fprintf(fp, "%d\n", generated_set[i]);
    }
    fclose(fp);
    
    fp = fopen("input_100000.txt", "wt");
    fprintf(fp, "%d %d\n", MAX_ARR_LENGTH, 100000);
    for(i = 0; i< MAX_ARR_LENGTH; ++i) {
        fprintf(fp, "%d\n", generated_set[i]);
    }
    fclose(fp);
    
    return 0;
}
