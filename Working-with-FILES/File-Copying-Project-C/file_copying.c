#include<stdio.h>
#include<stdlib.h>    // using it for EXIT_FAILURE 

int main()
{
    // declaring file pointer aka file handler
    FILE *fpIn, *fpOut;

    // naming input file - you can put any file / file-Path
    char *inputFile = "F:/Coding/C Code/General - C/Subeen Vai/2nd book/Image_Copying_Project/image.png"; // must take with backslash

    // naming output file - keep the same file extension to avoid data loss
    char *outFile = "logo.png"; // here we can't creat file in our desired folder with this statements. File will be created in Code folder
    
    // delcaring variable for taking binary character from input file  
    int ch;

    // opening input file 
    fpIn = fopen(inputFile,"rb");

    // checking if the input file exist or not
    if(fpIn == NULL)
    {
        perror("File Opening Failed");
        return EXIT_FAILURE;    //if it shows any problem then exiting the code
    }

    // Creating/Opening the output file 
    fpOut = fopen("logo.png","wb");

    // taking binary character until the file ends and putting it to the output file
    while (1)
    {
        ch = fgetc(fpIn);
        if(ch == EOF)
        {
            break;
        }
        fputc(ch,fpOut);
    }
    
    // closing the input file 
    fclose(fpIn);
    // closing the output file 
    fclose(fpOut);

    return 0;
}
