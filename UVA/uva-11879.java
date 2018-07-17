import java.util.Scanner;
import java.math.BigInteger;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		
		while(true){
			BigInteger x,y=new BigInteger("17"),ans;
						
			x=sc.nextBigInteger();
			
			if(x.compareTo(BigInteger.ZERO)==0){
				break;
			}
			
			ans=x.mod(y);
			
			if(ans.compareTo(BigInteger.ZERO)==0)
				System.out.println(1);
			else
				System.out.println(0);
		}
	}

}
