//
// Created by chenz on 12/11/2018.
//

#ifndef FINALS_ABSTRACTPERSONAPI_H
#define FINALS_ABSTRACTPERSONAPI_H

#include <string>
#include <ostream>

using namespace std;

class AbstractPersonAPI {

public:
    virtual int getId() = 0;
    virtual void setId(int id) = 0;
    virtual string getFirstName() = 0;
    virtual void setFirstName(string firstName) = 0;
    virtual string getLastName() = 0;
    virtual void setLastName(string lastName) = 0;
    virtual int getAge() = 0;
    virtual void setAge(int age) = 0;
    virtual void show() = 0;

    friend ostream &operator<<(ostream &os, const AbstractPersonAPI &api);
};


#endif //FINALS_ABSTRACTPERSONAPI_H
