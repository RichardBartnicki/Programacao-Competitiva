#include <iostream>

using namespace std;

int i, j, n=1, d=1, m, m_i, base=0, limite=0;
string a;

void program(){


    cin>>n>>d>>a;
    limite=d;
    base = 0;


    for(j=0;j<n-d;j++){
        m=-1;
        m_i=d+1;
        for(i=base;i<=limite;i++) {
            if(((a[i]>m) || (a[i]==m && i<m_i))){
                m = a[i];
                m_i = i;
                base=i+1;
            }
        }
        cout<<m-'0';
        limite++;
    }   
    cout<<endl;
}

int main()
{

    while(n != 0 && d != 0){
        program();
    }

    return 0;
}