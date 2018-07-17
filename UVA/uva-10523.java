import java.util.Scanner;
import java.math.BigInteger;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		
		while(sc.hasNext()){
			BigInteger n,a,i,sum=BigInteger.ZERO,x;
			int j=1;
			
			n=sc.nextBigInteger();
			a=sc.nextBigInteger();
			
			for(i=BigInteger.ONE;i.compareTo(n)<=0;i=i.add(BigInteger.ONE)){
				x=a.pow(j++);
				x=x.multiply(i);
				sum=sum.add(x);
			}
			System.out.println(sum);
		}
	}

}
