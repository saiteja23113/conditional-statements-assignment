/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
1.
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b) cout<<a;
    else cout<<b;

    return 0;
}

2
#include <iostream>

using namespace std;

int main()
{
    int r;
    cin>>r;
    float area=3.14*r*r;
    float circum=2*3.4*r;
    if(area>circum) cout<<area<<" area is greater";
    else cout<<circum<<" circumference is greater";

    return 0;
}

3
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a%4==0 && a%100!=0) cout<<"leap year";
    else if(a%100==0 && a%400!=0) cout<<"not leap year";
    else if (a%400==0) cout<<"leap year";

    return 0;
}

4

#include <iostream>

using namespace std;

int main()
{
  int l,b;
  cin>>l>>b;
  float area=l*b;
  float perimeter=2*(l+b);
  if(area>perimeter) cout<<"area is greater";
  else cout<<"perimeter is greater";

    return 0;
}

5

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c && c==a) cout<<"equilateral";
    else if(a!=b && b!=c && c!=a) cout<<"scalene";
    else cout<<"isosceles";

    return 0;
}

6

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && a<c) cout<<"1st student scored least marks";
    else if(b<c && b<a) cout<<"2nd student scored least marks";
    else cout<<"3rd student scored least marks";

    return 0;
}

7
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==0&&b==0) cout<<"point lies at origin";
    else if(a==0&&b!=0) cout<<"point lies at y axis";
    else if(a!=0 && b==0) cout<<"point lies at x axis";
    else cout<<"point does not lie on axis";

    return 0;
}

8
#include <iostream>

using namespace std;

int main()
{
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int m1=(y2-y1)/(x2-x1);
    int m2=(y3-y2)/(x3-x2);
    if(m1==m2) cout<<"points are in a line";
    else cout<<"points on are not on the straight line";

    return 0;
}

9
#include<iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
        cout << ch << " is an Alphabet";
     else if (ch >= '0' && ch <= '9') 
        cout << ch << " is a Digit";
    else 
        cout << ch << " is a Special Character";
    
    return 0;
}

10

value of b and c are respectively 300 and 200

