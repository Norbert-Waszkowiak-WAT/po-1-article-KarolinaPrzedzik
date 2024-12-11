#ifndef UNTITLED1_AUTHOR_H
#define UNTITLED1_AUTHOR_H
#include<iostream>
#include<string>

class Author{
private:
    std::string name;
    std::string surname;
public:
    Author():
    name(""), surname(""){};
    Author(std::string name, std::string surname)
    : name(name), surname(surname) {};

    const std::string getSurname() const{
        return surname;
    }
    const std::string getName() const{
        return name;
    }
    const std::string toString() const{
        return name + " " + surname;
    }
    void print(){
        std::cout<<name<<" "<<surname<<std::endl;
    }
};
#endif