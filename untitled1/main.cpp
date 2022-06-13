#include <iostream>
#include "operations.h"
#include <string>

int main() {
    dot a,b,c,d,e,f;
    bool mark1 = 1, mark2 = 0, mark3 = 0, mark4 = 0;
    std::string line;
    while(1){
        std::cout << "\nEnter command: \n";
        std::cin >> line;
        if(line == "scalpel" && mark1){
            enter(a);
            enter(b);
            scalpel(a,b);
            mark1 = 0;
            mark2 = 1;
        }
        if(line == "hemostat" && mark2){
            enter(c);
            if(!compare(a,c) && !compare(b,c))
                std::cout << "\nInvalid coordinates\n";
            else {
                hemostat(c);
                mark2 = 0;
                mark3 = 1;
            }
        }
        if(line == "tweezers" && mark3){
            enter(d);
            if(!compare(a,c) && !compare(b,c))
                std::cout<< "\nInvalid coordinates\n";
            else {
                tweezers(c);
                mark3 = 0;
                mark4 = 1;
            }
        }
        if(line == "suture" && mark4){
            enter(e);
            enter(f);
            if((compare(e, a) && compare(f,b)) || (compare(e,b) && compare(f,a))) {
                suture(e, f);
            break;
            }
        }
    }
    std::cout << "\nOperation completed";
    return 0;
}
