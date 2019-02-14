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
		    String s;
		    
		    int a[] = new int[27];
		    
		    int i,j;
		    
		    for(i = 0; i < n; i++)
		    {
		        s = in.next();
		        
		        int b[] = new int[27];
		        
		        for(j = 0; j < s.length(); j++)
		        {
		            if(b[s.charAt(j) - 'a'] == 0)
		                b[s.charAt(j) - 'a'] = 1;
		        }
		        
		        for(j = 0; j <= 26; j++)
		        {
		            if(b[j] == 1)
		                a[j]++;
		        }
		    }
		    
		    int ans = 0;
		    for(i = 0; i <= 26; i++)
		        if(a[i] == n)
		            ans++;
		            
		    System.out.println(ans);
		    
		    t--;
		}
	}
}
