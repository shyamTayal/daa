# Assignment - 1

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019006  |   Amanjeet Kumar | Amanjeetk11 |
|    IIT2019007  |   Aditya Raj | Adityahulk |
|    IIT2019008  |   Shyam Tayal | shyamTayal |


**Group No-**"3"

**Faculty Name-**"Dr. Rahul Kala"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Consider an array of distinct numbers sorted in increasing order. The array has been rotated (clockwise) k number of times. Given such an array, find the value of k. Solve using divide and conquer algorithm.

---
## How to use code
First Step is to Download/clone the repository
```
git clone https://github.com/shyamTayal/daa
```
#### Personalised Initialization Method (optional)
If you want to generate your own randomly generated tescases , there is a C++ file for the same that generates randomly generated testcases in above mentioned file format.
```
cd daa/testing
g++ input_test_gen.cpp
./a.out         
```
There are 3 Testcase files generated that have 3 different magnitudes of testcases :
- input_test_10.txt (small sized testcase)
- input_test_1000.txt (medium sized testcase)
- input_test_100000.txt (large sized testcase)

However the above files are pregenerated and above step can be skipped

---
### Run the Code
For one random testcase
```
cd daa
g++ rotated.cpp -o rotated
./rotated
```
#### Output
```
Randomly Generated and rotated array Details:
Size : 6
Elements : 4 6 7 1 2 3
Pivot :
3
```
---
### Testing
```
cd daa/testing
g++ rotated_testing.cpp -o rotated_tesing
./rotated_testing
```
Above Commands will generate an Output file

---
## Theory
Divide and Conquer

---
## Analysis
### Time Complexity

### Space Complexity

---
## References
