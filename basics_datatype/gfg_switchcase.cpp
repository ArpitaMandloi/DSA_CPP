class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
     
        // code here
        
        switch (choice){
            
            case 1:{
            double R = arr[0];
            return M_PI * R * R;
        }
        case 2:{
            double L= arr[0];
            double B = arr[1];
            return L * B;
        }
        default :
        return -1;
    }
    }
};
