 #include <bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cout<<"enter the percentage of the student : " ;
    cin>>n;
    if (n>=90 && n<=100)
    cout<<"grade a1"<<endl;
    else if (n>=80 && n<=90)
    cout<<"grade a2"<<endl;
    if (n>=70&& n<=80)
    cout<<"grade b1"<<endl;
    else if (n>=60 && n<=70)
    cout<<"grade b2";
    else if (n>=50 && n<=60)
    cout<<" grade c1";
    else if (n>=40 && n<=50)
    cout<<"grade c2";
    if (n>=30&& n<=40)
    cout<<"grade d"<<endl;
    else 
    cout<<"grade f"<<endl;
}