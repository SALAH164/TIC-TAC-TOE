#include <bits/stdc++.h>
#define ll long long
using namespace std;
char a[3][3]={{'*','*','*'},{'*','*','*'},{'*','*','*'}};
bool check_horz(int i=1)
{
    if(i==3)return true;
    if(a[0][i]==a[0][0] && a[0][0]!='*')return check_horz(i+1);
    else return false;
}

bool check_vert(int i=1)
{
    if(i==3)return true;
    if(a[i][0]==a[0][0] && a[0][0]!='*')return check_vert(i+1);
    else return false;
}

bool check_dign1(int i=1,int j=1)
{
    if(i==3)return true;
    if(a[i][j]==a[0][0] && a[0][0]!='*')return check_dign1(i+1,j+1);
    else return false;
}
bool check_dign2(int i=1,int j=1)
{
    if(i==3)return true;
    if(a[i][j]==a[0][2] && a[0][2]!='*')return check_dign2(i+1,j-1);
    else return false;
}
bool winner_found()
{
    return (check_dign1()||check_horz()||check_vert()||check_dign2());
}
void display()
{
    for(int i=0;i<3;i++)
    {
        cout<<'\t';
        for(int j=0;j<3;j++)
        {
            cout<<"  "<<a[i][j]<<" ";
        }cout<<endl;
    }
}
void credit()
{
    cout<<"    _____ TIC TAC TOE _____ \n\n      created by Salah_G\n\n       ----------------\n\n\n";
}
int main()
{
    ll x,turns=1,empty_slots=9;
    credit();
    while(!winner_found() && empty_slots)
    {
        if(turns&1)cout<<"      First player's turn\n\n";
        else cout<<"     Second player's turn\n\n";
        display();
        int in;
        cin>>in;
        in--;
        if(in>8 || in<0){system("cls"),credit(),cout<<"\aInvalid input please try again\n\n";continue;}
        if(a[in/3][in%3]!='*'){system("cls"),credit(),cout<<"\aThis slot is already taken please try again\n\n";continue;}
        else if(turns)a[in/3][in%3]='X';
        else a[in/3][in%3]='O';
        empty_slots--;
        turns^=1;
        system("cls");
        credit();
    }
    display();
    cout<<"\n\n     ";
    cout<<(!empty_slots?"--- Draw ---":turns?"--- Player 2 wins ---":"--- Player 1 wins ---")<<"\n\n\n";
}
