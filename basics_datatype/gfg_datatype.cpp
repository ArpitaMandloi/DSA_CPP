\// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    int dataTypeSize(std::string str) {
        // your code here
         for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); // Convert uppercase to lowercase
        }
    }
        if(str == "character" ){
            return sizeof(char);
        }
        else if (str == "integer" ){
            return sizeof(int);
        }
        else if (str == "long" ){
            return sizeof(long);
        }
        else if(str == "float"  ){
            return sizeof(float);
        }
         else if(str == "double"  ){
            return sizeof(double);
        }
      else{
        return -1;
      }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
