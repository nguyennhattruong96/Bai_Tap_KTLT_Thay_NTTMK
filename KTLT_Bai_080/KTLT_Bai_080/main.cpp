//
//  main.cpp
//  KTLT_Bai_080
//
//  Created by Nhat Truong on 3/6/18.
//  Copyright © 2018 Nhat Truong. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int i, n;
    float x, S, T;
    long M;
    
    
    cout << "Nhap Vao So Nguyen x : ";
    cin >> x;
    
    cout << "Nhap vao So Nguyen n : ";
    cin >> n;
    
    S = 0;
    T = 1;
    M = 0;
    i = 1;
    
    while (i <= n) {
        T = T * x;
        M = M + i;
        S = S + T/M;
        i = i + 1;
    }
    
    cout <<"Ket Qua Cua Phep Toan La : " << S << endl;
    return 0;
}
