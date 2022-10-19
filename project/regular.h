#ifndef REGULAR_H
#define REGULAR_H

#include <cstring>
#include <vector>

const size_t inf = 2e9;

class RegularExp {
private:
  std::vector<std::vector<size_t> > buffer_;
  char x_;
  size_t num_of_;

public:
  RegularExp(const std::string &reg, char x, size_t num)
      : buffer_(0), x_(x), num_of_(num) {
    for (size_t i = 0; i < reg.size(); i++) {
      if (reg[i] == x) {
        buffer_.push_back(std::vector<size_t>(num + 1, inf));
        buffer_[buffer_.size() - 1][1] = 1;
      } else if (reg[i] >= 'a' && reg[i] <= 'c') {
        buffer_.push_back(std::vector<size_t>(num + 1, inf));
        buffer_[buffer_.size() - 1][0] = 1;
      } else if (reg[i] == '+') {
        std::vector<size_t> first = buffer_[buffer_.size() - 1];
        buffer_.pop_back();
        std::vector<size_t> second = buffer_[buffer_.size() - 1];
        buffer_.pop_back();
        buffer_.push_back(std::vector<size_t>(num + 1, inf));
        for (size_t j = 0; j < num + 1; j++) {
          buffer_[buffer_.size() - 1][j] = std::min(first[j], second[j]);
        }
      } else if (reg[i] == '.') {
        std::vector<size_t> first = buffer_[buffer_.size() - 1];
        buffer_.pop_back();
        std::vector<size_t> second = buffer_[buffer_.size() - 1];
        buffer_.pop_back();
        buffer_.push_back(std::vector<size_t>(num + 1, inf));
        for (size_t k = 0; k < num + 1; k++) {
          for (size_t j = 0; j <= k; ++j) {
            buffer_[buffer_.size() - 1][k] = std::min(
                buffer_[buffer_.size() - 1][k], first[j] + second[k - j]);
          }
        }
      } else if (reg[i] == '*') {
        std::vector<size_t> prev = buffer_[buffer_.size() - 1];
        buffer_.pop_back();
        prev[0] = 0;
        while (true) {
        std::vector<size_t> tmp  = prev;
        for (size_t k = 0; k < num + 1; k++)
        {
          for (size_t j = 0; j <= k; ++j) {
            tmp[k] = std::min(
                tmp[k], prev[j] + prev[k - j]);
          }
        }
        bool id = true;
        for (size_t k = 0; k < num + 1; ++k) {
          if (tmp[k] != prev[k]){
            id = false;
            break;
          }
        }
        if (id) {
          break;
        }
        prev = std::move(tmp);
      }
      buffer_.emplace_back(prev);
      }
    }
  }

  size_t Answer () {
    return buffer_[buffer_.size() - 1] [num_of_];
  }
};

  int long long  Answer (const std::string &str, char x, size_t num) {
    RegularExp reg(str, x, num);
    return (reg.Answer() != inf ? int(reg.Answer()) : -1);
  }
#endif