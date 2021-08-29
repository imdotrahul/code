
public class student {
    public int a,b,uid;
    student()
    {
        a=1;
        uid=8216;
        
    }
    public student(int x,int y)
    {
        a = x;
        b = y;
    }
    student(student p)
    {
        a = p.a;
        b = p.b;
    }
    public static void main(String args[]) {
        student s1 = new student();
        student s2 = new student(1,2);
        student s3 = new student(s2);
        System.out.println(s1.a+" "+s1.b+" "+s1.uid);
        System.out.println(s2.a+" "+s2.b);
        System.out.println(s3.a+" "+s3.b);

    }
}