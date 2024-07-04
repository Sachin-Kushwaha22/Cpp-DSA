#include <iostream>
using namespace std;

int sum_of_digits(int n)
{
    int sum=0;
    while (n > 0)
    {

        int digit = n % 10; // get the rightmost digit
        sum = sum + digit;  // add it to sum
        n = n / 10;         // remove the rightmost digit
    }
    return sum;
}
int product_of_digits(int n)
{
    int mul=1;
    while (n > 0)
    {

        int digit = n % 10; // get the rightmost digit
        mul = mul * digit;  
        n = n / 10;         
    }
    return mul;
}

int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    cout<<product_of_digits(n)<<endl;
    cout<<sum_of_digits(n)<<endl;
    int diff=product_of_digits(n)-sum_of_digits(n);
    cout<<"DIFFERENCE BETWEEN PRODUCT AND SUM OF DIGITS OF THE GIVEN NUMBER IS : " <<diff<<endl;
    return 0;
}