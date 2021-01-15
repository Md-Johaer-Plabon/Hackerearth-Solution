#include<bits/stdc++.h>
using namespace std;

bool isvalid(int i, int j,int n,int m)
{
    return (i >= 0 && j >= 0 && i < n && j < m);
}
struct ele {
    int x, y;
};

int main()
{
 	int n,m,i,j;
 	cin>>n>>m;
 	
 	short int arr[1001][1001];
 	
 	for(i=0;i<n;i++){
 		for(j=0;j<m;j++)cin>>arr[i][j];
	 }
    queue<ele> Q;
    ele temp;
    int ans = 0;
    for (int i=0; i<n; i++)
    {
       for (int j=0; j<m; j++)
       {
            if (arr[i][j] == 2)
            {
                temp.x = i;
                temp.y = j;
                Q.push(temp);
            }
        }
    }
    temp.x = -1;
    temp.y = -1;
    Q.push(temp);
    while (!Q.empty())
    {
        bool flag = false;
        while (!(Q.front().x ==-1 && Q.front().y == -1))
        {
            temp = Q.front();
            if (isvalid(temp.x+1, temp.y,n,m) && arr[temp.x+1][temp.y] == 1)
            {
                if (!flag) ans++, flag = true;
                arr[temp.x+1][temp.y] = 2;

                temp.x++;
                Q.push(temp);
 
                temp.x--; // Move back to current cell
            }
            if (isvalid(temp.x-1, temp.y,n,m) && arr[temp.x-1][temp.y] == 1) {
                if (!flag) ans++, flag = true;
                arr[temp.x-1][temp.y] = 2;
                temp.x--;
                Q.push(temp); // push this cell to Queue
                temp.x++;
            }
            if (isvalid(temp.x, temp.y+1,n,m) && arr[temp.x][temp.y+1] == 1) {
                if (!flag) ans++, flag = true;
                arr[temp.x][temp.y+1] = 2;
                temp.y++;
                Q.push(temp); // Push this cell to Queue
                temp.y--;
            }
            if (isvalid(temp.x, temp.y-1,n,m) && arr[temp.x][temp.y-1] == 1) {
                if (!flag) ans++, flag = true;
                arr[temp.x][temp.y-1] = 2;
                temp.y--;
                Q.push(temp); // push this cell to Queue
            }
 
            Q.pop();
        }
        Q.pop();
        if (!Q.empty()) {
            temp.x = -1;
            temp.y = -1;
            Q.push(temp);
        }
    }
 
 	int f=0;
	for (int i=0; i<n; i++)
    	for (int j=0; j<m; j++)
     		if(arr[i][j]==1){
       			f=1;
       			break;
			}
 
 	//f=1 if some Good People Left
    if (f == 1)
        cout << -1<<endl;
    else
         cout << ans << endl;
    return 0;
}
