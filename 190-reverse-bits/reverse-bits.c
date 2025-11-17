int reverseBits(int n) {
    int bin = 0;
    int result  = 0;

    for(int i = 0; i < 32; i++) {
         bin = n & 1;
         result = (result << 1) | bin;
         n = n >> 1;
    }

    return result;
}