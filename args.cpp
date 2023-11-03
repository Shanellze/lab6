#include <iostream>
using namespace std;


//In this function, arguments are passed through the command line.
int main(int argc, char *argv[]){
    cout << "Program Name: " << argv[0] << std::endl;
    cout << "called with " << argc - 1 << " arguments: ";

    for (int i = 1; i < argc; i++) {
        cout << "'" << argv[i] << "' " ;
    }

    return 0;

return 0;
}
