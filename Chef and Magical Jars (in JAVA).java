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
		    long a;
		    long sum = 0;
		    
		    for(int i = 0; i < n; i++){
		        a = in.nextLong();
		        sum = sum + a;
		    }
		       
		    long ans = sum - n + 1;
		    
		    System.out.println(ans);
		    
		    t--;
		}
	}
}
