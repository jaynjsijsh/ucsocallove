#include <string>
#include <thread>
#include <chrono>
#include "../header/SlowTyping.h"

  std::ostream& operator<<(std::ostream& os, const SlowTyping& str) {
    for (const auto& ch : str.sp) {
      os.flush() << ch;
      std::this_thread::sleep_for(std::chrono::milliseconds(0));
    }

    return os;
  }
