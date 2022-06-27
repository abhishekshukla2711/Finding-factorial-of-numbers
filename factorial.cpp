#include <iostream>
using namespace std;
int main(){
    
    long a;
    int fctr=1;
    cout<<"Enter value "<<endl;
    cin>>a;

    for(int i=1;i<=a;i++)
    {
        fctr=fctr*i;
    }
    cout<<fctr<<endl;

    system("pause");
    return 0;
    
}