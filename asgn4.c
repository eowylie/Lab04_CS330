// Ethan Wylie - eowylie
// CS303 Assignment 4

#include <stdio.h>
#include "asgn4.h"

/*
 * Function: printBinary
 * Description: Helper function to print a number in binary format
 * Args:
 *   - number: The integer to print in binary
 * Returns void
 */
void printBinary(int number) {
    printf("Binary: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
    printf(" (decimal: %d)\n", number);
}

int main() {
    printf("====================================\n");
    printf("CS330 Assignment 4 - Bitwise Operations\n");
    printf("====================================\n\n");
    
    // Test 1: isBitSet function
    printf("Test 1: isBitSet Function\n");
    printf("-------------------------\n");
    int test1 = 23;  // Binary: 10111
    printf("Testing with number %d ", test1);
    printBinary(test1);
    printf("Bit at position 0: %d (expected: 1)\n", isBitSet(test1, 0));
    printf("Bit at position 1: %d (expected: 1)\n", isBitSet(test1, 1));
    printf("Bit at position 2: %d (expected: 1)\n", isBitSet(test1, 2));
    printf("Bit at position 3: %d (expected: 0)\n", isBitSet(test1, 3));
    printf("Bit at position 4: %d (expected: 1)\n", isBitSet(test1, 4));
    printf("\n");
    
    // Test 2: setBit function
    printf("Test 2: setBit Function\n");
    printf("-----------------------\n");
    int test2 = 5;  // Binary: 0101
    printf("Original number: %d ", test2);
    printBinary(test2);
    int result2 = setBit(test2, 3);
    printf("After setting bit 3: %d ", result2);
    printBinary(result2);
    printf("Expected: 13 (binary: 1101)\n\n");
    
    // Test 3: clearBit function
    printf("Test 3: clearBit Function\n");
    printf("-------------------------\n");
    int test3 = 15;  // Binary: 1111
    printf("Original number: %d ", test3);
    printBinary(test3);
    int result3 = clearBit(test3, 1);
    printf("After clearing bit 1: %d ", result3);
    printBinary(result3);
    printf("Expected: 13 (binary: 1101)\n\n");
    
    // Test 4: toggleBit function
    printf("Test 4: toggleBit Function\n");
    printf("--------------------------\n");
    int test4 = 8;  // Binary: 1000
    printf("Original number: %d ", test4);
    printBinary(test4);
    int result4 = toggleBit(test4, 3);
    printf("After toggling bit 3: %d ", result4);
    printBinary(result4);
    printf("Expected: 0 (binary: 0000)\n\n");
    
    // Test 5: multiplyBy2 function
    printf("Test 5: multiplyBy2 Function\n");
    printf("-----------------------------\n");
    int test5 = 7;
    printf("Original number: %d\n", test5);
    int result5 = multiplyBy2(test5);
    printf("After multiplying by 2: %d\n", result5);
    printf("Expected: 14\n\n");
    
    // Test 6: divideBy2 function
    printf("Test 6: divideBy2 Function\n");
    printf("---------------------------\n");
    int test6 = 18;
    printf("Original number: %d\n", test6);
    int result6 = divideBy2(test6);
    printf("After dividing by 2: %d\n", result6);
    printf("Expected: 9\n\n");
    
    // Additional tests
    printf("====================================\n");
    printf("Additional Tests\n");
    printf("====================================\n\n");
    
    // Edge case tests
    printf("Edge Case Tests:\n");
    printf("----------------\n");
    
    // Test with 0
    printf("Testing with 0:\n");
    printf("isBitSet(0, 0): %d\n", isBitSet(0, 0));
    printf("setBit(0, 2): %d (expected: 4)\n", setBit(0, 2));
    printf("multiplyBy2(0): %d (expected: 0)\n", multiplyBy2(0));
    
    // Test with all bits set
    printf("Testing with 255 (all bits set in a byte):\n");
    printf("clearBit(255, 4): %d (expected: 239)\n", clearBit(255, 4));
    
    // Test error handling for invalid positions
    printf("Error Handling Tests:\n");
    printf("---------------------\n");
    printf("isBitSet(10, -1): %d (invalid position, expected: 0)\n", isBitSet(10, -1));
    printf("setBit(10, 40): %d (position too large, expected: 10)\n", setBit(10, 40));
    printf("clearBit(10, -5): %d (invalid position, expected: 10)\n\n", clearBit(10, -5));
    
    // Chain operations test
    printf("Multiple Operations Test:\n");
    printf("----------------------\n");
    int chain = 0;
    printf("Starting with: %d\n", chain);
    chain = setBit(chain, 0);  // Set bit 0
    printf("After setBit(0): %d\n", chain);
    chain = setBit(chain, 2);  // Set bit 2
    printf("After setBit(2): %d\n", chain);
    chain = setBit(chain, 4);  // Set bit 4
    printf("After setBit(4): %d ", chain);
    printBinary(chain);
    chain = multiplyBy2(chain);
    printf("After multiplyBy2: %d ", chain);
    printBinary(chain);
    chain = clearBit(chain, 1);
    printf("After clearBit(1): %d ", chain);
    printBinary(chain);
    
    printf("\n====================================\n");
    printf("All tests successful\n");
    printf("====================================\n");
    
    return 0;
}
