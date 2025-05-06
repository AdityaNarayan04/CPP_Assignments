// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     int isprime = 0;
//     cout << "enter a number : " ;
//     cin >> num;
//     for (int i = 2; i <= num / 2; i++)
//     {
//         if (num % i == 0)
//         {
//             cout << "the number ["<<num<<"] is not prime" << endl;
//             isprime = 1;
//             break;
//         }
//     }
//     if (isprime == 0)
//     {
//         cout << "the number ["<<num<<"] is prime " << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int add(int a, int b);
void isprime(int n)
{
    int isprime = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << "the number [" << n << "] is not prime " << endl;
            isprime = 1;
            break;
        }
    }
    if (isprime == 0)
    {
        cout << "the number [" << n << "] is prime " << endl;
    }
}

int main()
{
    int num;
    int a,b;
    cout<<"enter two number a and b : "<<endl;
    cin>>a>>b;
    cout<<"the sum of a and b is : "<<add(a,b)<<endl;
    cout << "enter a number : ";
    cin >> num;
    isprime(num);
    return 0;
}


int add(int a, int b){
    return a+b;
}