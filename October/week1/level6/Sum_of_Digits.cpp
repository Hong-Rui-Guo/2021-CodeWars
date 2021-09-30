int digital_root(int n)
{
    int sum = 0;
    int quotient, remainder;
    std::vector<int> data;

    quotient = n;

    // divide number into digit
    while(true)
    {
        if(quotient < 10)
        {
            remainder = quotient;
            data.push_back(remainder);
            break;
        }
        else
        {
            remainder = quotient % 10;
            quotient = quotient / 10;
            data.push_back(remainder);
        }
    }

    // get sum of digits
    for(int i=0;i<data.size();i++)
    {
        sum = sum + data.at(i);
    }

    // judge whether sum has more than one digit
    if(sum < 10)
    {
        return sum;
    }
    else
    {
        return digital_root(sum);
    }
}


/*
// method2 
int digital_sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int digital_root(int n)
{
    while (n >= 10)
        n = digital_sum(n);  
    return n;
}
*/
