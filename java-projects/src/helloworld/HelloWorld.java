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
	}

}
