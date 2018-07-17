#include<bits/stdc++.h>
using namespace std;

#define mx 100001

int arr[mx];
vector<pair< int,int> >tree(400004);

void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node].first = arr[b];
        tree[node].second=1;
        return;
    }

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    init(Left, b, mid);
    init(Right, mid + 1, e);

    if(tree[Left].first == tree[Right].first)
    {
        tree[node].first = tree[Right].first;
        tree[node].second= tree[Left].second + tree[Right].second;
    }
    else
    {
        tree[node].first =  tree[Right].first;
        tree[node].second = max(tree[Left].second, tree[Right].second);
    }
}

pair<int,int> query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return make_pair(-100002,0); //বাইরে চলে গিয়েছে

    if (b >= i && e <= j)
        return tree[node]; //রিলেভেন্ট সেগমেন্ট

    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    pair<int,int> p1 = query(Left, b, mid, i, j);
    pair<int,int> p2 = query(Right, mid + 1, e, i, j);

    if(p1.first == p2.first)
    {
       return  make_pair(p2.first,p1.second + p2.second);
    }
    else
    {
        return  make_pair(p2.first,max(p1.second, p2.second));
    }
//বাম এবং ডান পাশের যোগফল
}

int main()
{
    freopen("11235i.txt","r",stdin);
    freopen("11235o.txt","w",stdout);

    int n,i,q,x,y;

    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            return 0;

        scanf("%d",&q);

         for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }

        init(1, 1, n);

        while(q--)
        {
            scanf("%d %d",&x,&y);

            pair<int,int>ans=query(1,1,n,x,y);

            printf("%d\n",ans.second);
        }
    }
    return 0;
}


