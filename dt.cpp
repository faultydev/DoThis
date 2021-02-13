#include <iostream>
#include <unistd.h>
#include <boost/algorithm/string.hpp>

using namespace std;

string cmd() {

    cout << ">> ";

    string x;
    cin >> x;

    return x;

}

int main (int argc, char** argv) {

    

    cout << "\n";
    cout << "dtCONSOLE\n";
    
    for ( ;; ) {
    string exec = cmd();

    // start SIMPLE CMDS

    if (string(exec) == "exit") {

        cout << "Goodbye! \n";
        sleep(1);
        return 0;

    }

    if (string(exec) == "install") {

        system("cd js && npm i");
        cmd();

    }

    if (string(exec) == "help") {

        cout << "\n"
        << "| --------- | --------------------------------- | \n"
        << "| dtHELP    | made by faulty.                   | \n"
        << "| --------- | --------------------------------- | \n"
        << "| do <file> | Executes your file with DT.       | \n"
        << "| exit      | Exits the console.                | \n"
        << "| help      | Shows this.                       | \n"
        << "| install   | Installs all needed dependencies. | \n"
        << "| --------- | --------------------------------- | \n"
        << "\n";
    }

    if (string(exec) == "clear") {

        system("clear");

    }

    if (string(exec) == "cls") {

        system("cls");

    }

    // end SIMPLE CMDS

    // do

    if (string(exec) == "do") {

        system(("node ./js/index.js " + string(exec)).c_str());

    }

    if (string(exec) == "print") {

        

    }

    }

}