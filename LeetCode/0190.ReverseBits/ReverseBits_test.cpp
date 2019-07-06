#include <iostream>

typedef unsigned int uint32_t;

uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
	uint32_t one_bit = 0;
        for(int i =0;i<32;i++){
	        one_bit = (n>>i)&0x01;
        	result = result | (one_bit<<(31-i));
        }
        return result;
}

int main(int argc, char **argv){
	uint32_t n = 43261596;
	std::cout<< n<<"\n";
	std::cout<< reverseBits(n)<<"\n";
	return 0;
}
