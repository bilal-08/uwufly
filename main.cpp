#include <iostream>
#include <string>
#include "lib/uwuify.h"
int main(int argc,char** argv){
    if(argc<=1){
        std::cout<< "no arguement was passed";
        return 0;
    }
    std:: string args;

    for(int i=1;i<argc;i++){
        args+= argv[i];
        args+=" ";
    }
    std::cout<<uwuify(args);
}