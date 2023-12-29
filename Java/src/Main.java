import java.util.*;


public class Main {

    public static void main(String[] args) {

        OurClass ourClass = new OurClass();

        try {
            ourClass.thisMethodIsDangerous();
        } catch (OurBadException e) {
            System.out.println(e.getMessage());
        } finally {
            System.out.println("예외를 핸들링함");
        }
    }
}
