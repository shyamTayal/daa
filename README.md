# Assignment - 1

*Team Members*
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIB2019006  |   Amanjeet Kumar | Amanjeetk11 |
|    IIB2019007  |   Aditya Raj | Adityahulk |
|    IIB2019008  |   Shyam Tayal | shyamTayal |


*Group No-*"3"

*Faculty Name-*"Dr. Rahul Kala"

*Mentor Name-* "Md. Meraz"

---
## Problem Statement
Consider an array of distinct numbers sorted in increasing order. The array has been rotated (clockwise) k number of times. Given such an array, find the value of k. Solve using divide and conquer algorithm.

---
## How to use code
First Step is to Download/clone the repository

git clone https://github.com/shyamTayal/daa

#### Personalised Initialization Method (optional)
If you want to generate your own randomly generated tescases , there is a C++ file for the same that generates randomly generated testcases in above mentioned file format.

cd daa/testing
g++ input_test_gen.cpp
./a.out         

There is a Testcase file generated that has 5 different magnitudes of testcases :
 - input_testcase.txt

However the above file is pregenerated and above step can be skipped

---
### Run the Code
For one random testcase

cd daa
g++ rotated.cpp -o rotated
./rotated

#### Output (Sample)

Randomly Generated and rotated array Details:
Size : 6
Elements : 4 6 7 1 2 3
Pivot :
3

---
### Testing

cd daa/testing
g++ rotated_testing.cpp -o rotated_tesing
./rotated_testing

Above Commands will generate an Output file ('output_time.csv') , that contains the comma seperated values for each testcase of Size of array and No. of comparisons done.

---
## Theory
### Divide and Conquer
Both merge sort and quicksort employ a common algorithmic paradigm based on recursion. This paradigm, divide-and-conquer, breaks a problem into subproblems that are similar to the original problem, recursively solves the subproblems, and finally combines the solutions to the subproblems to solve the original problem. 
divide-and-conquer algorithm as having three parts:
- Divide the problem into a number of subproblems that are smaller instances of the same problem.
- Conquer the subproblems by solving them recursively. If they are small enough, solve the subproblems as base cases.
- Combine the solutions to the subproblems into the solution for the original problem.

Binary search is also a divide and conquer algorithm. It is efficient and also one of the most commonly used techniques that is used to solve problems in case of sorted arrays.

---
## Analysis
### Time Complexity
O(log N) , where N is the size of array
Since, Binary Search is used and Binary search requires only order of log N comparisons to find an element hence the time complexity is O(log N).

### Space Complexity
O(1) , Constant space complexity
No extra auxillary space is needed, There are only 3 constant space interger variables created oon each run of the funciton namely : start, end and mid, Hence for constant space used the Space complexity is O(N).

---
## References
- ##### [Geeks for Geeks](https://www.geeksforgeeks.org/divide-and-conquer/)
- ##### [Khan Academy](https://www.geeksforgeeks.org/binary-search/)
