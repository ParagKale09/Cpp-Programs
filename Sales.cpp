#include <iostream>

int main() {
    int total_sales;
    int product_no;
    
    while(true){
        std::cout<<"product 1 — ₹ 98"<<std::endl;
        std::cout<<"product 2— ₹ 50"<<std::endl;
        std::cout<<"product 3— ₹ 99"<<std::endl;
        std::cout<<"product 4— ₹ 49"<<std::endl;
        std::cout<<"product 5— ₹ 68"<<std::endl;
        std::cout<<"Enter the product number : ";
        std::cin>>product_no;
        if(product_no<6){
            break;
        }
    }
    
    int qty_purchased;
    std::cout<<"Enter the quantity purchased : ";
    std::cin>>qty_purchased;;
    
    switch(product_no)
    {
        case 1:
        total_sales=98*qty_purchased;
        break;
        case 2:
        total_sales=50*qty_purchased;
        break;
        case 3:
        total_sales=99*qty_purchased;
        break;
        case 4:
        total_sales=49*qty_purchased;
        break;
        case 5:
        total_sales=68*qty_purchased;
        break;
    }
    
    std::cout<<"The total retail value of all products sold : ₹"<<total_sales<<std::endl;
    return 0;
}