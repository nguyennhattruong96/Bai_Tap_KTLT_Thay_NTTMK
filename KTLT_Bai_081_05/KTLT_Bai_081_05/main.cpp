//
//  main.cpp
//  KTLT_Bai_081_05
//
//  Created by Nhat Truong on 3/14/18.
//  Copyright © 2018 Nhat Truong. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    float i;
    float s;
    
    cout << "Nhap Vao Gia Tri n : ";
    cin >> n;
    
    s = 0;
    i = 0;
    
    while (i <= n) {
        s = s + (1 / ((2 * i) + 1));
        i++;
    }
    
    cout << "Ket Qua Cua Phep Toan La : " << s << endl;
    return 0;
}
