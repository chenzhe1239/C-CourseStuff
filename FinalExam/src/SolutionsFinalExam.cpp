//
// Created by chenz on 12/11/2018.
//

#include "SolutionsFinalExam.h"
#include <iostream>
#include <thread>

using namespace std;

void SolutionsFinalExam::payrollModel() {
   cout<<"This is a method of payroll model" <<endl;
}

void SolutionsFinalExam::controllingThreads() {
    thread th1(lowCase);
    thread th2(upCase);
    th1.join();
    th2.join();
}

void SolutionsFinalExam::objectOrientedDesignConcepts() {
    cout<<"This is a method of objectOrientedDesignConcepts" <<endl;
}

void SolutionsFinalExam::lowCase() {
    char a = 'a';
    char z = 'z';
    while(a<=z){
        cout<< a << " "<<flush;
        a++;
    }
}

void SolutionsFinalExam::upCase() {
    char A = 'A';
    char Z = 'Z';
    while(A<=Z){
        cout<< A << " "<<flush;
        A++;
    }
}


