/*
Representation_of_a_Graph.png image is used for our Graph input
*/

#include <stdio.h>
#include <vector>
#include <string.h>

using namespace std;

int node, edge;
vector <int> v[100];
int cost_matrix[100][100];

void initialize()
{
    memset(cost_matrix,0,sizeof(cost_matrix));
    return;
}

int main()
{
    int a,b,c;
    while(scanf("%d %d",&node, &edge)==2)
    {
        initialize();
        for(int i=0;i<edge;++i)
        {
            scanf("%d %d %d",&a, &b, &c);
            v[a].push_back(b);
            v[b].push_back(a);
            cost_matrix[a][b]=cost_matrix[b][a]=c;
        }
        printf("\nUsing vector: \n");
        for(int i=0;i<node;++i)
        {
            printf("%d->",i+1);
            for(int j=0;j<v[i+1].size();++j)
            {
                printf(" %d[%d] ,",v[i+1][j], cost_matrix[i+1][v[i+1][j]]);
            }
            printf("\n");
        }
        for(int i=0;i<node+1;++i)
        {
            if(!v[i].empty())
                v[i].clear();
        }
    }

    return 0;
}

/*
6 9
1 2 6
1 5 5
2 3 1
2 5 7
3 4 9
3 5 8
3 6 2
4 5 4
4 6 3

*/
