#include<iostream>
#include<stack>
#include<cstdlib>
using namespace std;
void showstack(stack<int> stc)
{
    stack<int>g =stc;
    while(!g.empty())
    {
        cout<<"\t"<<g.top();
        g.pop();
    }
}
void push_s(stack<int> p)
{
    int n;
    cin>>n;
    p.push(n);

}
int main()
{  stack<int> stk;
int n;
    while(1)
    {
       cout<<"\n 1. push \n 2.pop \n 3. display \n 4.top  \n 5. is empty \n 6.exit     ";
       cin>>n;
       switch(n)
       {
   case 1:
    push_s(stk);
    break;
       case 2:
           stk.pop();
    break;
    case 3:
    showstack(stk);
    break;
       case 4:
           stk.top();
    break;
       case 5:
    break;
       case 6:
           exit(1);
       }
    }
    return 0;
}
