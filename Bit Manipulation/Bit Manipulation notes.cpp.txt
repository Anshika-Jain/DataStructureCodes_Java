//bit operations are fast because computer doesnt have to convert decimal to bits, we directly operate in bits.
//32 Bit decimal nos
//binary to decimal(multiply by 2^n)
//decimal to binary- divide by 2 and store remainder(reverse order)
//adding binary - 1+1 = 0 (1 carry) , 0+0 = 0 , 1+0 = 1
//additive/negative inverse of binary/2s complent - inverse all bits and add 1
//subtracting binary - add the negative inverse
//bitwise operators
    //xor - is 1 when both are different, is 0 when both are same
    //and - product
    //or - sum
    //not - opposite
    //rightwise operator - >> , shift to right, divide by 2 //we can write a>>2 instead of a/2(faster)
    //leftwise operator - << , shift to left , multiply by 2 //we can write a<<2 instead of a*2(faster)
//odd/even nos(we use BIT MASKING)(a & 1)//we can write a&1 == 0 instead of a%2 == 0(expensive operation)
    //odd nos - last bit is 1
    //even nos - last bit is 0
//swap nos(we use XOR)(Just 3 steps)
    //a = a^b
    //b = a^b
    //a = a^b
