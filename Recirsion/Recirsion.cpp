#include <iostream>

using namespace std;

void foo(int num, int numS)
{
    int res;
    res = num % numS;
    num /= numS;
    /*res = num % numS;*/
    if (num>=numS)
    {
        foo(num, numS);
        cout << res;
    }
    else
    {
        cout << num;
        cout << res;
        
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    int num, numS;
    float res;
    cout << "Введите натуральное число"<<endl;
    cin >> num;
    cout << "Введите количество знаков новой системы счисления"<<endl;
    cin >> numS;
    if (numS == 10)
    {
        cout << num;
    }
    else
    {
        foo(num, numS);
    }
    
    
}


