/*
    From sequential file 'Students.dat' which contains Name, Class and Pass-Status, 
    seperate passed and failed students in file "pass.dat" and "fail.dat" respectively.
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *studentsFile = fopen("Students.dat", "r");
    FILE *passFile = fopen("pass.dat", "w");
    FILE *failFile = fopen("fail.dat", "w");

    if (studentsFile == NULL || passFile == NULL || failFile == NULL) {
        printf("Error opening files. Make sure they exist and are accessible.\n");
        return 1;
    }

    char line[100]; 

    while (fgets(line, sizeof(line), studentsFile) != NULL) {
        // Tokenize the line to extract the name and pass status
        char name[50];
        char passStatus[10];

        if (sscanf(line, "%s %*d %s", name, passStatus) == 2) {
            if (strcmp(passStatus, "Pass") == 0) {
                fprintf(passFile, "%s %s\n", name, passStatus);
            } else if (strcmp(passStatus, "Fail") == 0) {
                fprintf(failFile, "%s %s\n", name, passStatus);
            }
        }
    }

    fclose(studentsFile);
    fclose(passFile);
    fclose(failFile);

    return 0;
}
