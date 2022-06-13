#include <iostream>
#pragma once;

struct dot{
    double x = 0;
    double y = 0;
};

void enter(dot &a){
    std::cout <<"\nEnter coordinates: \n";
    std::cin >> a.x >> a.y;
}


void scalpel(dot &a, dot &b){
    std::cout << "\nCut between " << a.x << " " << a.y << " and " << b.x << " " << b.y << std::endl;
}


void hemostat (dot &a){
    std::cout << "\nHemostat at " << a.x << " " << a.y <<std::endl;
}

void tweezers(dot &a){
    std::cout << "\nTweezed at " << a.x << " " << a.y <<std::endl;
}

void suture(dot &a, dot &b){
    std::cout << "\nSutered between " << a.x << " " << a.y << " and " << b.x << " " << b.y << std::endl;

}

int compare(dot &a, dot &b){
    if(a.x == b.x && a.y == b.y)
        return 1;
    return 0;
}