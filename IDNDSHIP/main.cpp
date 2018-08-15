#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char n,b,B,c,C,f,F,d,D;
        cin>>n;
        if(n=='b'|| n=='B')
            cout<<"Battleship"<<endl;
        else  if(n=='c'|| n=='C')
            cout<<"Cruiser"<<endl;
         else if(n=='d'|| n=='D')
            cout<<"Destroyer"<<endl;
         else if(n=='f'|| n=='F')
            cout<<"Frigate"<<endl;



    }
    return 0;
}
