import java.math.BigInteger;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int tc=in.nextInt();
        int n=0;
        BigInteger m=new BigInteger("100000");
        while(++n<=tc){
            BigInteger a=in.nextBigInteger();
            System.out.println(a.mod(m));
        }
    }
}
