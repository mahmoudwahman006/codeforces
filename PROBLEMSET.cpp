#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){

/*                              code watermelon
    int x;
    cin>>x;
    if(x>2){
        if(x%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;}
    else
        cout<<"NO"<<endl;
     */

/*                            code 71A way too long words
    int t,z;
    cin>>t;
    while(t>0){
        string x;
        string s,q;
        cin >>x;
         z = x.length();
         if(z>10){
            s = x.at(0);
            q = x.at(z-1);
            cout<<s<<z-2<<q<<endl;
         }
         else
            cout<<x<<endl;
         t--;

    }
    */

/*                             code 231A team
    int n,counter=0;
    cin>>n;
    while(n>0){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        if(n1+n2+n3>1)
            counter++;
            n--;}
cout<<counter<<endl;
*/

                            /* code theatre square   revsion

long long m,n,a,x,y;
cin>>n>>m>>a;
x = m / a ;
if(m%a!=0){
    x++;
}
y=n/a;
if(n%a!=0){
    y++;
}
cout<<x*y<<endl;
*/

/*                                      code boy or girl
string x;
bool z = true;
int coun =0;
cin>>x;
if(len(x)<=100){
for(int i =0;i<len(x);i++){
if(x[i]>=97&&x[i]<=122){
    z=false;
    coun++;
}
}
if(z==false){
    if (len(x)%2==0){
    cout<<"IGNORE HIM!"<<endl;}
    else
        cout<<"CHAT WITH HER!"<<endl;
}
}
*/

 /*                                      code Bit++
int n;
cin>>n;
int coun =0;
while(n>0){
    string s = "";
    cin>>s;
    if(s=="X++"||s=="++X"){
        coun++;}
    else if(s=="X--"||s=="--X"){
        coun--;}
        n--;
}
cout<<coun<<endl;
*/

/*                                       A.Next Round
int n,k,coun=0;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    if(arr[i]>=arr[k-1]&&arr[i]>0)
        coun++;
}
cout<<coun<<endl;
*/

/*                                          A. Domino Piling
int m,n;
cin>>m>>n;
if(m>1&&n>1&&m<16&&n<16){
cout<<(m*n)/2<<endl;
}*/

/*                                          A. Beautiful Matrix
int x,z=0;
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        cin>>x;
        if(x==1){
            z = abs(i-3)+abs(j-3);}}}
cout<<z<<endl;
*/

/*                                               petya and string
XXXXXXXXXXXXXXXXXXXXXXXXXX
string s =" ",a =" ";
int z=0,x=0;
cin>>s;
cin>>a;
char srr[s.length()];
char arr[a.length()];
for(int i=0;i<s.length();i++){
   s[i] = tolower(s[i]);
   a[i] = tolower(a[i]);
   srr[i]=s[i];
   arr[i]=a[i];
   z +=int(srr[i]);
   x += int(arr[i]);
}
if(z>x){
    cout<<1<<endl;}
else if (x>z){
    cout<<-1<<endl;}
else if(z==x){
    cout<<0<<endl;}
*/
/*                            A. Helpful Maths
string q;
cin>>q;
string newq = q;
int c=0;
for(int i=0;i<q.size();i+=2){
    if(q[i]==1){
        newq[i]==q[i+c];
        c+=2;}
    if(q[i]==2){
        newq[i]==q[i];
        c+=2;}
    if(q[i]==3){
        newq[i]==q[i];
    }
}
*/
/*                                  soldier and bananas
int pric,mymany,num,cost=0;
cin>>pric;
cin>>mymany;
cin>>num;
for(int i=1;i<=num;i++){
    cost+=pric*i;}
    if(cost>mymany){
    cout<<(cost-mymany);}
    else
        cout<<0;
*/
/*                                    elephant
int num,x;
cin>>num;
if(num%5==0){cout<<(num/5)<<endl;}
else if(num%5!=0){cout<<(1+(num/5))<<endl;}
*/
/*                                   Word
string s;
cin>>s;
int count_lower=0,count_upper=0;
for(int i=0;i<s.size();i++){
    if(s[i]== tolower(s[i])){count_lower++;}
    else {count_upper++;}}
if(count_lower<count_upper){
    for(int i=0;i<s.size();i++){
        s[i]=toupper(s[i]);}}
else {
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);}}
cout<<s<<endl;
*/
/*                                    Football
string x,flag="NO";
cin>>x;
for(int i=0;i<x.size();i++){
if(x[i]==x[i+1]&x[i]==x[i+2]&x[i]==x[i+3]&x[i]==x[i+4]&x[i]==x[i+5]&x[i]==x[i+6])
    flag = "YES";}
cout<<flag<<endl;
*/
/*                                      wrong subtraction
int x,y;
cin>>x;
cin>>y;
for(int i=0;i<y;i++){
if(x%10!=0){x=x-1;}
else {x=x/10;}
}
cout<<x<<endl;
*/
/*
int x;
cin>>x;
string flag = "true";
for(int i=0;i<x.size();i++){
    if(x[i]=="4"|x[i]=="7"){flag="true";}
    else {flag="false";
    break;}}
if(flag="true"){cout<<"YES"<<endl;}
else {cout<<"NO"<<endl;}                                           A. Nearly Lucky Number
*/
/*                                           A. Translation
string s,t,flag ="True";
cin>>s;
cin>>t;
for(int i=0;i<s.size();i++){
    int a = s.size()-i-1;
    if(s[i]==t[a]){flag="True";}
    else {
        flag="False";
        break;}
    }
if(flag=="True"){cout<<"YES"<<endl;}
else {cout<<"NO"<<endl;}
*/

return 0;
}

