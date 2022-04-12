//By NS17, contest: Codeforces Round #776 (Div. 3), problem: (A) Deletions of Two Adjacent Letters, Accepted, #, Copy

    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main(){
     
      ios::sync_with_stdio(false);
      cin.tie(NULL);
     
      int tc;
     
      cin >> tc;
     
      while(tc--) {
     
        string s;
     
        cin >> s;
     
        char c;
     
        cin >> c;
     
        int k = 0;
        
          for (int i = 0; i < s.length(); i+=2){
    	if (s[i] == c){
    	  cout << "yes" << endl;
    	  k = 1;
    	  break;
    	}
          }
     
          if (k == 0){
    	cout << "no" << endl;
          }
     
      }
    }
