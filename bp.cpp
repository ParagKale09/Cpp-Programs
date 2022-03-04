#include <iostream>

int main() {
    int diastolic;
    std::cout<<"Enter diastolic Blood pressure (mm HG) : ";
    std::cin>>diastolic;
    
    int systolic;
    std::cout<<"Enter systolic Blood pressure (mm HG) : ";
    std::cin>>systolic;
    
    if (diastolic<80 and 120<=systolic and systolic<=129){
        std::cout<<"Elevated blood pressure "<<std::endl;
    }
    else if (80<=diastolic and diastolic<=89 or 130<=systolic and systolic<=139){
        std::cout<<"Stage 1: Hypertension 1"<<std::endl;
    }
    else if (diastolic>=90 or systolic>=140){
        if   (diastolic>=120 or systolic>=180){
            std::cout<<"Danger Zone"<<std::endl;
        }
        else{
            std::cout<<"Stage:2 Hypertension "<<std::endl;
        }
    }
    else if (diastolic<=60 or systolic<=90){
        std::cout<<"Hypotension"<<std::endl;
    }
    else{
        std::cout<<"Ok"<<std::endl;
    }

    return 0;
}