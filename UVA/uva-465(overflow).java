import java.util.Scanner;
import java.math.BigInteger;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc=new Scanner(System.in);

		int a,b,c;
		BigInteger ans,sum=new BigInteger("2147483647");
		String str;

		while (sc.hasNext()){
		//	x=sc.nextBigInteger();
		//	a = sc.next().charAt(0);
		//	b = sc.next().charAt(0);
		//	c = sc.next().charAt(0);
		//	y=sc.nextBigInteger();

			str=sc.nextLine();

			System.out.println(str);

			a=str.indexOf('+');

			if(a>0){
				BigInteger x=new BigInteger(str.substring(0,a-1));
				BigInteger y=new BigInteger(str.substring(a+2,str.length()));

				//System.out.println(x+" "+y);

				//System.out.println(str);

				ans=x.add(y);

				if(x.compareTo(sum)>0){
					System.out.println("first number too big");
				}
				if(y.compareTo(sum)>0){
					System.out.println("second number too big");
				}
				if(ans.compareTo(sum)>0)
					System.out.println("result too big");
			}

			else{
				a=str.indexOf('*');

				BigInteger x=new BigInteger(str.substring(0,a-1));
				BigInteger y=new BigInteger(str.substring(a+2,str.length()));

				//System.out.println(x+" "+y);

				//System.out.println(str);

				ans=x.multiply(y);

				if(x.compareTo(sum)>0){
					System.out.println("first number too big");
				}
				if(y.compareTo(sum)>0){
					System.out.println("second number too big");
				}
				if(ans.compareTo(sum)>0)
					System.out.println("result too big");
			}
		}
	}
}
