#include <iostream>         

/*
This func will count total bytes
*/   
int countBits(int n);

int main()
{
    int i;
    std::cin>>i;
    std::cout<<countBits(i);
    return 0;
}
int countBits(int n)
{
/*
This func will count total bytes
*/
    //with shift
   int count = 0;
   while (n)
   {
        count++;
        n >>= 1;
    }
    return count;
}
