#ifndef SlowTyping_H
#define SlowTyping_H

#include <iostream>
#include <string>
#include <thread>
#include <chrono>

class SlowTyping {
  const std::string& sp;
public:
  SlowTyping(const std::string& s) : sp(s) {}
  friend std::ostream& operator<<(std::ostream& os, const SlowTyping& str);
};

#endif