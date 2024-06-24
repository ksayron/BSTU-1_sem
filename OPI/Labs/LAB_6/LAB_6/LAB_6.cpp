#include <iostream>
using namespace std;

int getSum(int x,int y);
int getMul(int x,int y);

int main()
{
    int result_getSum,result_getMul,param2,param1 = 5;
    for (int i = 0; i < 5; i++) {
        param2 = param1 + i;
        cout << "i = " << i;
        result_getSum=getSum(param1, param2);
        cout<<result_getSum<<endl;
    }
    result_getMul = getMul(param1, param2);
    cout << result_getMul << endl;
}