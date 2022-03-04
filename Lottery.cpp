#include <iostream>

int main() {
    
    std::cout<<"Welcome to the lottery program "<<std::endl;
    srand(time(0));
    int random_num = 1+(rand()%99);
    
    int random_num_digit1 = random_num/10;
    int random_num_digit2 = random_num%10;
    
    int guess_num;
    std::cout<<"Guess and enter two digit number : ";
    std::cin>>guess_num;
    
    int guess_num_digit1 = guess_num/10;
    int guess_num_digit2 = guess_num%10;
    
    if (random_num_digit1 == guess_num_digit1){
        if (random_num_digit2 == guess_num_digit2){
            std::cout<<"You won lottery of RS 10,000 ";
        }
    }
    else if (random_num_digit1 == guess_num_digit2 and random_num_digit2 == guess_num_digit1){
        std::cout<<"You won lottery of RS 3,000 ";
    }
    else if (random_num_digit1 == guess_num_digit1 or random_num_digit2 == guess_num_digit2 or random_num_digit1 == guess_num_digit2 or random_num_digit2 == guess_num_digit1){
        std::cout<<"You won lottery of RS 1,000";
    }
    else{
        std::cout<<"Sorry ! number you have entered doesn't matches with lottery number";
    }
    
    return 0;
}