std::string even_or_odd(int number) 
{
    std::string result;

    // note1: number may be negative
    if(abs(number)%2 == 0)
        result = "Even";
    else if(abs(number)%2 == 1)
        result = "Odd";
    else
        result = "Error";

    return result;
}