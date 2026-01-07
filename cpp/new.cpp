//create a file which include student, name, roll number, using it in cpp and search and element from the file. deletion also.
#include <iostream>   // for cin, cout
#include <cstdio>     // for FILE, fopen, fread, fwrite, fclose, remove, rename

using namespace std;  // allows using cin, cout without std::

struct Student {      // structure to store student data
    char name[50];    // student name (max 49 chars + null)
    int roll;         // student roll number
};

int main() {           // main function starts
    FILE *fp, *temp;  // file pointers: fp for main file, temp for temporary file
    Student s;         // structure variable to store student record
    char filename[50]; // array to store file name
    int choice, key;   // choice for menu, key for search/delete
    int found;         // flag to check if record is found

    cout << "Enter file name: "; // ask user for file name
    cin >> filename;             // read file name

    fp = fopen(filename, "a+");  // open file in append + read mode
    if (fp == NULL) {             // check if file opening failed
        cout << "File error\n";
        return 0;                 // terminate program
    }

    do { // menu loop
        cout << "\n1.Add\n2.Search\n3.Delete\n4.Exit\nChoice: ";
        cin >> choice;            // read menu choice

        // -------- ADD STUDENT --------
        if (choice == 1) {
            cout << "Name: ";
            cin >> s.name;        // read student name
            cout << "Roll: ";
            cin >> s.roll;        // read roll number
            fwrite(&s, sizeof(s), 1, fp); // write structure to file
        }

        // -------- SEARCH STUDENT --------
        else if (choice == 2) {
            cout << "Enter roll to search: ";
            cin >> key;           // roll number to search
            rewind(fp);           // move file pointer to start
            found = 0;            // reset found flag

            while (fread(&s, sizeof(s), 1, fp)) { // read each record
                if (s.roll == key) {               // match roll number
                    cout << "Found → " << s.name << " " << s.roll << endl;
                    found = 1;                     // mark as found
                    break;                         // stop searching
                }
            }
            if (!found)
                cout << "Not found\n";             // record not found
        }

        // -------- DELETE STUDENT --------
        else if (choice == 3) {
            cout << "Enter roll to delete: ";
            cin >> key;           // roll number to delete

            temp = fopen("temp.dat", "w"); // open temporary file
            rewind(fp);                     // move pointer to start
            found = 0;                      // reset found flag

            while (fread(&s, sizeof(s), 1, fp)) { // read each record
                if (s.roll == key) {               // if roll matches
                    found = 1;                     // mark as found
                } else {
                    fwrite(&s, sizeof(s), 1, temp); // copy to temp file
                }
            }

            fclose(fp);           // close original file
            fclose(temp);         // close temp file
            remove(filename);     // delete original file
            rename("temp.dat", filename); // rename temp file
            fp = fopen(filename, "a+");   // reopen updated file

            if (found)
                cout << "Deleted\n";      // deletion success
            else
                cout << "Not found\n";    // record not found
        }

    } while (choice != 4); // repeat until Exit chosen

    fclose(fp);            // close file
    return 0;              // program ends
}