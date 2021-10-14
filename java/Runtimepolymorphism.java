class Cars 
{  
    int speedlimit()  
    {  
        return 0;  
    }  
}  
class Lamborghini extends Cars  
{  
    int speedlimit()  
    {  
        return 350;  
    }  
}  
class Bugatti extends Cars
{  
    int speedlimit()  
    {  
        return 530;  
    }  
}  
class Tesla extends Cars  
{  
    int speedlimit()  
    {  
        return 400;  
    }  
}  
public class Runtimepolymorphism  
{  
    public static void main(String args[])  
    {  
        Cars c1 = new Lamborghini();  
        Cars c2 = new Bugatti();  
        Cars c3 = new Tesla();  
        System.out.println("Top speed of Lamborghini : " + c1.speedlimit());  
        System.out.println("Top speed of Bugatti : " + c2.speedlimit());  
        System.out.println("Top speed of Tesla : " + c3.speedlimit());  
    }  
}  
