//
//  main.cpp
//  FINAL_02
//
//  Created by Charley Teltschik on 5/19/24.
//

#include <iostream>
#include <stdexcept>
#include <string>

/*
 Sum the integers from 1 to n; if n = 5, then sum = 1+2+3+4+5 = 15
 @param n integer upon upper bound os summation
 @pre n >= 1
 @post return value is the sum of the integers from 1 to n
 @return sum of integers from 1 to n, where n is specified in an argument or 0 if an error occurred
 */
unsigned long sigma(unsigned long n){
    
    unsigned long sum = 0;
    std::string preMessage = "Precondition n>1 violated; invalid value for argument n: " +
                            std::to_string(n) + " Loc: " + __FILE__ + ", " + std::to_string(__LINE__) + ")";
    std::string postMessage = "Postcondition sum == (n(n+1))/2 violated sum: " +
                            std::to_string(sum) + "; n(n+1)/2: " + std::to_string((n * (n + 1))/2) +
                            " Loc: " + __FILE__ + ", " + std::to_string(__LINE__) + ")";
    
    try{
        if (n < 1){
            throw std::runtime_error(preMessage);}
        
        for (int i = 0; i <= n; i++){
            sum += i;}
        
        if (sum != (n * (n + 1) / 2)){
            throw std::runtime_error(postMessage);}
    }
    catch(std::runtime_error & ex){
        std::cout << "Exception: " << ex.what() << std::endl;
        std::cout << "Cannot compute sum; returning 0" << std::endl;
        sum = 0; //returned to indicate error
    }
    
    return sum;
};



int main() {
    int sum = sigma(5);
    std::cout << "sigma(5) = " << sum << std::endl;
    sum = sigma(0);
    std::cout << "sigma(0) = " << sum << std::endl;
    
    return 0;
}
