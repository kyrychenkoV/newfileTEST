#include <stdio.h>
#include <stdio.h>
int functionSumElementArray (int arr[],int count);
int main()
{
    FILE * myfile ;
    myfile=fopen("textstring.txt","w");

    char *teststring="10 20 13 40 50";
    fprintf(myfile,"%s",teststring);
    fclose(myfile);
    int arr[5];
    int i=0;
    int count=0;
    myfile=fopen("textstring.txt","r");

    //1
    while(fscanf(myfile, "%d", &arr[i])!=EOF){
        printf("%d ",arr[i]);
        i++;
        count++;
    }
    fclose(myfile);
    //2
    int sum;
    sum=functionSumElementArray(arr,count);
    printf("%d",sum);
    //3
    myfile=fopen("textstring.txt","a+");
    fprintf(myfile,"\nSum=%d\r",sum);
    fclose(myfile);

    return 0;
}
int functionSumElementArray (int arr[],int count){
    int i=0;
    int sumelement=0;
    while (i<count) {
        sumelement+=arr[i];
        i++;
    }
    return sumelement;
}
