
# HW1 EE599 - Computing Principles for Electrical Engineers

- Plesae clone the repository, edit [README.md](README.md) to answer the questions, and fill up functions to finish the hw.
- For non-coding quesitions, you will find **Answer** below each question. Please write your answer there.
- For coding questions, please make sure that your code can run ```blaze run/test```. In this homework, you will need to fill up [cpplib.cc](src/lib/cpplib.cc), [q5_student_test.cc](tests/q5_student_test.cc), [q6_student_test.cc](tests/q6_student_test.cc), [q7_student_test.cc](tests/q7_student_test.cc) for question  5, 6, 7.
- For submission, please push your answers to Github before the deadline.
- Deadline: Friday, September 4th by 6:30 pm
- Total: 120 points. 100 points is considered full credit.

## Question 1 (10 Points. Medium)

Use proof by contradiction to prove that the FindMax function always finds the maximum value in the input vector.

```cpp
int FindMax(std::vector<int> &inputs) {
   if (inputs.size() == 0) {
       return -1;
   }
   int result = INT32_MIN;
   for (auto n : inputs) {
       if (n > result) {
           result = n;
       }
   }
   return result;
}
```

Answer:

## Question 2 (20 Points. Medium)

What is the time complexity of the below functions?

```cpp
int Example1(int n) {
   int count = 0;
   for (int i = n; i > 0; i /= 2) {
       for (int j = 0; j < i; j++) {
           count += 1;
       }
   }
   return count;
}
```

Answer:

```cpp
void Example2(int a = 0, int n) {
   int i = n;
   while (i > 0) {
       a += i;
       i /= 2;
   }
}
```

Answer:

```cpp
void Example3(int n) {
   int count = 0;
   for (int i=n/2; i<=n; i++) {
       for (int j=1; j<=n; j = 2 * j) {
           for (int k=1; k<=n; k = k * 2) {
               count++;
           }
       }
   }
}
```

Answer:

```cpp
void Example4(int n) {
   int count = 0;
   for (int i=0; i<n; i++)
       for (int j=i; j< i*i; j++)
           if (j%i == 0)
           {
               for (int k=0; k<j; k++)
                   cout<<"*";
           }
}
```

Answer:

## Question 3 (10 Points. Easy)

What does it mean when we say that the Merge Sort (MS) algorithm is asymptotically more efficient than the Bubble Sort (BS) algorithm? Support your choice with an explanation.

1. MS will always be a better choice for small inputs
2. MS will always be a better choice for large inputs
3. BS will always be a better choice for small inputs
4. MS will always be a better choice for all inputs

Answer:

## Question 4 (10 Points. Easy)

Create an account on GitHub and Stack Overflow and paste the link to your profile.

Answer:

GitHub profile link:

Stack Overflow profile link:

## Question 5 (15 Points. Easy)

- Write a function that takes a string as an input and **reverses** its value. The function has no output. It changes the value of the input parameter. Write a simple function ```void CPPLib::Q5ReverseString(std::string &input)``` in [cpplib.cc](src/lib/cpplib.cc). *You are welcomed to call existing STL functions*.

    - Example: Input: “EE599”, Output: “995EE”, string is stricted to be alphanumeric.
    - You cannot use any new local variable of type *string or vector or array*, but you can create extra O(1) space, such as *int*. The reverse should happen **in place** (i.e. on the input string).


- Write a function that takes a vector as an input and **reverses** its value. Write a simple function ```std::vector<int> CPPLib::Q5ReverseVector(std::vector<int> input)``` in [cpplib.cc](src/lib/cpplib.cc)

    - Example: Input: {1,2,3,4}, Output: {4,3,2,1}. 
    - Use of [stack](https://en.cppreference.com/w/cpp/container/stack) is recommended but not a must.

- Write a function that converts a string to lower case. Write a simple function ```void CPPLib::Q5ToLower(std::string& )``` in [cpplib.cc](src/lib/cpplib.cc). The input string is strictly alphanumeric.
    - Example: input: “EE599”, output: “ee599”
    - Use of [transform](http://www.cplusplus.com/reference/algorithm/transform/) is recommended but not a must.

For all of the three questions, write a test using GTest for your finction in [tests/q5_student_test.cc](tests/q5_student_test.cc).
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

Write a function ```std::map<char, char> CPPLib::Mappable(const std::string& from, const std::string& to)``` in [cpplib.cc](src/lib/cpplib.cc). 
Write a function that takes two strings from and to and determines if they are mappable.
- Two strings are mappable if the characters in from can be replaced to get to.
- You can assume characters are strictly lower cases.  
- Each character can only map to itself.
- The output should be a map:
    - Empty map if the mapping is not possible
    - The actual map if the mapping was possible

Example 1:
Input: from = "add", to = "egg”
Output: {(a->e), (d->g)}

Example 2:
Input: from = "extreme", to = "egg”
Output: { }

Example 3:
Input: from = "harder", to = "waiter”
Output: { }, because you cannot map 'r' to 'i' and 'r' at the same time!

Example 4:
Input: from = "aabbrr", to = "ddeekk”
Output: {(a->d),(b->e), (r->k)}

Further, write several tests using GTest for your function in [tests/q7_student_test.cc](tests/q7_student_test.cc) and compute the time complexity of your implementation.

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q7_student_test
```


## Question 8 (20 Points. Medium)

 Write a function ```void kthPeek(std::vector<int> &input, int k);``` in [cpplib.cc](src/lib/cpplib.cc) that 
 - Finds the kth smallest value of the vector, called target(the vector is not sorted)
 - It then rearranges the vector in such a way that it will have all the values lower than the target on the left side in ascending order and all the greater than the target value on the right side in descending order.

Example:\
Input: {637, 231, 123, 69, 43, 900, 10, 7, 21, 99, 0, 500}, k = 6.\
Output: Output:{0, 7, 10, 21, 43, 69, 900, 637, 500, 231, 123, 99 }.

Write several tests using GTest for your function in [tests/q8_student_test.cc](tests/q8_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q8_student_test
```