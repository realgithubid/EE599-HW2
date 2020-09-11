#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>

/**
 *  Example class used for GTest demo
 */
class CPPLib {
 public:
  //q3
  void CPPLib::SwapByRefernce(int &input1, int &input2);
  void CPPLib::SwapByPointer(int *input1, int *input2);

  //q4
  void CPPLib::UniqeVectorNotBySet(std::vector<int> &input);
  void CPPLib::UniqeVectorBySet(std::vector<int> &input);
  void CPPLib::ReverseVector(std::vector<int> &input);
  void CPPLib::OddVector(std::vector<int> &input);
  std::vector<int> CPPLib::ConcatenateVectors(std::vector<int> &input);
  std::vector<int> CPPLib::UnionVectors(std::vector<int> &input);

  //q5
  void Q5ReverseString(std::string &input);
  std::vector<int> Q5ReverseVector(std::vector<int> input);
  void Q5ToLower(std::string& input);

  //q6 
  bool canBePalindrome(const std::string &str);

  //q7
  std::map<char, char> Mappable(const std::string& from, const std::string& to);

  //q8
  void kthPeek(std::vector<int> &input, int k);

  private : 
};

#endif