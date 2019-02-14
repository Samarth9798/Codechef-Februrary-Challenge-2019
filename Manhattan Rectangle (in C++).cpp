#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int T;
    cin >> T; //input the test cases 
    
    while(T--)
    {
        
        ll x1,y1,x2,y2; 
        
        ll temp;
        
        //mark the minimum ans maximum points in the grid
        x1 = 0; y1 = 0; x2 = 1000000000; y2 = 1000000000; 
        
        ll a1,a2,a3,a4;
        
        //fist output (0,0) so that the min(|p - 0| + |q - 0|) will give the
        //sum of Xl and Yl and we store this sum in the a1 variable
        cout << 'Q' << ' ' << x1 << ' ' << y1 << endl << flush;
        cin >> a1; // a1 = Xl + Yl
        
        //now we output (0,max) so that the min(|p - 0| + |q - max|) will gives
        //the solution of equation (Xl + max - Yu)
        cout << 'Q' << ' ' << x1 << ' ' << y2 << endl << flush;
        cin >> a2; // a2 = Xl + 1000000000 - Yu
        
        //now we output (max,0) so that we get the solution of the equation
        //(max - Xu + Yl)
        cout << 'Q' << ' ' << x2 << ' ' << y1 << endl << flush;
        cin >> a3; // a3 = 1000000000 - Xu + Yl
        
        ll yuyl;
        yuyl = a1 - a2 + 1000000000;
        
        ll mid = yuyl/2;
        
        ll xl,yl,xu,yu;
        
        //now we output the (0,mid value of Yl and Yu), this will gives the
        //value of Xl
        cout << 'Q' << ' ' << x1 << ' ' << mid << endl << flush;
        cin >> xl;
        
        yl = a1 - xl; //calculate the Yl by first equation
        
        yu = xl + 1000000000 - a2; //calculate the Yu by second equation
        
        xu = yl + 1000000000 - a3; //calculate the Xu by third equation
        
        //output the (Xl,Yl) and (Xu,Yu) as described in the question
        cout << "A " << xl << ' ' << yl << ' ' << xu << ' ' << yu << endl << flush;
        
        //check the output is correct or not
        cin >> temp;
        
        if(temp < 0) break; //break if we give the wrong answer
    }
}
