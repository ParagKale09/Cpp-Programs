#include <iostream>

int main() {
    
    std::cout<<"The python Triplets are :"<<std::endl;
    
    for (int i=1;i<=500;++i){
        for (int j=1;j<=500;++j){
            for (int k=1;k<=500;++k){
                if (i*i==(j*j)+(k*k) and j<k){
                    std::cout<<"("<<j<<","<<k<<","<<i<<")"<<std::endl;
                }
            }
        }
    }
    
    std::cout<<"End";

    return 0;
}