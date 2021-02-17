
# HW2 EE599 - Computing Principles for Electrical Engineers

- Please clone the repository, edit [README.md](README.md) to answer the questions, and fill up functions to finish the homework.
- For non-coding questions, fill out the answers below each question. Please write your answer there.
- For coding questions, please make sure that your code can run ```bazel run/test```. In this homework, you will need to fill up [cpplib.cc](src/lib/cpplib.cc) and tests in [tests](tests). **Do Not change or modify any given function names and input or output formats in both [cpplib.cc](src/lib/cpplib.cc) and tests in [tests](tests). Unexpected changes will result in **zero** credit.**
- For coding questions, there is a black box testing for each question. All points are only based on passing the test cases or not (i.e. we don't grade your work by your source code). So, try to do comprehensive testing before your final submission.
- For submission, please push your answers to Github before the deadline.
- Deadline: **Friday, February 17th by 6:30 pm**
- Total: 120 points. 100 points is considered full credit.

## Question 1 (10 Points. Easy)

Write several functions with the same name ```myfunction``` in [cpplib.cc](src/lib/cpplib.cc). And using function overloading to satisfy the following requirements:

- All three functions take 2 parameters as the input.
- If both inputs are integers or string, compare them and return the result if they are equal, else return false.
- If the first input is an integer and the second input is a string or vice-versa your code should return true if the value of string is equal to the integer, else return false. Notice string "05" is equal to integer 5.

Examples:

- input: (5, 5), output: true
- input: (3, 5), output: false
- input: (“abc”, “efg”), output: false
- input: (“EE”, 599), output: false
- input: ("05", 5), output: true

Write several tests using GTest for your function in [tests/q1_student_test.cc](tests/q1_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q1_student_test
```

## Question 2 (10 Points. Easy)

How would you find the size of a non-dynamic array? (We are asking about an array, not a vector). Provide the example and outputs of your run for:

- An array of integers
- An array of chars
- An array of floats

Answer:
I am using sizeof to find the size of different type of array and get a conclusion, if the array type is int or float, the result should be sizeof(array) devided by 4, for example,
int myNum[12] = {637}, float myFloats[20] = {0,1,3,4,6,9,1,324,5,2,12,452,123,352,123,21}, the sizeof(myNum) is 48, but the size of the array myNum is 48/4 = 12; for myFloats, sizeof(myFloats) = 80, the size of the array myFloats is 80/4 = 20; for string array, I have a example, string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"}, sizeof(cars) is 32, but the size of myFloats is 32 / 8, so I got another conclusion for string array, the size of string array is sizeof(string array) / 8. The reason I guess is because the bytes for int and float is 4, and is 8 for string.

code: 
#include <iostream>


using namespace std;

int main()
{
    int myNum[12] = {637};
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    float myFloats[20] = {0,1,3,4,6,9,1,324,5,2,12,452,123,352,123,21};
    cout << "size of int array: " << sizeof(myNum) << "\n";
    cout << "size of string array: " << sizeof(cars) << "\n";
    cout << "size of float array: " << sizeof(myFloats) << endl;
    return 0;
}

## Question 3 (10 Points. Easy)

Write a function swap that will swap the values of the inputs.
Implement this using

- **pass by pointers**

  ```void CPPLib::SwapByPointer(float *input1, float *input2);```

- **pass by references**

  ```void CPPLib::SwapByReference(float &input1, float &input2);```


Example :\
Before: x = 10, y = 15 \
We call Swap(x,y) \
After: x = 15, y = 10

Write several tests using GTest for your function in [tests/q3_student_test.cc](tests/q3_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.

```bash
bazel test tests:q3_student_test
```

## Question 4 (20 Points. Easy)

- Write a function that takes a vector of positive integers as input. The output is the same vector where all duplicates are removed. Note that the output is the same vector means the function's return type should be void and do the modifications on the input vector.
  - Example: before: v=[1, 2, 2, 4], after : v=[1, 2, 4]
  - Solve this for the following cases:
    - You cannot use std::set
  
    ```void CPPLib::UniqueVectorNotBySet(std::vector<int> &input)```
    - You can use std::set

    ```void CPPLib::UniqueVectorBySet(std::vector<int> &input)```
- Write a function ```void CPPLib::ReverseVector(std::vector<int> &input)``` that takes a vector of positive integers as input. The output is the same vector but in the reversed order:
  - Example: before: [1, 2, 3], after:  [3, 2, 1]
- Write a function ```void CPPLib::PrimeVector(std::vector<int> &input)``` that takes a vector of positive integers as input. The output should be the same vector where all numbers are prime numbers. The order of modified vector should follow the order of the input vector.
  - Example: before: [1, 2, 3, 6], after: [2, 3]
- Write a function ```std::vector<int> CPPLib::IntersectVectors(std::vector<int> &input1, std::vector<int> &input2)``` that takes two vectors v1 and v2 and returns a new vector that is the **intersection** of the values in v1 and v2. The order of output vector should follow the order of the first input vector.

  - Example: input: (v1=[1, 2, 3, 4, 7], v2=[3, 4, 5, 6]), output = [3, 4]

Write several tests using GTest for your function in [tests/q4student_test.cc](tests/q4_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.

```
bazel test tests:q4_student_test
```

## Question 5 (15 Points. Easy)

Write a function that converts a string to upper case. Write a simple function ```void CPPLib::ToUpper(std::string& input)``` in [cpplib.cc](src/lib/cpplib.cc). The input string is strictly alphanumeric.
  - Example: input: “ee599”, output: “EE599”
  - Use of [transform](http://www.cplusplus.com/reference/algorithm/transform/) is recommended but not a must.

Write several tests using GTest for your function in [tests/q5_student_test.cc](tests/q5_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q5_student_test
```

## Question 6 (25 Points. Medium)

A palindrome is a word, phrase, or other sequences of characters that reads the same backward as forward, such as **madam**, **racecar**, or the number **10801**.

 Write a function ```bool canBePalindrome(const std::string &str)``` in [cpplib.cc](src/lib/cpplib.cc) that returns true if the permutation of the input could form a palindrome. and false if it is not.


Example:\
Input: str = "code".\
Output: false.\
Input: str = "aab".\
Output: true.

Write several tests using GTest for your function in [tests/q6_student_test.cc](tests/q6_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q6_student_test
```

## Question 7 (20 Points. Medium)

Write a function ```vector<vector<string>> CPPLib::groupAnagrams(vector<string>& strs)``` in [cpplib.cc](src/lib/cpplib.cc).
Write a function that given an array of strings strs, use map to group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:\
Input: strs = ["eat","tea","tan","ate","nat","bat"]\
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Example 2:\
Input: strs = [""]\
Output: [[""]]

Example 3:\
Input: strs = ["ab", "ba"]\
Output: [["ab"]]


Further, write several tests using GTest for your function in [tests/q7_student_test.cc](tests/q7_student_test.cc) and compute the time complexity of your implementation.

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q7_student_test
```

## Question 8 (20 Points. Medium)

 Write a function ```void kthPeek(std::vector<int> &input, int k)``` in [cpplib.cc](src/lib/cpplib.cc), where ```std::vector<int> &input``` is unsorted, and ```int k``` is positive and not greater than the size of input vector.

 The function should 
- find the kth smallest number of the vector, called pivot.
- then rearrange the vector that all the numbers smaller than the pivot will be on pivot's left side in ascending order and all the numbers larger than the pivot will be on pivot's right side in descending order.

Below is one example.

Input: 
```
Input vector is {637, 231, 123, 69, 43, 900, 10, 7, 21, 99, 0, 500}, k is 6.
```
Output: 
```
{0, 7, 10, 21, 43, 69, 900, 637, 500, 231, 123, 99 }
``` 
Here the pivot is 69.


Write several tests using GTest for your function in [tests/q8_student_test.cc](tests/q8_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q8_student_test
```
