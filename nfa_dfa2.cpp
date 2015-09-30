//NFA to DFA
#include<iostream>
#include<vector>
#include<fstream>
#include<map>
#include<queue>
using namespace std;
int states,variables;
map<int,int> mp;
queue<int> q;
map<int,int>::iterator im;
vector< vector<int> > v;

void nfa_dfa(){
    int combine,pos;
    while(!q.empty()){
        combine = q.front();
        q.pop();
        pos = 0;
        if(mp.find(combine)==mp.end()){
            mp[combine] = ++states;
            vector<int> vt(variables,0);
            while(combine){
                if((combine&1)){
                    for(int j=0;j<variables;j++)
                        vt[j] |= v[pos][j];
                }
                combine = (combine>>1);
                pos++;
            }

            for(int i=0;i<variables;i++)
                q.push(vt[i]);
            v.push_back(vt);
        }
    }

}

int main(){

    int i,j,temp;
    ifstream inp("nfa.txt",ios::in);
    inp >> states >> variables;
    v.resize(states);
    for(i=0;i<states;i++){
        v[i].resize(variables);
    }
    mp[0] = 0;
    temp = 1;
    for(i=0;i<states;i++){
        mp[temp] = i+1;
        temp = temp<<1;
    }

    for(i=0;i<states;i++){
        for(j=0;j<variables;j++){
            inp >> v[i][j];
            if(v[i][j]!=0){
                temp = v[i][j];
                while(temp%2==0) temp/=2;
                if(temp!=1){
                    q.push(v[i][j]);
                }
            }
        }
    }
    inp.close();
    nfa_dfa();

    cout<<"\nThe final DFA table:\n\n";
    for(i=0;i<states;i++){
        for(j=0;j<variables;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
