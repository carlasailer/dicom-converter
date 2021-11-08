#ifndef USERINPUT_H
#define USERINPUT_H

#include <string>

class UserInput
{
  public:
   
    void User_getFilename();
    void User_getDisplayMetaData();
    void User_getSave();

    // getters and mutators
    std::string getFilename();
    bool getDisplayMeta();
    bool getSave();
    void setFilename(std::string file);
    void setDisplayMetaData(bool display);
    void setSave(bool save);

  private:
    std::string _filename;
    bool _displayMetadata;
    bool _save;

};

#endif