//
//  main.c
//  FizzBuzz
//
//  Created by edl on 2/22/13.
//  Copyright (c) 2013 Erik Lorenzana. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    for (int i = 1; i < 101; i++){
        if (i % 3 == 0 && i % 5 == 0){
            printf("%s\n", "Fizz Buzz");
        } else {
        if(i % 3 == 0){
            printf("%s\n", "Fizz");
            } else {
            if(i % 5 == 0){
                printf("%s\n", "Buzz");
                }
                else {
                printf("%i\n", i);
                }
            }
        }
    }
}
