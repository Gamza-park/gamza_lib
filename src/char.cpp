#include "char.h"

using namespace std;

// Split Fun
    std::vector<std::string> split(std::string input, std::string standard) {
        std::vector<std::string> output;
        std::string text = "";
        int cnt = 0;
        for(int i=0; i<input.size(); i++){
        
            if(input[i] != standard[0]){
                text += input[i]; 
            }
            if(input[i] == standard[0]){
                output.push_back(text);
                text = "";
            }
            else if(i == input.size()-1){
                output.push_back(text);
            }      
        }
        return output;
    }

// int to str
std::string itos(int integer){
    std::stringstream ss;
    ss << integer;
    return ss.str();
}

// Reverse
std::string ReverseString(const std::string src)
{
      std::string reverse;
 
      for(int i=0;i<src.size();i++)
            reverse+=src.substr(src.size()-i-1,1);
 
      return reverse;
}