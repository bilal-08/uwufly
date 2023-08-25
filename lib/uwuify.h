#include <iostream>
#include <string>
#include <regex>
std::string uwuify(std::string s){

    std::regex r("[lL|rR]"),uwu("(to|you)"),joy("!");
    
    s = std::regex_replace(s,r,"w");
    s = std::regex_replace(s,joy,">w<");
    return std::regex_replace(s,uwu,"uwu");

}