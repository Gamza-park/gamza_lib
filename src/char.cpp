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
