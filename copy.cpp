#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]){
    if (argc != 3) {
        cerr << "Invalid input" << endl;
    }

    const char* sourceFileName = argv[1];
    const char* destinationFileName = argv[2];

    // Open the source file for reading
    ifstream sourceFile(sourceFileName);

    // Open the destination file for writing
    ofstream destinationFile(destinationFileName);

    // Copy the contents from the source to the destination
    destinationFile << sourceFile.rdbuf();

    cout << "File copied successfully.";

    return 0;
}