#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main () {

    time_t current_time = time(NULL);

    // Convert the current time to a string in the format "YYYY-MM-DD_HH:MM:SS"

    char time_string[50];
    strftime(time_string, 50, "D:\\%Y-%m-%d_%H-%M-%S.txt", localtime(&current_time));
    //    printf("%s\n", time_string);
    // Create a file name with the current date and time

    FILE *ptr;
    ptr = fopen(time_string,"w");
    fclose(ptr);

    return(0);
}