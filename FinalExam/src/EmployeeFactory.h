//
// Created by chenz on 12/11/2018.
//

#ifndef FINALS_EMPLOYEEFACTORY_H
#define FINALS_EMPLOYEEFACTORY_H


#include "AbstractEmployeeFactory.h"

class EmployeeFactory : AbstractEmployeeFactory {
private:private:
    shared_ptr<Employee> SharedPtrEmployee_t;
public:
    shared_ptr<Employee> getObject(string csvData) override;

};


#endif //FINALS_EMPLOYEEFACTORY_H
