#include "cpplib.h"
#include "limits"
#include <iostream>
#include <string>
#include <algorithm>
#include <set>

// Question 1
// Please create your functions here.
// You should write 4 functions
bool myfunction(int a, int b) {
    if (a == b) {
        return true;
    }

    return false;
}

bool myfunction(std::string a, std::string b) {
    if (a == b) {
        return true;
    }

    return false;
}

bool myfunction(std::string a, int b) {
    a.erase(0, std::min(a.find_first_not_of('0'), a.size()-1));

    if(std::to_string(b) == a) {
        return true;
    }
    return false;
}

bool myfunction(int a, std::string b) {
    b.erase(0, std::min(b.find_first_not_of('0'), b.size()-1));

    if(std::to_string(a) == b) {
        return true;
    }
    return false;
}

// Question 3
void CPPLib::SwapByRefernce(float &input1, float &input2){
    // Please fill up this function.
    int temp = input1;
    input1 = input2;
    input2 = temp;
}
void CPPLib::SwapByPointer(float *input1, float *input2){
    // Please fill up this function.
    int temp = 0;
    temp = *input1;
    *input1 = *input2;
    *input2 = temp;
}

// Question 4
void CPPLib::UniqueVectorNotBySet(std::vector<int> &input){
    // Please fill up this function.
    auto end = input.end();
    for (auto it = input.begin(); it != end; ++it) {
        end = std::remove(it + 1, end, *it);
    }
    input.erase(end, input.end());
}
void UniqueVectorBySet(std::vector<int> &input){
    // Please fill up thCPPLib::is function.
    std::set<int> s;
    for (int &x : input) {
        s.insert(x);
    }
    input.resize(s.size());
    std::copy(s.begin(), s.end(), input.begin());
}
void CPPLib::ReverseVector(std::vector<int> &input){
    // Please fill up this function.
    int i = 0;
    int j = input.size();

    while (i < j) {
        int temp = input.at(i);
        input.at(i) = input.at(j);
        input.at(j) = temp;
        i++;
        j--;
    }
}
void CPPLib::PrimeVector(std::vector<int> &input){
    // Please fill up this function.
    for (std::vector<int>::iterator it = input.begin() ; it != input.end(); ++it) {
        if (*it ==0 || *it == 1) {
            input.erase(it);
        } else {
        for (int i = 2; i < *it; i++) {
            if (*it % i != 0) {
                input.erase(it);
            }
        }
        }
    }
}
std::vector<int> CPPLib::IntersectVectors(std::vector<int> &input1, std::vector<int> &input2){
    // Please fill up this function.
    std::vector<int> result;
    std::sort(input1.begin(), input1.end());
    std::sort(input2.begin(), input2.end());
    int i = 0;
    int j = 0;

    while (!input1.empty() && !input2.empty()) {
        if (input1.at(i) < input2.at(j)) {
            i++;
        } else if (input1.at(i) > input2.at(j)) {
            j++;
        } else {
            result.push_back(input1.at(i));
            i++;
            j++;
        }
    }

    return result;
}

// Question 5
void CPPLib::ToUpper(std::string& input)
{
    // Please fill up this function.
    transform(input.begin(), input.end(), input.begin(), ::toupper); 
}

// Question 6
bool CPPLib::canBePalindrome(const std::string &str)
{
    // Please fill up this function.
    int count[256] = {0};
    for (int i = 0; str[i]; i++) {
        count[str[i]]++;
        int odd = 0;
        for (int i = 0; i < 256; i++) {
            if (count[i] & 1) {
                odd++;
            if (odd > 1) {
                return false;
            }
            }
        }
    }
    return true;
}

// Question 7 
std::vector<std::vector<std::string>> CPPLib::groupAnagrams(std::vector<std::string>& strs)
{
    // Please fill up this function.
    unordered_map<string, vector<string>> mpp;
    std::vector<std::vector<std::string>> result;

    for (string str : strs) {
        string copy = str;
        sort(copy.begin(), copy.end());
        mpp[copy].push_back(str);
    }

    for (auto x : mpp) {
        result.push_back(x.second);
    }

    return result;

}

// Question 8
void CPPLib::kthPeek(std::vector<int> &input, int k)
{
    // Please fill up this function.
    std::sort(input.begin(), input.end());
    inpt pivot = input.at(k - 1);
    std::reverse(input.begin() + k, input.end());
}
