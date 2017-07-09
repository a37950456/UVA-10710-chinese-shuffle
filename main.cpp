//
//  main.cpp
//  Chinese Shu e
//
//  Created by Tina Tsai on 2017/7/3.
//  Copyright © 2017年 Tina Tsai. All rights reserved.
//
/*
• If N is even, the number of shu es is equal to the number of shu es for N − 1;
• The maximum number of shu es for N cards is N − 1;
• The values of N for which this maximum is attained (up to 53) are: 3, 5, 11, 13, 19, 29, 37 and 53.
 因此本題即是在計算2(N-1)%N是否等於1。
 1) If N is odd , N=N+1
 2) Set x = 2 and counter=1
 While(x!=1)
 {
 x = (x<<1)%(n-1)
 counter++
 }

 intput:
 54
 101
 144
 197
 1999999973
 1999999975
 -1
 ouput:
 54 is not a Jimmy-number
 101 is a Jimmy-number
 144 is not a Jimmy-number
 197 is a Jimmy-number
 1999999973 is a Jimmy-number
 1999999975 is not a Jimmy-number
*/

#include <iostream>

using namespace std;
int main(){
int n;
    
while(cin >> n)
{
    

        if ( (2^(n-1)) % n == 1 ){
            cout << n << " is a Jimmy-number"<< endl;   }
        else {
            cout << n << " is not a Jimmy-number"<< endl; }
        if (n == -1 && n<54 && n>2000000000)
            break;
        }

    return 0 ;
}
