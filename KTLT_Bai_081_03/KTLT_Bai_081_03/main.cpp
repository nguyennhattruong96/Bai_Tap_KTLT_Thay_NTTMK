//
//  main.cpp
//  KTLT_Bai_081_03
//
//  Created by Nhat Truong on 3/14/18.
//  Copyright © 2018 Nhat Truong. All rights reserved.
//

#include <iostream>
using namespace  std;

int main(int argc, const char * argv[]) {
    int n;
    float i;
    float s;
    
    cout << "Nhap Vao Gia Tri Cua n : ";
    cin >> n;
    
    s = 0;
    i = 1;
    
    while (i <= n) {
        s = s + (1 / i);
        i = i + 1;
    }
    
    cout << s << endl;
    return 0;
}
