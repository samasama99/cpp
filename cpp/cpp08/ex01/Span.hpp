#pragma once
#include <algorithm>
#include <iterator>
#include <stdexcept>
#include <vector>
#include <iterator>
class Span {
private:
  std::vector<int> vec;
  unsigned int N;
  Span();

public:
  ~Span();
  Span(const unsigned int n);
  Span(const Span &src);
  Span &operator=(const Span &src);
  void addNumber(int x);
  int shortestSpan();
  int longestSpan();

  template<typename T>
  void addNumber(const T &begin, const T &end) {
      size_t size = std::distance(begin, end);
      if (size + vec.size() > N) throw std::runtime_error("span is not big enough");
      vec.insert(vec.end(), begin, end);
  };

  template<typename T>
  void addNumber(const T &cont) {
      size_t size = std::distance(cont.begin(), cont.end());
      if (size + vec.size() > N) throw std::runtime_error("span is not big enough");
      vec.insert(vec.end(), cont.begin(), cont.end());
  };
};
