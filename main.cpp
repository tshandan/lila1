//
//  main.cpp
//  lila1
//
//  Created by shandan on 15/11/11.
//  Copyright (c) 2015年 shandan. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    //NSLog(@"Hello, World!");
    int a[4];
    int *p;
    a[0]=12;
    a[1]=15;
    a[2]=25;
    a[3]=55;
    p=a;
    printf("&a[0]=%x &a[1]=%x &a[2]=%x &a[3]=%x a=%x *p=%x ",&a[0],&a[1],&a[2],&a[3],a,*p);

    return 0;
}
