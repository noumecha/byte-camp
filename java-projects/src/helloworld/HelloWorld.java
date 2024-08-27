package helloworld;
import helloworld.User;

public class HelloWorld {

	public HelloWorld() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		User u1 = new User();
		u1.userAge = 1>>4;
		u1.userName = "Noumecha";
		System.out.println("User u1 = { name = \""+ u1.userName + "\" ; age = "+ u1.userAge + " };");
		// type converting
		double a = 5.7;
		long l = (long)a;
		System.out.println(l);
		// Array manipulation 
		int[] notes = {2,4,5,7};
		String cars[];
	}

}
