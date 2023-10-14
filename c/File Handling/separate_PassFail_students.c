// From sequential file 'Students.dat' which contains Name, Class and Pass-Status
// Seperate passed and failed students in file "pass.dat" and "fail.dat" respectively

#include <stdio.h>
#include <string.h> // header for strcmp function
int main(){
    FILE *file = fopen("Students.dat", "r");
    if (file == NULL){
        perror("Couldn't open the file 'Students.dat'");
        return 1;
    }

    FILE *passFile = fopen("pass.dat", "w");
    FILE *failFile = fopen("fail.dat", "w");

    char name[50], class[20], passStatus[10];

    // Write students detatil pass.dat if passStatus=Pass else write student details in fail.dat
    while(fscanf(file,"%s %s %s",name, class, passStatus)==3){
        // 'strcmp' function compares 'passStatus' variable with string "Pass" and "Fail" to seaprate the files
        if (strcmp(passStatus,"Pass")==0){
            fprintf(passFile, "%s %s %s\n", name, class, passStatus);
        }
        else if (strcmp(passStatus,"Fail")==0){
            fprintf(failFile, "%s %s %s\n", name, class, passStatus);
        }
    }

    // Close the files
    fclose(file);
    fclose(passFile);
    fclose(failFile);

    return 0;
}