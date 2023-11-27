
#include <iostream>

int main() {
    //message
    std::cout << "Welcome to calculator";
    std::cout << "\n please input number to calculate";
    std::cout << "\n";
    std::cout << "first number : ";
    
    //var1
    float var1;
    std::cin >> var1;

    //var2
    std::cout << "\n second number : ";
    float var2;
    std::cin >> var2;

    //message2
    std::cout << "\n input operation : ";

    //choose operation
    char operation;
    std::cin >> operation;

    //operation selector
    switch (operation){

    case '+': {
    float res=(float)var1+var2;
    std::cout << "\n result is : " << res;
    break;
}

    case '-':{
        float res=(float)var1-var2;
        std::cout << "result is : " << res;
        break;
    }
    case '*':{
        float res=(float)var1*var2;
        std::cout << "result is : " << res;
        break;
    }
    case '/':{
        float res=(float)var1/var2;
        std::cout << "result is : " << res;
        break;
    }
}
}