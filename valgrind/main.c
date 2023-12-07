//valgrind --leak-check=full ./main
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void no_freeing(void)
{
    int* arr = malloc(10 * sizeof(int));
    free(arr);
}                    

void after_free_memory(void)
{
    char *p = malloc(1);
    *p = 'a'; 

    char c = *p; 

    printf("\n [%c]\n",c); 

    free(p);
    c = *p;
}

void simple_double_free(){
    int *p = (int*) malloc(sizeof(int));

   free(p);
   free(p);
}

int read_end_malloc_block(void)
{
    // Allocate memory for an integer array of size 2
    int* arr = (int*)malloc(2 * sizeof(int));

    // Write values to the allocated memory
    for (int i = 0; i < 2; i++) {
        arr[i] = i;
    }

    // Attempt to read beyond the allocated memory
    printf("%d ", arr[5]);

    // Free the allocated memory
    free(arr);

    return 0;
}

void access_out_of_bounds(){
    int p[4] = {1,2,3,4};

    printf("%d\n", p[10]);
}


int main(void)
{
    access_out_of_bounds();
    return 0;
}