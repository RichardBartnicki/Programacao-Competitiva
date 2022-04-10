#include <iostream>
#include <deque>
 
using namespace std;
 
int i, j, n, d, m=-1, m_i=0, s=0, d_t;
string a;
deque<int> r;
 
void program(){
    cin>>n>>d>>a;
    d_t=d;
    cout<<a<<endl;
    for(j=0;j<n-d;j++){
        cout<<"Numeros em analises: (de "<<m_i<<" ate "<<d_t<<") ";
        //i<=n-d_t
        for(i=m_i;i<=d_t;i++){
            cout<<a[i]-'0'<<" "; 
            if(a[i]-'0'>m){
                m = a[i]-'0';
                m_i=i+1;
            }
        }
        cout<<endl<<"Maior numero selecionado: "<<m<<endl<<"---------------------"<<endl;
        r.push_front(m);
        m=-1;
        d_t++;
    }
 
    s=0;
    m_i=0;
 
    cout<<"Resultado: ";
    while(!r.empty()){
       cout<<r.back();
       r.pop_back();
    }
    cout<<endl;
}
 
int main()
{
    program();
    cout<<"------------Proximo-------------"<<endl<<endl;
    while(n != 0 && d != 0){
        program();
        cout<<"------------Proximo-------------"<<endl<<endl;
    }
 
    return 0;
}