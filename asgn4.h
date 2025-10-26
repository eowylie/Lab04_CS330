#ifndef __asgn4__
#define __asgn4__

/* the two lines above check to ensure
we haven't already included this header*/


/* your functions go here */
// Note: main() goes in the asgn4.c file

#include <stdio.h>

/*
 * Function: isBitSet
 * Checks if a bit at the given position is set or not
 * Args: 
 *   - number: The number to check
 *   - position: The bit position to check
 * Returns 1 if bit is set
 */
int isBitSet(int number, int position) {
    if (position < 0 || position >= (sizeof(int) * 8)) {
        return 0;  // Return 0 for invalid positions
    }
    // Create a mask with 1, hen AND with the number and check result
    return (number & (1 << position)) != 0;
}

/*
 * Function: setBit
 * Sets the bit at a given position to 1
 * Args:
 *   - number: The integer to modify
 *   - position: The bit position to set
 * Returns the modified number
 */
int setBit(int number, int position) {
    if (position < 0 || position >= (sizeof(int) * 8)) {
        return number;  // Return original number for invalid positions
    }
    
    // Use OR with a mask that has 1 at the desired position
    // This sets the bit to 1 without affecting other bits
    return number | (1 << position);
}

/*
 * Function: clearBit
 * Clears the bit at the given position
 * Args:
 *   - number: The integer to modify
 *   - position: The bit position to clear 
 * Returns the modified number with the bit cleared
 */
int clearBit(int number, int position) {
    if (position < 0 || position >= (sizeof(int) * 8)) {
        return number;  // Return original number for invalid positions
    }
    
    // Use AND with the complement of a mask that has 1 at the desired position
    // This clears the bit to 0
    return number & ~(1 << position);
}

/*
 * Function: toggleBit
 * Description: Flips the bit at the given position
 * Args:
 *   - number: The integer to modify
 *   - position: The bit position to toggle
 * Returns the modified number with the bit toggled
 */
int toggleBit(int number, int position) {
    if (position < 0 || position >= (sizeof(int) * 8)) {
        return number;  // Return original number for invalid positions
    }
    
    // Use XOR with a mask that has 1 at the desired position
    // XOR flips the bit: 0^1=1, 1^1=0
    return number ^ (1 << position);
}

/*
 * Function: multiplyBy2
 * Description: Multiplies an integer by 2 using left shift
 * Args:
 *   - number: The integer to multiply
 * Returns numberx2
 */
int multiplyBy2(int number) {
    // Left shift by 1 is equivalent to multiplying by 2
    // Each bit position represents a power of 2, shifting left increases the power
    return number << 1;
}

/*
 * Function: divideBy2
 * Description: Divides an integer by 2 using right shift
 * Args:
 *   - number: The integer to divide
 * Returns the number divided by 2
 */
int divideBy2(int number) {
    // Right shift by 1 is equivalent to dividing by 2
    // For negative numbers, this performs arithmetic right shift
    return number >> 1;
}

#endif
