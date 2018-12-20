/*
 * AbstractSchool.h
 *
 *  Created on: Dec 28, 2019
 *      Author: danielgmp
 */

#ifndef ABSTRACTSCHOOL_H_
#define ABSTRACTSCHOOL_H_

//#include "Employee.h"

#include "Employee.h"

namespace edu {
    namespace neu {
        namespace csye6205 {

            class AbstractSchool {
            private:
            private:
                shared_ptr<Employee> SharedPtrEmployee_t;
                shared_ptr<Employee> CompareSharedPtrEmployeeFunction_t;
                shared_ptr<Employee> ScaleSharedPtrEmployeeFunction_t;
            public:
                AbstractSchool();
                virtual ~AbstractSchool();
                virtual void addEmployee(shared_ptr<Employee> employeeSharedPtr) = 0;
                virtual void sortEmployees() = 0;
                virtual void sortEmployees(shared_ptr<Employee> f) = 0;
                virtual void scaleEmployees(shared_ptr<Employee> f) = 0;
                virtual void showEmployees() = 0;
            };

        } /* namespace csye6205 */
    } /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTSCHOOL_H_ */