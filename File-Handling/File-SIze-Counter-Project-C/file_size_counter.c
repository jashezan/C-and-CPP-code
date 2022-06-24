#include<stdio.h>
#include<stdlib.h>    // using it for EXIT_FAILURE 

int main()
{
    // declaring file pointer aka file handler
    FILE *fp;

    // opening input file 
    fp =fopen("image.png","r");

    // checking if the input file exist or not
    if(fp == NULL)
    {
        perror("File Opening Failed");
        return EXIT_FAILURE;    //if it shows any problem then exiting the code
    }

    // traversing through file's end to calculate its byte
    fseek(fp,0,SEEK_END);

    // Showing output : file size
    // ftell returns "long int", so "%ld" must be used to get correct data
    printf("File size: %ld bytes\n",ftell(fp));
    printf("File size (Kilobyte): %0.2f \n",ftell(fp)/1024.0);
    
    // closing the input file 
    fclose(fp);
    
    return 0;
}
