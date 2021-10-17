import java.util.*;

class maxpathsum {
    int max(int x, int y) { return (x > y) ? x : y; }
 

    int solution(int ar1[], int ar2[], int m, int n)
    {
        int i = 0, j = 0;
        int result = 0, sum1 = 0, sum2 = 0;
        while (i < m && j < m)
        {
            if (ar1[i] < ar2[j])
                sum1 += ar1[i++];
            else if (ar1[i] > ar2[j])
                sum2 += ar2[j++];
            else
            {
                result += max(sum1, sum2) + ar1[i];
                sum1 = 0;
                  sum2 = 0;
                i++;
                j++;
            }
        }
        while (i < m)
            sum1 += ar1[i++];
        while (j < n)
            sum2 += ar2[j++];
        result += max(sum1, sum2);
 
        return result;
    }
    public static void main(String[] args)
    {
        maxpathsum sum = new maxpathsum();
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0)
        {
            int m= sc.nextInt();
            int n=sc.nextInt();
            int ar1[]=new int[m];
            int ar2[]= new int [n];
            for(int i=0;i<n;i++)
            {
                ar1[i]=sc.nextInt();
            }
            for(int i=0;i<n;i++)
            {
                ar2[i]=sc.nextInt();
            }
            int result = sum.solution(ar1, ar2, m, n);
            System.out.println(result);
            
        }
        
    }
    
}
