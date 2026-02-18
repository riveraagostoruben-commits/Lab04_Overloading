# Lab04_Overloading
**Overview**

The program prompts the user to define two arrays, populates them with generated data, and then executes a series of overloaded operator tests to verify mathematical correctness.

**Features**

The Arrays class implements the following overloaded operators:

**Addition (+ and +=):** Performs element-wise addition of two arrays of the same size.

**Assignment (=):** Facilitates deep copying of one Arrays object to another.

**Dot Product (*):** Calculates the scalar "producto punto" between two arrays.

**Scalar Multiplication (* and *=):** Multiplies every element in the array by a constant integer (e.g., 10).

**Experiment & Results**

**Initial Data**


**Array A Size:** 5 


**Array B Size:** 5 


**Initial A**: 41, 67, 34, 0, 69 


**Initial B:** 24, 78, 58, 62, 64 

**Test 1:** Compound Addition (+=)

**Operation:** A += B 


**Result:** A = 65, 145, 92, 62, 133 

**Test 2:** Binary Addition and Assignment (+, =)

**Operation:** C = A + B 


**Result:** C = 89, 223, 150, 124, 197 

**Test 3:** Dot Product (*)
**Operation:** punto = A * B


**Final Result:** 30,562 
+1

**Test 4:** Scalar Scaling (*, *=)

**Operation:** A *= 10 


**Final Result:** 650, 1450, 920, 620, 1330 
+1

**Technologies**

**Language:** C++


**Development Environment:** CLion / JetBrains (Exit code 0) 

**Concepts:** Object-Oriented Programming (OOP), Operator Overloading, Dynamic Memory Management.

**Project Structure**
**main.cpp:** Driver program for testing all operator logic.

**Arrays.h:** Header file containing the Arrays class definition and operator prototypes.


**report_lab04_...pdf:** Laboratory report documenting the program output and verification .
