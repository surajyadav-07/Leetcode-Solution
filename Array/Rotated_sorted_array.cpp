class Solution {
public:
    int search(vector<int>& arr, int tar) {
       int  n = arr.size();
        int   st = 0,end = n-1;

        while(st<=end){
            int mid = st + (end-st)/2;
            if (arr[mid] == tar){
                return mid;
            }
            if (arr[st]<=arr[mid]){ //left sorted
                if (arr[st] <=tar&& arr[mid]>=tar){
                    end = mid - 1 ;
                }
                else{
                    st = mid + 1;
                    }
                }

            else{ // right sortrd
                if (arr[mid] <= tar && tar<=arr[end]){
                    st = mid + 1;
                }
                else{
                    end = mid - 1;
                }
                   

            }
        
                
        }
        return -1;
    }
    
};
