//
//  main.cpp
//  base5-1
//
//  Created by suchao on 4/8/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;
int IntRevs(int n);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "input n:\n";
    int n;
    cin >> n;
    IntRevs(n);
    return 0;
}

int IntRevs(int n){
    bool zero = true;
    bool digit = true;
    int p;
    int q = n;
    while(digit){
        p = q % 10;
        q = q / 10;
        
        if(p != 0)
            zero = false;
        if(q == 0)
            digit = false;
        if (!zero)
            cout << p;
    }
    cout << endl;
    return 0;
};
