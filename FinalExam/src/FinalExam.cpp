/*
 * FinalExam.cpp
 *
 *  Created on: Dec 10, 2018
 *      Author: danielgmp
 */
#include <iostream>					// std::cout std::endl
#include "SolutionsFinalExam.h"		// create your own class with solutions to this final exam
#include "FinalExam.h"

namespace edu {
    namespace neu {
        namespace csye6205 {

            /**
             * Create and control TWO thread to alternate output of the alphabet (lowercase and uppercase).
             */
            void FinalExam::controllingThreads() {
                /**
                 * Design and instantiate your own SolutionFinalExam class
                 * containing all programming solutions.
                 */
                SolutionsFinalExam answers;
                answers.controllingThreads();
            }

            /**
             * Generic Programming: showAnswers method and OOD Concepts Strings
             */
            void FinalExam::objectOrientedDesignConcepts() {
                /**
                 * Design and instantiate your own SolutionFinalExam class
                 * containing all programming solutions.
                 */
                SolutionsFinalExam answers;
                answers.objectOrientedDesignConcepts();
            }

            /**
             * Northeastern University model
             *
             * Hire Employees, sort Employees, scale WAGES of all Employees;
             *
             * 1. Design AbstractPersonAPI abstract class with
             * 	  AT LEAST the following abstract methods:
             *
            int getId();
            setId(int id);
            String getFirstName();
            void setFirstName(string firstName);
            String getLastName();
            void setLastName(String lastName);
            int getAge();
            void setAge(int age);
            void show();
             *
             * 2. Design Person class derived from AbstractPerson OVERLOAD OUTPUT OPERATOR
             * 3. Design AbstractEmployee abstract class derived from Person with
             *    AT LEAST the following abstract methods:
             *
            double getWage();
            void setWage(double wage);
             *
             * 4. Design Employee class derived from AbstractEmployee
             *
             *    *** 5 POINTS FOR REQUREMENTS 1 to 4 ***
             *
             *
             * 7. Design AbstractEmployeeFactory with ONLY the following methods:
             *
            virtual SharedPtrEmployee_t getObject(std::string csvData) = 0;
             *
             *
             * 8. Design EmployeeFactory derived from AbstractEmployeeFactory
             *
             *
             *    *** 10 POINTS FOR ABOVE REQUREMENTS 5 to 8 ***
             *
             *
             * 9. Design School class derived from the supplied AbstractSchool
             *    and Design NEU class derived from School
             *    *** 10 POINTS FOR ABOVE REQUREMENT 9 ***
             *
             *
             *
             * 10. Instantiate an neu object from the NEU class and perform the following:
             * 	  a. Hire several Employees using the AbstractSchool add method.
             * 		 and the following Strings (PARSE CSV STRINGS WITHOUT USING FILE I/O):
             *       *** 10 POINTS FOR ABOVE REQUREMENT 10a ***
             *
        "1,Dan,Peters,17,45.65"
        "2,Kal,Bugrara,19,35.70"
        "3,Yusuf,Ozbek,18,40.25"
        "4,Jane,Smith,16,50.35"
             *
             *
             *    c. Show the state of the neu object using the AbstractSchool showEmployees method.
             *    d. Sort all Employees in Natural Order (last name) using the AbstractSchool sortEmployees method.
             *       *** 5 POINTS FOR REQUIREMENTS c,d,e ***
             *
             *    f. Sort all Employees BY WAGE (hi to low) using the AbstractSchool sortEmployees method.
             *    g. Use std::transform to Scale and Sort all Employees BY WAGE (hi to low)
             *       AND INCREASED BY 100 using the AbstractSchool scaleEmployees method.
             *       *** 10 POINTS FOR REQUIREMENTS f,g ***
             *
             *
             */
            void FinalExam::payrollModel() {
                /**
                 * Design and instantiate your own SolutionFinalExam class
                 * containing all programming solutions.
                 */
                SolutionsFinalExam answers;
                answers.payrollModel();
            }

            void FinalExam::demo() {
                std::cout << "\n\t FinalExam.demo()..." << std::endl;
                FinalExam obj;

                /**
                 * NOTE: 10 POINTS for correct, executable, on-time submission of a zipped Eclipse workspace
                 * in the correct format,
                 * FOR EXAMPLE:
                 *
                 * 		workspace_dan_peters_photon_neu.zip:
                 *
                 * NOTE: all CONSOLE OUTPUT must be pasted into the end of the main method as a comment.
                 */

                /**
                 * 15 POINTS: Controlling Threads:
                 *
                 * Create TWO threads, where each thread outputs the ENTIRE alphabet,
                 * Thread 1, lowerCase outputs abcdefghijklmnopqrstuvwxyz
                 * Thread 2, lowerCase outputs ABCDEFGHIJKLMNOPQRSTUVWXYZ
                 * HOWEVER,
                 * YOU MUST Control the TWO threads so they ALTERNATE output,
                 * aAbBcC ...xXyYzZ
                 */
                std::cout << "\n\t 15 POINTS: Controlling Alphabet Output Threads:" << std::endl;
                obj.controllingThreads();

                /**
                 * 10 POINTS: Generic Programming:
                 *
                 * 1. Design 'showAnswers' using Generic programming to allow
                 * 	  the 'showAnswers' method to output the entire contents of any
                 *    vector to standard output as Console Output:
                 *    (whether vector contains EITHER String, Double, Integer, etc. elements)
                 *
                 *  USING 'showAnswers:
                 *  2. output the following list of integer values: 1 2 3 4 5
                 *  3. output the following list of floating point values: 1.1 2.2 3.3 4.4 5.5
                 *  4. output the following list of character: a b c d e
                 *  5. output a List of Strings, each of which is an important Object Oriented Design concept.
                 */
                std::cout << "\n\n\t 10 POINTS: Generic showAnswers Important Object Oriented Concepts:" << std::endl;
                obj.objectOrientedDesignConcepts();

                /**
                 * 50 POINTS: University Model
                 * Design a model of Northeastern University Payroll
                 */
                std::cout << "\n\n\t 50 POINTS: University Model:" << std::endl;
                obj.payrollModel();

                std::cout << "\n\t FinalExam.demo()... done!" << std::endl;
            }


        } /* namespace csye6205 */
    } /* namespace neu */
} /* namespace edu */
