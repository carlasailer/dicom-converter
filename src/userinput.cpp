#include <iostream>
#include <sstream>
#include "userinput.h"

void UserInput::User_getFilename()
{
    std::string input;
    std::cout << "\n*** Location of DICOM File to be read *** \n";
    std::cout << "Press enter to use the default location (dicom-converter/data/import/CT.dcm) or enter a custom location:\n";
    std::getline(std::cin, input);
    if (input.length() == 0) {
        input = "../data/import/CT.dcm";
    }
    
    std::cout << "   Selected file: " << input << std::endl;

    setFilename(input);

    return;
}

void UserInput::User_getDisplayMetaData()
{
    std::string input;
    bool display;
    std::cout << "\n*** Display metadata *** \n";
    std::cout << "To display metadata, enter Y\n";
    std::cout << "To display only the image, enter N\n";
    std::cin >> input;
    if (input == "Y" || input == "y") {
        display = true;
    }

    else if (input == "N" || input == "n") {
        display = false;
    }
    else {
        std::cerr << "Invalid input. Setting to display only. \n";
        display = false;
    }

    setDisplayMetaData(display);

    return;
}

void UserInput::User_getSave()
{
    std::string input;
    bool save;
    std::cout << "\n*** Export *** \n";
    std::cout << "To export, enter Y\n";
    std::cout << "To exit without export, enter N\n";
    std::cin >> input;
    if (input == "Y" || input == "y") {
        save = true;
    }

    else if (input == "N" || input == "n") {
        save = false;
    }
    else {
        std::cerr << "Invalid input. Setting to exit without export. \n";
        save = false;
    }
    std::cout << "\n************ \n";
    setSave(save);

    return;
}
    
std::string UserInput::getFilename() { return _filename; }
 
bool UserInput::getDisplayMeta() { return _displayMetadata; }

bool UserInput::getSave() { return _save; }
   
void UserInput::setFilename(std::string input) { _filename = input; return; }
   
void UserInput::setDisplayMetaData(bool input) { _displayMetadata = input; return; }

void UserInput::setSave(bool input) { _save = input; return; }
