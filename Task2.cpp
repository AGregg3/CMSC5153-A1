#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string input;
    const string allowedCommands[] = {"clear", "pwd", "time", "date", "ls", "which"};

    while (true) {
        cout << "myShell> ";
        getline(cin, input);

        // Quit condition1
        if (input == "Quit!!!") {
            cout << "Goodbye..." << endl;
            break;
        }

        // Check if input is a valid command
        bool isValidCommand = false;
        for (size_t i = 0; i < sizeof(allowedCommands) / sizeof(allowedCommands[0]); ++i) {
            if (input == allowedCommands[i]) {
                isValidCommand = true;
                break;
            }
        }

        if (isValidCommand) {
            cout << "Executing command: " << input << endl;
            // Execution logic will go here (fork/exec)
        } else {
            cout << "Invalid command: " << input << endl;
        }
    }

    return 0;
}
