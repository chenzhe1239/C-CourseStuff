//
// Created by chenz on 12/11/2018.
//

#ifndef FINALS_ABSTRACTEMPLOYEEFACTORY_H
#define FINALS_ABSTRACTEMPLOYEEFACTORY_H

#include <string>
#include <iostream>
#include <memory>
#include "Employee.h"

using namespace std;
class AbstractEmployeeFactory {
private:
    shared_ptr<Employee> SharedPtrEmployee_t;
public:
    virtual shared_ptr<Employee> getObject(string csvData) = 0;
};


#endif //FINALS_ABSTRACTEMPLOYEEFACTORY_H
