//
//  main.cpp
//  KTLT_Bai_079
//
//  Created by Nhat Truong on 3/6/18.
//  Copyright © 2018 Nhat Truong. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n = 0;
    int dem = 0;
    cout << "Nhap Vao Day So Nguyen n : ";
    cin >> n;
    while (n > 0) {
        int t = n % 10 ;
        dem++;
        n = n / 10;
    }
    cout << "So Luong Chu So Cua So Nguyen Duong La : "  << dem << endl;
    return  0;
  
}
