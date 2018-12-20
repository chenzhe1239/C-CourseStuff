//
// Created by chenz on 12/11/2018.
//

#ifndef FINALS_ABSTRACTEMPLOYEE_H
#define FINALS_ABSTRACTEMPLOYEE_H


#include "Person.h"

class AbstractEmployee : public Person {
public:
    virtual double getWage() = 0;
    virtual void setWage(double wage) = 0;

};


#endif //FINALS_ABSTRACTEMPLOYEE_H
