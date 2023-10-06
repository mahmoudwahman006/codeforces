#include <iostream>
#include<stdio.h>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
                                                     /*Code A (Say Hello with c++)

	string name;
	cin >> name;
	cout << "Hello, "<<name;
    */

                                                     /*Code B (Basic DataTypes)

    int a ;
	long long b;
	char c;
	float d;
	double e;
	cin >> a >> b >> c >> d >> e;
	cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e <<endl;
	*/

	                                                     /*Code c (Simple calculator)
	long long x, y;
    cin >> x;
    cin >> y;
    cout << x << " + " << y << " = " << x + y<< endl;
    cout << x << " * " << y << " = " << x * y<< endl;
    cout << x << " - " << y << " = " << x - y<< endl;
	*/

	                                                     /* Code D (Difference)
	long long a,b,c,d,difference;
    cin>>a>>b>>c>>d;
    long long x= (a*b)-(c*d);
    cout<<"Difference = "<<x;
	*/

	                                                     /* code E (Area of circle)
	cout << fixed << setprecision(9);
    const double  pi = 3.141592653;
    double r, Area;
    cin>>r;
    Area = pi * r*r;
    cout<<Area;
	*/

	                                                     /* code F (Digits Summation)
	long long  m,n;
    cin>>m;
    cin>>n;
    cout<<(m%10)+(n%10);
	*/

	                                                     /* Code G (Summation from 1 to N)
    long long n;
    n=0;
    cin>>n;
    cout<<(n*(n+1))/2;
	*/

                                                         /* Code H (Two numbers)
    double a,b,c;
    cin>>a;
    cin>>b;
    c = a/b;
    cout<<"floor "<< a << " / "<< b << " = "<<floor(c)<<endl;
    cout<<"ceil "<< a << " / "<< b << " = "<<ceil(c)<<endl;
    cout<<"round "<< a << " / "<< b << " = "<<round(c)<<endl;
    */

                                                         /* Code I (Welcome for you with conditions)
    int a,b;
    cin>>a>>b;
    if(a>=b)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    */

                                                         /* Code j (Multiplies)
    long long  a,b,x;
        cin>>a>>b;
        if ((a%b==0) || (b%a==0))
            cout<<"Multiples";
        else
            cout<<"No Multiples";
    */

                                                         /* Code K (Max and Min)

        int a,b,c,d,e;
        cin>>a>>b>>c;
        d= min(a,b);
        e=max(a,b);
        cout<<min(c,d)<<" "<<max(c,e)<<endl;
    */

                                                         /* code L (The Brothers)
    string a,b,c,d;
    cin >>a>>b;
    cin>>c>>d;
    if(b==d)
        cout<<"ARE Brothers";
    else
        cout<<"NOT";
    */

    /*                                                  code M (Capital and small digits)
    char x ;
    x='a';
    cin >> x ;
    if ((int(x) >= 48) & (int(x) <=57)){
        cout<<"IS DIGIT"<<endl;}
    else if ((int(x)>=65) & (int(x)<=122)){
        cout<<"ALPHA"<<endl;}
    if((int(x)>=65)&(int(x)<=90))
        cout<<"IS CAPITAL";
    else if((int(x)>=97) & (int(x)<=122))
        cout<<"IS SMALL"<<endl;

    */

    /*                                                  Code N (Char)
        char x;
    x='z';
    cin>>x;
    if(int(x)>=65 & int(x)<=90){
        cout<<char(tolower(x));}
    else
        cout<<char(toupper(x));
    */

    /*                                                  Code O (Calculator)
    int a,b;
    char x;
    x='a';
    cin>>a>>x>>b;
    if(x=='+')
    cout<<(a+b);
    else if (x=='-')
        cout<<(a-b);
    else if (x=='*')
        cout<<(a*b);
    else if (x=='/')
        cout<<(a/b);
    */

    /*                                                  Code P (First digit)
    int x;
    cin>>x;
    for(int i=0;i<3;i++){
        x=x/10;
    }
    if(x%2==0){
        cout<<"EVEN";}
    else{
        cout<<"ODD";}
    */

    /*                                                  Code Q (Coordinates of a point)
    float x,y;
    cin>>x>>y;
    if((x==0) & (y==0)){
        cout<<"Origem";}
    else if ((x==0) &(y!=0)){
        cout<<"Eixo Y";}
    else if ((y==0)&(x!=0)){
        cout<<"Eixo X";}
    else if ((x>0)&(y>0)){
        cout<<"Q1";}
    else if((y<0)&(x>0)){
        cout<<"Q4";}
    else if ((x<0)&(y>0)){
        cout<<"Q2";}
    else if ((x<0)&(y<0)) {
        cout<<"Q3";}
    */

    /*                                                  Code R (Age in Days)
    int x,year;
    year =0;
    cin>>x;
    while ((x-365)>=0){
        x=x-365;
        year=year+1;}
    cout<<year<<" years"<<endl;
    if ((x-365)<0){
        cout<<(x/30)<<" months"<<endl;
        cout<<(x%30)<<" days"<<endl;}
    */

    /*                                                  Code S (Interval)
    double x;
    cin >>x;
    if((x<0) || (x>100) ){
        cout<<"Out of Intervals";}
     else if((x>=0) & (x<=25)){
        cout<<"Interval [0,25]";}
     else if ((x>25) & (x<=50)){
        cout<<"Interval (25,50]";}
     else if ((x>50) & (x<=75)){
        cout<<"Interval (50,75]";}
     else if ((x>75) & (x<=100)){
        cout<<"Interval (75,100]";}
    */

    /*                                                  Code T (Sort numbers)
    int a,b,c,x,z;
    cin>>a;
    cin>>b;
    cin>>c;
    x=min(a,b);
    z=min(b,c);
    cout<<min(x,z)<<endl;
    if(x!=z)
    cout<<max(x,z)<<endl;
    else
        cout<<min(a,c)<<endl;
    x=max(a,b);
    z=max(b,c);
    cout<<max(x,z)<<endl;
    cout<<""<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    */

    /*                                                  Code U (Float or int)
    double  a;
    cin>>a;
    if(a==int(a))
        cout<<"int "<<a<<endl;
    else
        cout<<"float "<<int(a)<<" "<<(a-int(a))<<endl;
    */

    /*                                                  code V (comparison)
    int a,b;
    char s;
    s=' ';
    cin>>a;
    cin>>s;
    cin>>b;
    if((a>b) & (s=='>'))
        cout<<"Right"<<endl;
    else if(a==b & (s=='='))
        cout<<"Right"<<endl;
    else if((a<b) & (s=='<'))
        cout<<"Right"<<endl;
    else
        cout<<"Wrong"<<endl;
    */

    /*                                                  code W (Mathematical Expression)
     int a,b,c;
    char s,q;
    s=' ';
    q=' ';
    cin>>a>>s>>b>>q>>c;
    if((s=='+')&(a+b==c))
        cout<<"Yes";
    else if((s=='+')&((a+b!=c)||(a-b!=c)||(a*b!=c)))
        cout<<a+b;
    else if((s=='-')&(a-b==c))
        cout<<"Yes";
    else if((s=='-')&((a-b!=c)||(a+b!=c)||(a*b!=c)))
        cout<<a-b;
    else if((s=='*')&(a*b==c))
        cout<<"Yes";
    else if((s=='*')&((a+b==c)||(a-b!=c)||(a+b!=c)))
        cout<<a*b;
    */

    /*                                                  Code X (Two intervals)
    long long x1,y1,x2,y2;
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    if(x2>=y1 | y2 <= x1){cout<<-1<<endl;}
    else if(x1<=x2 & y1>=y2){cout<<x2<<" "<<y2<<endl;}
    else if(x2<=x1 & y2>=y1){cout<<x1<<" "<<y1<<endl;}
    else if(x2<=x1 & y2<=y1){cout<<x1<<" "<<y2<<endl;}
    else if(x2>=x1 & y2>=y1 ){cout<<x2<<" "<<y1<<endl;}
    */

    /*                                                  code Y (The last two digits)
    int a,b,c,d,z,x,s,q,result;
    cin>>a>>b>>c>>d;
    x=a%100;
    z=b%100;
    s=c%100;
    q=d%100;
    result=(x*z*s*q);
    if((result%100)<=9)
        cout<<"0"<<result%100<<endl;
    else
        cout<<result%100<<endl;
    return 0;
    return 0;
    */

    /*                                                  code z (Hard compare)
      double a,b,c,d;
    cin>>a>>b>>c>>d;
    if((b*log(a))>(d*log(c)))
        cout<<"YES";
    else
        cout<<"NO";
    */
    return 0;
}
