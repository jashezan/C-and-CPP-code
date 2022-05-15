#include<stdio.h>

int main()
{
    // declaring a integer variable cause remove() returns 0 on success
    int rv;

    // getting file that will be removed
    char *fileName;
    fileName = "image.png";

    // recieving return value of remove()
    rv= remove(fileName);
    // error message on failure to remove the file
    if (rv != 0)
    {
        // error message
        perror("File Remove Failed!....\n");
        // exiting the program on failure
        return 1;
    }
    // success message on removing the file 
    printf("%s File removed successfully\n", fileName);

    // trying to remove the file again
    // after successfully removing the file, this time it will show error message
    rv= remove(fileName);
    if (rv != 0)
    {
        perror("File Remove Failed!....\n");
        return 1;
    }
    printf("%s File removed successfully\n", fileName);
    

    return 0;
}
