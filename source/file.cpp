#include <stdio.h>
#include <iostream>
#include "file.h"

File::File(char creator, char owner, char flag, int creation, int l_change, int size, int protection){
    this->creator = creator;
    this->current_owner = owner;
    this->flag = flag;
    this->creation = creation;
    this->l_change = l_change;
    this->size = size;
    this->protection = protection;
}

char File::get_creator(){
    return creator;
}

char File::get_owner(){
    return current_owner;
}

char File::get_flag(){
    return flag;
}

int File::get_creation(){
    return creation;
}

int File::get_l_change(){
    return l_change;
}

int File::return_size(){
    return size;
}

char File::get_protection(){
    return protection;
}

void File::set_size(int new_size){
    size = new_size;
}

void File::set_l_change(int new_change){
    l_change = new_change;
}