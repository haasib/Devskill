import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int tc=in.nextInt();
        in.nextLine();
        for(int p=1;p<=tc;p++){
            String m=in.nextLine();
            String []s=m.split(" ");
            int n=s.length;
            int max=0,min=100000;
            for(int i=0;i<n;i++){
                int tt=Integer.parseInt(s[i]);
                if(max<tt)max=tt;
                if(min>tt)min=tt;
            }
            System.out.println("Case "+p+": "+"Among "+n+" numbers "+max+" is maximum and "+min+" is minimum");
        }
    }
}
