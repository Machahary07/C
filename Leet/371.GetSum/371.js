function getSum (a, b) { // take two integers a and b
    while (b !== 0) { // loop until there is no carry
        let carry = (a & b) << 1; // calculate carry
        a = a ^ b; // bit wise XOR for sum without carry
        b = carry; // update b to carry
    }
    return a; // return the sum
}

//calculation
/**
 * Suppose a is 1 and b is 2
 * in binary 1 is 0001 (or just 1)
 * in binary 2 is 0010 (or just 10)
 * First Iteration:
 * carry = (1 & 2) << 1 = 0 << 1 = 0
 * a = 1 ^ 2 = 3 (in binary: 11)
 * b = carry = 0
 * Since b is now 0, we exit the loop and return a which is 3.
 * */

console.log(getSum(1, 2));