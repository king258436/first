#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sz, cnt = 0;
    int Lon = 0, Son = 0;
    string skill;
    cin >> sz >> skill;
    for(int n = 0 ; n < sz ; n++){
    	if(skill[n] >= '1' && skill[n] <= '9') cnt++;
    	else{
    		switch(skill[n]){
    			case 'L':
    				Lon++;
    				break;
    				
    			case 'R':
    				if(Lon > 0){
    					cnt++;
    					Lon--;
					}
    				else goto space;
    				break;
    				
    			case 'S':
    				Son++;
    				break;
    				
    			case 'K':
    				if(Son > 0){
    					cnt++;
    					Son--;
					}
    				else goto space;
    				break;
			}
		}
	}
	space:
	cout << cnt << endl;
    return 0;
}