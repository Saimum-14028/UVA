import java.util.Scanner;
import java.math.BigInteger;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		
		int n,i,a;
		String str;
		BigInteger x,y,ans;
		
		n=sc.nextInt();
		str=sc.nextLine();
		
		
		for(i=0;i<n;i++){
			
			str=sc.nextLine();
			
			a=str.indexOf('/');
			
			x=new BigInteger(str.substring(0,a-1));
			y=new BigInteger(str.substring(a+2,str.length()));
			
			ans=x.gcd(y);
			
			x=x.divide(ans);
			y=y.divide(ans);
			
			System.out.println(x+" / "+y);
		}

	}

}
