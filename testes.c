#include <stdio.h>
#include <stdlib.h>


void liberarMemoria ( int **vet){


    free(*vet);
    vet = NULL;
}


int main()
{

    int *vet = malloc(5*sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        vet[i] = 10; 
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", vet[i]);
    }
    
    

    return 0;
}