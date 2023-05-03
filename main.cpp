#include <iostream>
ِنَّ ٱللَّهَ وَمَلَٰٓئِكَتَهُۥ يُصَلُّونَ عَلَى ٱلنَّبِيِّۚ يَٰٓأَ﴿ إن الله وملائكته يصلون على النبي ياأيها الذين آمنوا صلوا عليه وسلموا تسليما ﴾ [ الأحزاب: 56]
using namespace std;

int main()
{
    int x,y,c,s,t;c=0;t=-1;
    char a[10]={0};
    cout<<"choose number between 1 & 9"<<endl;

   a: while(cin>>x){
            if((x>9 || x<1)){
                continue;
            }
            for(int i=1;i<9;i++){
                if(a[x]=='X' || a[x]=='O'){

                    goto a;
                }t*=-1;
            }if(t>0){
               cout<<"Player one's turn "<<endl<<endl;
            }else {
            cout<<"Player two's turn "<<endl<<endl;
            }t*=-1;
    for(int i=1;i<10;i++){


if((a[1]==a[2] && a[1]==a[3]&& a[1]!=0)||( a[1]==a[5] && a[1]==a[9]&& a[1]!=0 )||(a[1]==a[4] && a[1]==a[7] && a[1]!=0)||(a[6]==a[3] && a[9]==a[3]&& a[3]!=0)||(a[9]==a[8] && a[7]==a[9]&& a[9]!=0)||(a[4]==a[6] && a[5]==a[4]&& a[4]!=0)||
   (a[8]==a[2] && a[5]==a[2]&& a[2]!=0)||(a[3]==a[5] && a[3]==a[7] && a[3]!=0))
            {
                cout<<endl<<">>>>>TIK TAC TOE<<<<<\a"<<endl;

                    break;
            }


            if(i==x && i%3==0 && t==-1){
                a[i]='O';
            cout<<a[i]<<" | "<<endl<<"---------"<<endl;
        }else if(i==x && i%3!=0 && t==-1){
            a[i]='O';
        cout<<a[i]<<" | ";
        }else
        if(i==x && i%3==0){
                a[i]='X';
            cout<<a[i]<<" | "<<endl<<"---------"<<endl;
        }else if(i==x && i%3!=0){
            a[i]='X';
        cout<<a[i]<<" | ";
        }
        else
        if(i%3==0 && i!=x){

            cout<<a[i]<<" | "<<endl<<"---------"<<endl;
        }else if(i!=x){
        cout<<a[i]<<" | ";
        }

    }cout<<endl;



    }
    return 0;
}
