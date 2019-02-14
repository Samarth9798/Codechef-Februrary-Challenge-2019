import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
		
		int t = in.nextInt();
		
		while(t > 0)
		{
		    int n = in.nextInt();
		    
		    int a[] = new int[n];
		    
		    int d[] = new int[n];
		    
		    int i,j;
		    
		    int c[] = new int[n];
		    
		    for(i = 0; i < n; i++)
		    {
		        a[i] = in.nextInt();
		    }
		    for(i = 0; i < n; i++)
		    {
		        d[i] = in.nextInt();
		    }
		    
		    j = 0;
		    
		    for(i = 0; i < n; i++)
		    {
		        if(i == 0){
		            if(a[n - 1] + a[i + 1] < d[i])
		            {
		                c[j] = d[i];
		                j++;
		            }
		        }
		        else{
		            if(a[i - 1] + a[(i + 1)%n] < d[i])
		            {
		                c[j] = d[i];
		                j++;
		            }
		        }
		    }
		    
		    int ans = -1;
		    
		    for(i = 0; i < j; i++)
		        if(c[i] > ans)
		            ans = c[i];
		            
		    System.out.println(ans);
		    
		    t--;
		}
	}
}
