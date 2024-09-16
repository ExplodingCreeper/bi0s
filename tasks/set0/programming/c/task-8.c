#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc !=2)
    {
        printf("Usage: %s <key>\n", argv[0]);
        return 1;
    }
    int key = atoi(argv[1]);
    int array[10]={3,31,65,7,78,65,34,56,87,28};
    int count=0;
    for (int i=0;i<10;i++){
        if (array[i]==key){
            count+=1;
        }
    }
    printf("The key %d occurs %d time(s) in the array.\n", key, count);
    return 0;
}