#include <cstdlib> // Include the necessary header file

int main() {
    int mkdirResult = system("mkdir new_folder"); // Create a new directory
    if (mkdirResult != 0) {
        // Handle error, e.g., print an error message or exit the program
        return 1;
    }

    int delResult = system("rmdir /s /q old_folder"); // Remove an existing directory
    if (delResult != 0) {
        // Handle error, e.g., print an error message or exit the program
        return 1;
    }

    return 0;
}
