#include <iostream>

using namespace std;

void p1(int num)
{
    for(int i=1; i<=num;++i)
    {
        for(int j=1; j<=i;++j)
        cout<<j<<"\t";

        cout<<endl;
    }
    return;
}

void p2(int num)
{
    for(int i=num;i>0;--i)
    {
        for(int j=num;j>=i;--j)
        cout<<j<<"\t";
        cout<<endl;
    }
    return;
}

void p3(int num)
{
    for(int i=num;i>0;--i)
    {
        for(int j=1;j<=i;++j)
        cout<<j<<"\t";
        cout<<endl;
    }
    return;
}

void p4(int num)
{
    for(int i=1;i<=num;++i)
    {
        for(int j=i;j<=num;++j)
        cout<<j<<"\t";
        cout<<endl;
    }
    return;
}

void p5(int num)
{
    for(int i=num;i>0;--i)
    {
        for(int j=i; j>=1 ; --j)
        cout<<j<<"\t";
        cout<<endl;
    }
    return;
}

/*
void p5(int num)
{
    for(int i=num;i>0;--i)
    {
        for(int j=0;  j<i ; ++j)
        cout<<i-j<<"\t";
        cout<<endl;
    }
    return;
}
*/

void p6(int num)
{
    for(int i=0;i<num;++i)
    {
        for(int j=num; j>i ; --j)
        cout<<j<<"\t";
        cout<<endl;
    }
    return;
}

void p7(int num)
{
    for(int i=1;i<=num;++i)
    {
        for(int j=i; j>=1 ; --j)
        cout<<j<<"\t";
        cout<<endl;
    }
    return;
}

void p8(int num)
{
    for(int i=num;i>0;--i)
    {
        for(int j=num; j>=i ; --j)
        cout<<j<<"\t";
        cout<<endl;
    }
    return;
}

void p9(int num)
{
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=i; j++)
        cout<<i<<"\t";
        cout<<endl;
    }
    return;
}

void p10(int num)
{
    for(int i=num; i>=1; i--)
    {
        for(int j=num; j>=i; j--)
        cout<<i<<"\t";
        cout<<endl;
    }
    return;
}

void p11(int num=7)
{
     for(int i=num; i>=1; i-=2)
    {
        for(int j=1; j<=i; j++)
        cout<<j<<"\t";
        cout<<endl;
    }
    return;
}

void p12(int num)
{
    for(int i=num; i>=1; i--)
    {
        int k;
        if(i%2==1) k=1;
        else k=i;
        for(int j=1; j<=i; j++)
        {
            cout<<k<<"\t";
            if(i%2==1) k++;
            else k--;
        }
        cout<<endl;
    }
    return;
}

void p13(int num)
{
    for(int i=num; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        cout<<i<<"\t";
        cout<<endl;
    }
    return;
}

void p14(int num)
{
    for(int i=1; i<=num; i++)
    {
        for(int j=num; j>=i; j--)
        cout<<i<<"\t";
        cout<<endl;
    }
    return;
}

void p15(int num)
{
    for(int i=num; i>=1; i--)
    {
        int k = i;
        for(int j=1; j<=num; j++)
        {
            if(k <= num)
                cout << k <<"\t";
            else
               cout << num  <<"\t";
            k++;
        }
        cout << endl;
        
    }
    return;
}

void p16(int num)
{
    for(int i=1; i<=num; i++)
    {
        for(int j=i; j>=1; j--)
        cout<< j%2 <<"\t";
        cout<<endl;
    }
    return;
}

void p17(int num)
{
    for(int i=1; i<=num; i++)
    {
        int k;
        if(i%2==0)
            k=2;
        else
            k = 1;

        for(int j=1; j<=i; j++,k+=2)
        cout<<k;
        cout<<endl;
    }
    return;
}

void p18(int  num)
{
    for(int i=1;i<=num;i+=2)
    {
        for(int j=i;j<=num;j+=2)
        cout<<j<<"\t";
        cout<<endl;
    }
    return;
}

void p19(int num)
{
    return;
}

void p20(int num)
{
    return;
}

void solve()
{
    int n=5;
    
    // p1(n);
    // p2(n);
    // p3(n);
    // p4(n);
    // p5(n);
    // p6(n);
    // p7(n);
    // p8(n);
    // p9(n);
    // p10(n);
    // p11();
    // p12(n);
    // p13(n);
    // p14(n);
    
    p15(n);
    return;
}

int main()
{
    solve();
    return 0;
}
