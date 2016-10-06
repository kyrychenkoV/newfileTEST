#include <stdio.h>
#include <stdio.h>
#include "funkc.h"
#include "funkc.c"
int  scanInFileToArray(int arr[]);
int count;
int main()
{
    char *teststring="10 20 13 40 50";
    int arr[count];
    int sum;

    addNewFiles(teststring);
    arr[0]=scanInFileToArray(arr);
    sum=functionSumElementArray(arr,count);
    recordSumToFile(sum);

    return 0;
}
int  scanInFileToArray(int arr[]){
    FILE * myfile;
    int i=0;
    myfile=fopen(fileName(),"r");
    while(fscanf(myfile, "%d", &arr[i])!=EOF){
        i++;
        count++;
    }
    fclose(myfile);
    return arr[0];
}




