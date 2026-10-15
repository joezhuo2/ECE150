#include <iostream>
#include <cassert>

void pattern(unsigned int n) {
    if (n == 0) {
        std::cout << "*" << std::endl;
        return;
    }

    for (unsigned int i = 0; i <= n; ++i) {
        for (unsigned int s = 0; s < i; ++s) {
            std::cout << " ";
        }
        unsigned int num_asterisks = 2 * (n - i) + 1;
        for (unsigned int j = 0; j < num_asterisks; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (unsigned int i = 1; i <= n; ++i) {
        for (unsigned int s = 0; s < (n - i); ++s) {
            std::cout << " ";
        }
        unsigned int num_asterisks = 2 * i + 1;
        for (unsigned int j = 0; j < num_asterisks; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

unsigned int log10(unsigned int n) {
    assert(n != 0);

    unsigned int count = 0;
    while (n >= 10) {
        n /= 10;
        ++count;
    }
    return count;
}

unsigned int count(unsigned int n, unsigned int bit) {
    assert(bit == 0 || bit == 1);

    unsigned int target_count = 0;
    for (unsigned int i = 0; i < 32; ++i) {
        if (((n >> i) & 1U) == bit) {
            ++target_count;
        }
    }
    return target_count;
}

unsigned int swap_bytes(unsigned int n, unsigned int bo, unsigned int b1) {
    assert(bo <= 3);
    assert(b1 <= 3);

    if (bo == b1) {
        return n;
    }

    unsigned int byte_o = (n >> (bo * 8)) & 0xFFU;
    unsigned int byte_1 = (n >> (b1 * 8)) & 0xFFU;

    unsigned int mask = ~((0xFFU << (bo * 8)) | (0xFFU << (b1 * 8)));
    unsigned int cleared_n = n & mask;

    unsigned int swapped_n = cleared_n | (byte_o << (b1 * 8)) | (byte_1 << (bo * 8));

    return swapped_n;
}
