#include <cstring>
#include <iostream>
#include "producer_consumer.h"

int main(int argc, char *argv[]) {
  int consumer_count, sleep;
  bool debug = false;

  if (argc > 2) {
    consumer_count = std::atoi(argv[1]);
    sleep = std::atoi(argv[2]);
    if (argc > 3) {
      debug = !std::strcmp(argv[3], "-debug");
    }
  } else {
    std::cout << "not enough arguments";
    return 1;
  }

  std::cout << run_threads(consumer_count, sleep, debug) << std::endl;
  return 0;
}