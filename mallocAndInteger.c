#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{

    int len = 0;

    printf("  -- Create array dinamically -- \n\n");

    printf("  -- Please enter length of array: ");

    scanf("%d", &len);

    int *array = (int *)malloc(len * sizeof(int));

    memset(array, 0, len*sizeof(int));

    for (int i = 0; i < len; i++)
    {
        printf("  Please enter number No%d: ", i+1);

        scanf("%d", &array[i]);
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d | ", array[i]);
    }

    free(array);
}
