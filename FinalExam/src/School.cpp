//
// Created by chenz on 12/11/2018.
//

#include "School.h"

void School::addEmployee(shared_ptr<Employee> employeeSharedPtr) {
    School::SharedPtrEmployee_t =  employeeSharedPtr;
}

void School::sortEmployees() {


}

void School::sortEmployees(shared_ptr<Employee> f) {
   School::CompareSharedPtrEmployeeFunction_t = f;
}

void School::scaleEmployees(shared_ptr<Employee> f) {
  School::ScaleSharedPtrEmployeeFunction_t = f;
}

void School::showEmployees() {

}
