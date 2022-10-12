class Solution {
    public int maximumPopulation(int[][] logs) {
     int i;
        int[] arr = new int [101];
        for(i=0;i<logs.length;i++)
        {
            arr[logs[i][0]-1950]++;
            arr[logs[i][1]-1950]--;
            
        }
        for(i=1;i<101;i++)
        {
            arr[i] = arr[i]+arr[i-1];
            
        }
        int my = 1950,mv=0;
        for(i=0;i<101;i++)
        {
            if(arr[i]>mv)
            {
                mv =arr[i];
               my = 1950+i;
                
            }
            
        }
         
      
        return my;
    }
}