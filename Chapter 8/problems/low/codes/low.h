#ifndef Maxflow_LOWER_
#define Maxflow_LOWER_

#include "FordFulkerson.h"
//#include "preflow.h"

template <class Graph,class Edge> class LOWER
{
    const Graph &G;
    bool feasible(Graph &G,int s,int t,vector<int> sd)
    {
        int ss,dd,supply,demand,maxflow=0;
	    Graph F(G.V()+2,1);
        for(int v=0;v<G.V();v++){
            adjIterator<Edge> A(G,v);
            for(Edge* e=A.beg();!A.end();e=A.nxt())
		        if(e->from(v)){
				    e->sublow();F.insert(e);
				}
        }  
	    F.insert(new EDGE(t,s,INT_MAX));
	    s=G.V();t=G.V()+1;
	    supply=0;demand=0;
        for(int i=0;i<G.V();i++)
		    if(sd[i]>=0){
                supply+=sd[i];
			    F.insert(new EDGE(s,i,sd[i]));
		    }
		    else{
			    demand-=sd[i];
                F.insert(new EDGE(i,t,-sd[i]));
		    }
        MAXFLOW<Graph,Edge>(F,s,t,maxflow);
	    F.checksd(s,t,ss,dd);
	    bool ret=(supply==ss) && (demand==dd);
        for(int v=0;v<G.V();v++){
            adjIterator<Edge> A(G,v);
            for(Edge* e=A.beg();!A.end();e=A.nxt())
		        if(e->from(v))e->addlow();
        }
        return ret;
    }
public:
    LOWER(Graph &G,int s,int t,vector<int> sd):G(G)
    {
        int maxflow=0;
	    if(!feasible(G,s,t,sd)){
	    	cout<<-1<<endl;
	    	return;
		}
        adjIterator<Edge> A(G,s);
        for(Edge* e=A.beg();!A.end();e=A.nxt())
	        if(e->from(s))maxflow+=e->flow();
        MAXFLOW<Graph,Edge>(G,s,t,maxflow);
        cout<<maxflow<<endl;
    }
};

#endif
