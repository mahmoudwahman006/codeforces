#include <iostream>
#include<stdio.h>
#include<cmath>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
/*
// this function id for code Y (Easy Fibonacci)
int fibonacci(int n){
if(n<=1){return n;}
else{return fibonacci(n-1) + fibonacci(n-2);}
}
*/
int main()
{
                                                                       /* code A (1 to N )
    int N;
    cin >> N;
    for(int i = 1; i<=N ; i++){
        cout<<i<<endl;
    }
*/
                                                                      /* code B (Even Numbers )
    int N ;
    cin>>N;
    if(N<2){cout<<-1<<endl;}
    for(int i = 2 ; i<= N ; i=i+2){cout<<i<<endl;}
*/

                                                                      /* code c (Even Odd Positive and Negative)
    int x,z,c;
    int coun_neg = 0,coun_pos = 0,coun_even = 0 ,coun_ood = 0 ;
    cin>>x;
    int element[x];
    for(int i=0;i<x;i++){cin>>element[i];}
        for(int i=0;i<x;i++){
            if(element[i]<0){
                coun_neg+=1;
                z = element[i];
                c = abs(z);
                if(c%2==0){coun_even+=1;}
            else if (c%2!=0){coun_ood+=1;}}
            else if (element[i]>0){
                coun_pos+=1;
                if(element[i]%2!=0){coun_ood+=1;}
                else if (element[i]%2==0)
                    coun_even+=1;}
            else if (element[i]==0)
                coun_even+=1;}
    cout<<"Even: "<<coun_even<<endl;
    cout<<"Odd: "<<coun_ood<<endl;
    cout<<"Positive: "<<coun_pos<<endl;
    cout<<"Negative: "<<coun_neg<<endl;
*/
                                                    /* code D (Fixed Password )
    int x=0;
    cin>>x;
    while(x!=1999){
        cout<<"Wrong"<<endl;
        cin>>x;
    }
    cout<<"Correct"<<endl;
*/
                                                   /* code E (Max)
    int x,counter,m;
    cin>>x;
    int element[x];
    for(int i=0;i<x;i++){
        cin>>element[i];}
    m = element[0];
    for(int i =0;i<x;i++ ){
        if(m>element[i]){
            counter++;}
        else
            m=element[i];}
    cout<<m<<endl;
*/
                                                      /*  code f (Multiplication table)
    int x;
    cin>>x;
    for(int i = 1;i<=12;i++){
        cout<<x<<" * "<<i<<" = "<<(x*i)<<endl;
    }
*/

                                                        /* code G (Factorial)
    int t;
    cin>>t;
    while(t>0)
    {
        long long n,s=1;
        cin>>n;
        for(int i=1;i<=n;i++){
            s*=i;}
        cout<<s<<endl;
        t--;}
*/
                                                        /*code h  (One prime)
    int i;
    cin>>i;
    int c=2;
    int counter=0;
    if((i>=2)&(i<=100000)){
        for(int c=2;i>c;c++){
            if(i%c==0){
                counter+=1;}
        }
    if(counter==0){cout<<"YES"<<endl;}

    else {cout<<"NO"<<endl;}
}
*/
                                                            /* code I (palindrome)
    int num = 0, rev = 0, num_c ;
    cin>>num;
    num_c = num;
    while(num>0){
        rev = rev * 10 + (num%10);
        num = num / 10;
    }
    if(num_c == rev){cout<<rev<<"\n"<<"YES"<<endl;}
    else{cout<<rev<<"\n"<<"NO"<<endl;}
*/


                                                      /* code J (primes number from 1 to n)
    int z;
    cin>>z;
    for(int a=2;a<=z;a++){
    bool flag = true;
    for(int i=2;i<a;i++){
        if(a % i ==0 ){
            flag = false;
            break;}
    }
    if(flag == true ){cout<<a<<" ";}
    }
    cout<<endl;
*/
                                                    /* code k (Divisors)
    int x;
    cin>> x ;
    for(int i=1;i<=x;i++){
        if(x%i==0){cout<<i<<endl;}}
*/

                                                    /* code L (GCD)
    int a,b;
    cin>> a;
    cin>> b;
    int mine = min(a,b);
    int maxe = max(a,b);
    for(int i = mine ; i>=1 ; i--){
        if(mine % i == 0){
            if(maxe % i ==0 ){
                    cout<<i<<endl;
                    break;}}}
*/
                                                    /* M (Lucky Numbers)
    int a,b,ex,counter = 0;
    cin>>a>>b;
    for(int i = a ; i<= b ; i++){
        ex = i;
        bool flag = true;
        while(ex>0){
            if(ex%10 != 4 && ex%10 != 7 ){
                flag = false;
                break;}
            ex = ex/10;}
        if(flag == true){
            cout<<i<<" ";
            counter++;}}

    if(counter==0){cout<<-1<<endl;}
    cout<<endl;
*/
                                                   /*code N (Number Histogram)
    string s=" ";
    int a;
    cin>>s;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];}

    for(int i=0;i<a;i++){
        for(int q=1;q<=b[i];q++){
            cout<<s;
        }
    cout<<"\n";
    }
*/

                                             /*code O (Pyramid)
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int q=0;q<i;q++){
            cout<<"*";}
    cout<<"\n";}
*/

                                            /*code p (Shape1)
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int q=a;q>i;q--){
            cout<<"*";}
    cout<<"\n";}
*/
                                             /*code Q (digits AS Integer)
    int t;
    long long n;
    cin>>t;
    while(t>0){
        cin>>n;
        while(n>0){
            cout<<(n%10)<<" ";
            n = n/10;}
            cout<<endl;
            t--;
            }
*/
                                            /*code Q (digits AS String)
  int t;
  string x;
  cin>>t;
  while(t>=1&t<=10){
    cin>>x;
    for(int i=(x.length()-1);i>=0;i--){
    cout<< x[i]<<" ";}
    cout<<endl;
    t--;}
*/


                                            /*Code R (Sequence Of Numbers and Sum)
    int n, m,mine,maxe,sum;
    cin>>n;
    cin>>m;
    while(m > 0 && n > 0){
        sum = 0;
        mine = min(n,m);
        maxe = max(n,m);
        for(int i =mine; i <= maxe ; i++){
            sum = sum + i;
            cout<<i<<" ";}
            cout<<"sum ="<<sum<<endl;
            cin>>m;
            cin>>n;
            }
*/
                                                /*code S (Sum of Consecutive Odd Numbers)
    int t,sum=0,a=0,b=0;
    cin>>t;
    while(t>0){
        int sum =0;
        cin>>a;
        cin>>b;
        int i=0;
        if(a>=b){
        for(int i =(b+1);i<a;i++){
            if(i%2!=0){
                sum=sum+i;
    }}}
        else {
            for(int i =(1+a);i<b;i++){
            if(i%2!=0){
                sum=sum+i;
    }}}
        cout<<sum<<endl;
    t--;}
*/

                                                 /*code T (Shape2)
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
    for(int q=a;q>i;q--){
        cout<<" ";}
    for(int q=1;q<i*2;q++){
        cout<<"*";}
    cout<<"\n";}
*/

                                                    /*code U (Some Sums)
    int n,a,sum = 0,b,counter=0;
    cin>>n>>a>>b;
    for(int i=1 ; i<=n ; i++){
        int ex = i;
        while(ex>0){
            ex = ex/10;
            counter++;}
        if(counter==1){if(i>=a && i<=b ){sum = sum + i;}}
        else if(counter>1){
            int res = 0;
            ex = i;
            while(ex>0){
                res = res + (ex%10);
                ex = ex/10;}
            if(res>=a && res<=b){sum = sum + i;}}}
            cout<<sum<<endl;
*/


                                                     /*code v (PUM)
    int n,t=0;
    cin>>n;
    for(int i =0;i<n;i++){
        cout<< t+1<<" "<<t+2<<" "<<t+3<<" PUM"<<endl;
        t+=4;}
*/

                                                    /*code w (Shape3)
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int q=a;q>i;q--){
            cout<<" ";}
    for(int q=1;q<i*2;q++){
        cout<<"*";}
    cout<<"\n";}
    for(int i=a; i>0;i--){
        for(int w=a;w>i;w--){
            cout<<" ";}
    for(int z =1; z<i*2 ;z++){
    cout<<"*";}
    cout<<"\n";}
*/
                                                    /* code X (Convert To Decimal 2)*/
                                                    // Still not solved

                                                    /* code Y (Easy fibonacci without recursion)
    int n,n1=0,n2=1,sum=0;
    cin>>n;
    for(int i =1;i<=n;i++){
        if(i==1){
            cout<<n1<<" ";}
        else if(i==2){
            cout<<n2<<" ";}
        else {
            sum=n1+n2;
            cout<<sum<<" ";
            n1=n2;
            n2=sum;}
}
*/
                                                     /* code Y (Easy Fibonacci with recursion)
    // function fibonacci is up make sure it's not commented :
    int n,res;
    cin >> n;
    for(int i = 0 ; i<n ; i++){
    res = fibonacci(i);
    cout<<res<<" ";
    }
*/
                                                    /* code Z (Three Numbers)
    int k,s,counter=0;
    cin>>k;
    cin>>s;
    for(int x=0;x<=k;x++){
        for(int y=0;y<=k;y++){if(s-x-y>=0&& s-x-y<=k){counter++;}}}
    cout<<counter<<endl;

*/
return 0;
}


