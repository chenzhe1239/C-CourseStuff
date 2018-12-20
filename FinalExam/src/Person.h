//
// Created by chenz on 12/11/2018.
//

#ifndef FINALS_PERSON_H
#define FINALS_PERSON_H


#include "AbstractPersonAPI.h"
#include <string>
#include <ostream>

using namespace std;
class Person : public AbstractPersonAPI{
private:
    int id;
    string firstName;
    string lastName;
    int age;
public:
    int getId() override;
    void setId(int id) override;
    string getFirstName() override;
    void setFirstName(string firstName) override;
    string getLastName() override;
    void setLastName(string lastName) override;
    int getAge() override;
    void setAge(int age) override;
    void show() override;



    friend ostream &operator<<(ostream &os, const Person &person);
};


#endif //FINALS_PERSON_H
