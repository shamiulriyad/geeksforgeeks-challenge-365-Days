class Solution {

    public:
      string countryAtWar(vector<int>& arr1, vector<int>& arr2) {
          // code
          int awin=0;
          int bwin =0;
          int n= arr1.size();
          for(int i=0;i<n;i++){
              if(arr1[i]>arr2[i]){
                  awin++;
              }
              else if(arr2[i]>arr1[i]){
                  bwin++;
              }
              
          }
          if(awin > bwin){
              return "A";
          }
          else if(bwin>awin){
              return "B";
          }
          else{
              return "DRAW";
          }
      }
  };