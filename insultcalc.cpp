// THERE IS A LOT OF SWEARING

#include <iostream>
#include <string>

int main()
{
    int rando;
    char op;
    double num1;
    double num2;
    double result;
    std::string insults1[] = { "ENTER THE FIRST NUMBER YOU NO BITCH HAVING TWAT", "ENTER THE FIRST NUMBER YOU STUPID NIG-"};
    std::string insults[] = {"PICK A OPERATION OR KYS YOU FAT FUCK!", "ENTER THE GODAMN OPERATION YOU COTTON PICKER!", "IF YOU DON'T PICK I WILL PULL UP YOUR SEARCH HISTORY AND SHOW IT TO YOUR WHOLE FAMILY AND I'LL LEAK IT ON FACEBOOK TOO", "Enter the operations OR ARE YOU SO GOD DAMN INEPT THAT YOU CANT HIT A FUCKING KEYBOARD!"};
    std::string insults2[] = { "ENTER THE SECOND FUCKING NUMBER BITCH OR ARE YOU AUTISTIC??!!", "ENTER THE SECOND NUMBER YOU LITTLE SHIT YOU GET ABSOLUTLEY NO BITCHES" };
    std::cout << insults[rand() % 4] << " (-or +or *or /)";
    std::cin >> op;
    std::cout << insults1[rand() % 2];
    std::cin >> num1;

    std::cout << insults2[rand() %2];
    std::cin >> num2;

    switch (op) {
    case '+':
        result = num1 + num2;
        std::cout << "Your fucking result is: " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        std::cout << "Your fucking result is: " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        std::cout << "Your fucking result is: " << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        std::cout << "Your fucking result is: " << result << '\n';
        break;
    default:
        std::cout << " INVALID RESPONSE re-enter it you little shit!";
        break;
    }

}