#include <bits/stdc++.h>
using namespace std;
//using GRAPH1.h, EDGE diff 
 
#include "GRAPH1.h"
#include "low1.h"

int check()
{
	int n,m,s,t,x,y,caplow,cap;
    while(cin>>n>>m>>s>>t){
    	s--,t--;
    	vector<int> sd(n);
        GRAPH<EDGE> G(n,1);
        for(int i=0;i<m;i++){
    	    cin>>x>>y>>caplow>>cap;
    	    x--,y--;
            sd[y]+=caplow,sd[x]-=caplow;
	        G.insert(new EDGE(x,y,caplow,cap));    	    
        }
        LOWER<GRAPH<EDGE>,EDGE>(G,s,t,sd);
	}
    return 0;       
}

int chec()
{
	int n,m,s,t,x,y,caplow,cap;
    while(cin>>n>>m>>s>>t){
    	s++,t++;
    	cout<<n<<" "<<m<<" "<<s<<" "<<t<<endl;
        for(int i=0;i<m;i++){
    	    cin>>x>>y>>caplow>>cap;
    	    x++,y++;
 	        cout<<x<<" "<<y<<" "<<caplow<<" "<<cap<<endl;    	    
        }
	}
    return 0;       
}

int main()
{
    check();
    return 0;
}
