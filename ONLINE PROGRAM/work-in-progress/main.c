#include <stdio.h>
#include <stdlib.h>
 int main()
{
    int *ptrc,*ptrm;
    int n,m, i;
    printf("\nEnter number of elements for calloc:");
    scanf("%d",&n);
    ptrc = (int*)calloc(n, sizeof(int));
    printf("\nEnter number of elements for malloc");
    scanf("%d",&m);
    ptrm=(int*)malloc(n*sizeof(int));
    if (ptrc == NULL||ptrm==NULL) {
        printf("\nMemory not allocated.\n");
        exit(0);
    }
    else {
        printf("\nMemory successfully allocated using calloc.\n");
      for (i = 0; i < n; ++i) {
            ptrc[i] = i + 1;
        }
        printf("\nMemory successfully allocated using malloc.\n");
      for (i = 0; i < m; ++i) {
            ptrm[i] = i + 1;
      }
        printf("\nThe elements of the array are calloc: ");
        for (i = 0; i < n; ++i){
            printf("%d, ", ptrc[i]);
        }
                printf("\nThe elements of the array are malloc: ");
        for (i = 0; i < m; ++i){
             printf("%d\t", ptrm[i]);
        }
        
            printf("%d\t ", ptrc[i]);
        }
         printf("\n\nEnter the new size of the array calloc:");
         scanf("%d",&n);
         printf("\n\nEnter the new size of the array malloc:");
         scanf("%d",&m);
       ptrc= realloc(ptrc, n * sizeof(int));
       ptrm = realloc(ptrm,m*sizeof(int));
         printf("\nMemory successfully re-allocated using realloc .\n");
        for (i = 0; i < n; ++i) {
            ptrc[i] = i + 1;
        }
        printf("\nThe elements of the array are calloc: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptrc[i]);
        }
        printf("\nMemory successfully re-allocated using realloc.\n");
        for (i = 0; i < m; ++i) {
            ptrm[i] = i + 1;
        }
        printf("\nThe elements of the array are malloc: ");
        for (i = 0; i < m; ++i) {
            printf("%d, ", ptrm[i]);
        } 
        free(ptrc);
        free(ptrm);
     
    return 0;
}
