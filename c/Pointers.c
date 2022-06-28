#include<stdio.h>
#include<string.h>

int main()
{
    int pup = 19;
    
    // giving us adress of pup variable
    printf("%p \n",&pup);
    
    // Making a pointer for pup
    int * pPup = &pup;

    // Do not use & in printf for a pointer as it is already a adress 
    printf("%p \n",pPup);
    
    // If you use & for pointer you will get adress of pointer
    printf("%p \n",&pPup);

    // Derefreance a pointer
    printf("%d \n",*pPup);
}