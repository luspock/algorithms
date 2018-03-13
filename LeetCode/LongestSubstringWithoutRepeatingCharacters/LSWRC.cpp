#include <unordered_map>
#include <iostream>
#include <string>

int lengthOfLongestSubstring(std::string s){
	std::unordered_map<char, int> smap;
	int n = s.length();
	int max_length = 0;
	if(n<2){
		return n;
	}
	for(int i=0,j=0;j<n;++j){
		char c = s.at(j);
		if(smap.count(c)){
			i=smap[c]>i?smap[c]:i;
		}
		smap[c]=j+1;
		max_length = max_length<(j-i+1)?(j-i+1):max_length;
	}
	return max_length;
};

int main(int argc, char **argv){
	std::string test_s = "pwwerkw";
	std::cout<< test_s<<"\n";
	std::cout<<lengthOfLongestSubstring(test_s)<<"\n";
	return 0;
};
