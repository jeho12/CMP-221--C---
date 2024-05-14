#include <iostream>
#include <bitset>
// import bitset library that create a binary representation for each decimal value depending on how may is put as its parameter

int main() {
  //created a for loop for ease of coding
    for (int i = 0; i < 16; ++i) {//15 is the breakpoint here 
        std::bitset<4> binNum(i);//Assigning a variavle name, binNum,  to hold the value of a 4 digit bit 
        std::cout << "Decimal: " << i << " Binary: " << binNum << "\n";
        //displaying the result
    }
    return 0;
}
