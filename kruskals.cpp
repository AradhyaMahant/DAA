#include<iostream>
using namespace std;

void Kruskals(vector<Edge>& edge_List,int V,int E)
{
	sort(edge_List.begin(),edge_List.end(),comparator)
	
	int i=0,j=0;
	while(i<v-1 && j<e)
	{
		int fromP = find(edge_List[j].src);
		int toP = find(edge_List[j].dst);
		if(fromP == toP)
		{
			++j;
			continue;
		}
	union_op(fromP,toP);
	mst.push_back(edge_List[j]);
	++i;
	}
}

void printMST(vector<Edge>& mst)
{
	cout<<"MST formed is \n";
	for(auto p: mst)
		cout<<"src: "<<p.src<<"  dst: "<<p.dst<<"  wt: "<<p.wt<<"\n";
	
}


int main()
{
	int e;
	int v;
	cin>>e>>v;
	
	dsuf.resize(vertex);
	for(int i=0;i<v;i++)
	{
		dsuf[i].parent=-1;
		dsuf[i].rank=0;
	}
	vector<Edge> edge_List
 	Edge temp;
	for(int i=0;i<E;i++)
	{
		int from,to,et;
		cin>>from>>to>>wt;
		temp.src = from;
		temp.dst = to;
		temp.wt= wt;
		edge_List.push_back(temp);
    } 	
    Kruskals(edge_List,v,e);
    printMST(mst);
    
    return 0;
}


