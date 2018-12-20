//
// Created by chenz on 12/11/2018.
//

#ifndef FINALS_SCHOOL_H
#define FINALS_SCHOOL_H

#include "AbstractSchool.h"
#include "Employee.h"

using namespace edu::neu::csye6205;
using namespace std;

class School : public AbstractSchool{
private:
    shared_ptr<Employee> SharedPtrEmployee_t;
    shared_ptr<Employee> CompareSharedPtrEmployeeFunction_t;
    shared_ptr<Employee> ScaleSharedPtrEmployeeFunction_t;
public:
   void addEmployee(shared_ptr<Employee> employeeSharedPtr) override;
   void sortEmployees() override;
   void sortEmployees(shared_ptr<Employee> f) override;
   void scaleEmployees(shared_ptr<Employee> f) override;
   void showEmployees() override;

};


#endif //FINALS_SCHOOL_H
