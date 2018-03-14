//
//  main.cpp
//  KTLT_Bai_078
//
//  Created by Nhat Truong on 3/6/18.
//  Copyright © 2018 Nhat Truong. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0;
    cout << "nhap vao so nguyen duong n : ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << "Uoc So Cua " << n << " La: " << i << endl;
        }
    }
    return 0;
}
