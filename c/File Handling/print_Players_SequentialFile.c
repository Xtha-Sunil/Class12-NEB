// Print all data from sequential file "Players.dat" which contains Names, Address and Jersey number

#include <stdio.h>
int main()
{
    // Open file "Players.dat" to read
    FILE *file = fopen("Players.dat", "r");

    if (file == NULL){
        perror("Couldn't open the file 'Players.dat'");
        // 'perror' function in C used to display error message in file handling 
        return 1;
    }

    char name[50],address[50];
    int jerseyNumber;

    // Read the contents of the file and print
    while (fscanf(file, "%s %s %d", name, address, &jerseyNumber) == 3) 
    // '&jerseyNumber' is used instead of 'jerseyNumber' to provide the address where the integer should be stored
    // since name and address are already character arrays(strings) '&' operator is not needed 
    {
        printf("Name: %s \n", name);
        printf("Address: %s \n", address);
        printf("Jersey Number: %d \n",jerseyNumber);
        printf("\n");
    }

    // Close the file
    fclose(file);
    return 0;
}

// Output Structure if 'Players.dat' file not found:
// Couldn't open the file 'Players.dat': No such file or directory
// ----------------------------------------------------------------
// Output Structure if 'Players.dat' file exists:
// Name: JohnDoe 
// Address: MainSt 
// Jersey Number: 42 

// Name: JaneSmith 
// Address: ElmSt 
// Jersey Number: 7 
