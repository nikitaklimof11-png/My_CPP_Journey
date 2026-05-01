#include <bits/stdc++.h>

using namespace std;

int main(){
    string a[10000];//Название страны
    long double b[10000],//Зарплата
    d[10000],//траты
    c[10000],//Налог
    ostatok=0,zp;// остаток денег с учётом вычета налога и зп с вычетом налога
    int n,
    best; //индекс лучшей страны
    cout<<"How many options do you have?";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"Option"<<i+1<<'\n';
        cout<<"Enter your country\n";
        cin>>a[i];
        cout<<"Enter your proposed salary\n";
        cin>>b[i];
        cout<<"Introduce a payroll tax in the country(%)\n";
        cin>>c[i];
        cout<<"Enter the amount of necessary expenses in the country (accommodation, food)\n";
        cin>>d[i];
    }
    best=0;
    for (int i=0;i<n;i++){
        if (c[i]>0){
        zp=b[i]-b[i]/100.0*c[i];
    } else if (c[i]==0){
        zp=b[i];
    }
        if (abs(zp-d[i])>ostatok){
            ostatok=zp-d[i];
            best=i;
        }
    }
    cout<<"The most profitable country to live in:"<<a[best]<<'\n'<<"Remainder:"<<ostatok;
}
