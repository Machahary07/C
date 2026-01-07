#include <stdio.h>

struct Student { //create a structure for student
    char name[50]; //name with max 50 characters
    int roll; //roll number integer dtype
};

int main() { //main function
    FILE *fp, *temp; //file pointers for main file and temporary file
    struct Student s; //student structure variable s
    char filename[50]; //filename with max 50 characters
    int choice, key, found; //variables for menu choice, search key and found flag

    printf("Enter file name: "); //Print the input signal
    scanf("%s", filename); //Take the input into filename

    fp = fopen(filename, "a+"); //open the file in append and read mode where a+ creates the file if it does not exist and fopen returns the file pointer
    if (fp == NULL) { //check if file opened successfully
        printf("File error\n");
        return 0;
    }

    do {
        printf("\n1.Add\n2.Search\n3.Delete\n4.Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Name: ");
            scanf("%s", s.name);
            printf("Roll: ");
            scanf("%d", &s.roll);
            fwrite(&s, sizeof(s), 1, fp); //write the structure to file. fwrite takes 4 arguments: pointer to data, size of each element, number of elements, file pointer
        }

        else if (choice == 2) {
            printf("Enter roll to search: ");
            scanf("%d", &key);
            rewind(fp); //rewind(fp) sets the file position to the beginning of the file to start reading from the start and print the records
            found = 0;

            while (fread(&s, sizeof(s), 1, fp)) {
                if (s.roll == key) {
                    printf("Found → %s %d\n", s.name, s.roll);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Not found\n");
        }

        else if (choice == 3) {
            printf("Enter roll to delete: ");
            scanf("%d", &key);

            temp = fopen("temp.dat", "w");
            rewind(fp);
            found = 0;

            while (fread(&s, sizeof(s), 1, fp)) {
                if (s.roll == key) {
                    found = 1;
                } else {
                    fwrite(&s, sizeof(s), 1, temp);
                }
            }

            fclose(fp);
            fclose(temp);
            remove(filename);
            rename("temp.dat", filename);
            fp = fopen(filename, "a+");

            if (found)
                printf("Deleted\n");
            else
                printf("Not found\n");
        }

    } while (choice != 4);

    fclose(fp);
    return 0;
}
