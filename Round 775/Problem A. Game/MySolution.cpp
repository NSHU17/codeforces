By NS17, contest: Codeforces Round #775 (Div. 2, based on Moscow Open Olympiad in Informatics), problem: (A) Game, Accepted, #, Copy

    #include<bits/stdc++.h> 
    using namespace std;
     
    int main(){
      ios::sync_with_stdio(false);
      cin.tie(NULL);
     
      int n;
      cin >> n;
     
      while (n--){
     
        int y;
        cin >> y;
        int size = y;
        
      
        
        int arr[100];
        int x = 0;
        while(y--){
          cin >> arr[x];
          ++x;
        }
     
     
           
        int left = 0;
        int right = (size - 1);
     
        while (arr[left] == 1){
          ++left;
          if (left == right){
    	if (arr[left] == 1){
    	  cout << 0 << endl;
    	} else {
    	  cout << 2 << endl;
    	}
    	break;
          }
          
        }
     
        if (left != right){
          while (arr[right] == 1){
    	--right;
    	if (left == right){
    	  cout << 2 << endl;
    	  break;
    	}
          }
          if (left != right){
    	cout << ((right - left) + 2) << endl;
          }
        }
        
      }
     
    }
     

→Judgement Protocol
Test: #1, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK 
