#include "serial.h"
#include <iostream>


int main() {
    Serial serial("/dev/tty1", 115200);

    if (!serial.open()) {
        std::cerr << "Failed to open port\n";
        return 1;
    }

    while (true) {
        std::string line = serial.readline();
        std::cout << "Got: " << line << "\n";
    }
}
