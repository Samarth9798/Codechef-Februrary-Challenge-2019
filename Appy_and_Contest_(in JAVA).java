import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static long gcd(long a, long b)
    {
        if(b == 0)
            return a;
        return gcd(b,a%b);
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
		
		int T;
		T = in.nextInt();
		
		while(T > 0)
		{
		    long n,a,b,k;
		    n = in.nextLong();
		    a = in.nextLong();
		    b = in.nextLong();
		    k = in.nextLong();
		    
		    long Lcm = (a*b)/gcd(a,b);
		    long ans = (n/a) + (n/b) - (2*(n/Lcm));
		    
		    if(ans >= k)
		        System.out.println("Win");
		    else    
		        System.out.println("Lose");
		        
		    T--;
		}
	}
}
