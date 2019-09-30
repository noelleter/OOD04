//
//  main.cpp
//  OOD04
//
//  Created by 김노은 on 23/09/2019.
//  Copyright © 2019 Noeun-Kim. All rights reserved.
//

#include <iostream>



int increment(int x){
    ++x;
    return x;
}

int main() {
    int x = 55;
    
    std::cout << "Before increment: " << x << std::endl;
    x = increment(x);
    std::cout << "After increment: " << x << std::endl;
    
    system("pause");
    
    return 0;
}
