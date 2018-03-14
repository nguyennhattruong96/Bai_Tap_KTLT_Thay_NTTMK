//
//  main.cpp
//  KTLT_Bai_077
//
//  Created by Nhat Truong on 3/6/18.
//  Copyright © 2018 Nhat Truong. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int s = 0;
    int n = 0;
    cout << "Nhap vao 1 so n : ";
    cin >> n;
    for (int i = 0; i <= n ; i++) {
        s += i;
    }
    cout << "ket qua cua phep toan tong tu 1 den " << n << " la : " << s << endl;
    return 0;
}
