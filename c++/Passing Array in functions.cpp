#include<iostream>
using namespace std;

void printArray(int theArray[], int sizeofArray);

int main()
{
  int klassy[5]={1,2,3,4,5};
  int codedamn[4]={6,7,8,9};
  printArray(klassy,5);
}

void printArray(int theArray[], int sizeofArray){
    for(int z=0;z<sizeofArray;z++){
        cout << theArray[z]<<endl;
    }
}