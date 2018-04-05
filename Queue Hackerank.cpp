#include <iostream>
using namespace std;
int q[1000], /*next = 0,*/ temp = -1;

int enq(int m, int nxt)
{
    if(nxt < 0)
    {
        nxt = 0;
    }
    q[nxt] = m;
    nxt++;
    cout << nxt << endl;
    return nxt;
}

int deq(int nxt)
{
    int i;
    nxt--;
    if(nxt < 0)
    {
        
		cout << "-1 ";
        q[nxt] = 0;
        cout << q[nxt] << endl;
    }
    else
    {
        
        cout << q[0] << " ";
        cout << nxt << endl;
        for(i=0; i<=nxt; i++)
        {
            if(i == nxt)
            {
                q[i] = 0;
            }
            else
            {
                q[i] = q[i+1];
            }
        }
        
    }
    return nxt;
}
int main() 
{
	int n, x, next = 0;
	char act;
	cin >> n;
	while(n--)
	{
	    cin >> act; 
	    if(act == 'E')
	    {
	        cin >> x;
	        next = enq(x, next);
	    }
	    if(act == 'D')
	    {
	        next = deq(next);
	    }
	}
	return 0;
}