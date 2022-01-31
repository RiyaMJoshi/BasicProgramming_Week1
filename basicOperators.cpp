#include <iostream>

using namespace std;

int main() {
    
    long int d;
    long int o1,o2,o3;
    long int c1,cb,cm,ck;
    long int online,classic;

    cin>>d;
    cout<<endl;
    cin>>o1>>o2>>o3;
    cout<<endl;
    cin>>c1>>cb>>cm>>ck;
    cout<<endl;

    online=o1+o3*(d-o2);
    classic=cb+((d/c1)*cm)+(d*ck);
    
    if(online<=classic)
        cout<<"Online Taxi"<<endl;
    else
        cout<<"Classic Taxi"<<endl;     
}