#include <charconv>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <string>
#include <thread>

void sleep_seconds(double seconds) {
  std::chrono::duration<double> duration(seconds);
  std::this_thread::sleep_for(duration);
}

// no echo on windows, so we make this to help test the library
int main(int argc, char** argv) {
  bool print_space = false;
  if (argc != 2)
    return 1;
  double seconds = std::stod(argv[1]);
  sleep_seconds(seconds);
  return 0;
}
