#ifndef FILE
#define FILE

#include <iostream>
#include <stdio.h>

class File{
public:
    File(char creator, char owner, char flag, int creation, int l_change, int size, int protection);
    char File::get_creator();
    char File::get_owner();
    char File::get_flag();
    int File::get_creation();
    int File::get_l_change();
    int File::return_size();
    char File::get_protection();
    void File::set_size(int new_size);
    void File::set_l_change(int new_change);

    ~File();

private:
    char creator;
    char current_owner;
    char flag;
    int creation;
    int l_change;
    int size;
    int protection;
};

#endif