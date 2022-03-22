#include <iostream>
using namespace std;
class fahrenheitToCelsius
{
    public:
        void getIntoCelsius();
};
void fahrenheitToCelsius :: getIntoCelsius()
{
    float temp,tempInC;
    cout<<"Enter temperature in fahrenheit:\n";
    cin>>temp;
    tempInC = (temp-32)/1.8;
    cout<<"Temperature in celsius:"<<tempInC;
}
int main()
{
    float temp,tempInC;
    fahrenheitToCelsius f;
    f.getIntoCelsius();
    return 0;
}