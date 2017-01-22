import java.math.BigInteger;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int tc=in.nextInt();
        for(int p=1;p<=tc;p++){
            BigInteger n=in.nextBigInteger();
            System.out.println("Case "+p+": "+n.multiply(n.subtract(BigInteger.ONE)).divide(new BigInteger("2")));
        }
    }
}
