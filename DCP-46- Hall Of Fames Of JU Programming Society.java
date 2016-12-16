import java.math.BigInteger;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int tc=in.nextInt();
        for(int p=1;p<=tc;p++){
            BigInteger a=in.nextBigInteger();
            BigInteger b=in.nextBigInteger();
            System.out.println(a.add(b).divide(BigInteger.valueOf(2)));
        }
    }
}
