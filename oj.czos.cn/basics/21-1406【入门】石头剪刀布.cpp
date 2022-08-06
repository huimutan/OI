/*1406 - 【入门】石头剪刀布？
题目描述
石头剪刀布是常见的猜拳游戏。石头胜剪刀，剪刀胜布，布胜石头。如果两个人出拳一样，则不分胜负。一天，小a和小b正好在玩石头剪刀布，假设1代表石头，2代表剪刀，3代表布。小a和小b一共玩了n轮，请问最后的比赛结果是小a赢了还是小b赢了，还是平局？
注意：最终输赢按照小a和小b赢的总次数计算。例如：共比赛7局，小a赢了4局，小b赢了3局，那么输出“a win”。

输入
第一行，是一个整数n（n<=100）
接下来n行，每行有2个数，分别代表每轮比赛中小a和小b的出拳。

输出
如果小a赢了，输出字符串“a win”，如果小b赢了，输出字符串“b win”，如果平局则输出字符串“tie”。（请注意：输出的字符串全部是小写）

样例
输入
3
1 2
2 3
1 1
输出
a win
来源
二维数组

标签
二维数组
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        a--;
        b--;
        if(a != b)
        {
            if((a + 1) % 3 == b) sum++;
            else sum--;
        }
    }
    if(sum > 0) cout << "a win";
    else if(sum < 0) cout << "b win";
    else cout << "tie";
    return 0;
}