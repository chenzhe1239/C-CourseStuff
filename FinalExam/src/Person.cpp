//
// Created by chenz on 12/11/2018.
//

#include "Person.h"

int Person::getId() {
    return id;
}

void Person::setId(int id) {
    Person::id = id;
}

string Person::getFirstName() {
    return firstName;
}

void Person::setFirstName(string firstName) {
    Person::firstName = firstName;
}

string Person::getLastName() {
    return lastName;
}

void Person::setLastName(string lastName) {
    Person::lastName = lastName;
}

int Person::getAge() {
    return age;
}

void Person::setAge(int age) {
  Person::age = age;
}

void Person::show() {

}

ostream &operator<<(ostream &os, const Person &person) {
    os << static_cast<const AbstractPersonAPI &>(person) << " id: " << person.id << " firstName: " << person.firstName
       << " lastName: " << person.lastName << " age: " << person.age;
    return os;
}
