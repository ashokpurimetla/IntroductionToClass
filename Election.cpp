#include<iostream>
using namespace std;
int main()
{
    int i,cand[5],ballot;
    int count[5]={0};
    char ch;
    //for (int i = 1; i <=5; i++)
    //{
        //count[i]= 0;
    //}
    do{
        cout<<"\nPlease cast your vote:";
        cin>>ballot;
        if(ballot==0){
            count[0]++;
        }
        else if(ballot==1){
            count[1]++;
        }
        else if(ballot==2){
            count[2]++;
        }
        else if(ballot==3){
            count[3]++;
        }
        else if(ballot==4){
            count[4]++;
        }
        else{
            cout<<"Wrong input";
        }
        cout<<"\nDo you want to continue?y/n:";
        cin>>ch;
    }while(ch=='y');
    for (int i = 0; i <5; i++)
    {
        cout<<"\nCandidate"<<i<<"="<<count[i];
    }   
}