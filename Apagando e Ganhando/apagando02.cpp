#include <iostream>
#include <deque>

using namespace std;

int i, j, n, d, m[100000], m_i=0, s=0, d_t;
string a, b;
deque<int> r;

void program(){


    cin>>n>>d>>a;
    b = a;
    
    for(i=0;i<n;i++) m[i]=i;
    cout<<"Sequencia: "<<a<<endl;
    for(j=0;j<n;j++){
        for(i=0;i<n-1;i++) {
            
            if((a[i]>a[i+1]) || (a[i]==a[i+1] && m[i]>m[i+1])){
                cout<<"Troca "<< a[i]<<" ("<<m[i]<<") com "<< a[i+1]<<" ("<<m[i+1]<<") | Ficou: "<<a<<endl;
                swap(a[i], a[i+1]);
                swap(m[i], m[i+1]);
            }
        }
    }
    cout<<"Sequencia final: "<<a<<endl;
    cout<<"Peso final: "; 
    for(i=0;i<n;i++) cout<<m[i];
    cout<<endl;
    for(i=0;i<d;i++){
        b[m[i]] = 'a';
    }
    
    for(i=0;i<n;i++){
        if(b[i] != 'a') cout<<b[i];
    }
    
    cout<<endl<<"----------------"<<endl;
}

int main()
{
    program();
    while(n != 0 && d != 0){
        program();
    }

    return 0;
}