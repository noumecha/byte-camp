console.log("show form");
function validateForm() {
    let n = document.getElementById('name');
    let p = document.createElement('surname');
    let e = document.createElement('email');
    let pwd = document.createElement('password');
    if (!n.value || !pwd.value || !p.value || !e.value) {
        document.getElementById('name-error').textContent = "Please enter your name";
        document.getElementById('surname-error').textContent = "Please enter your surname";
        document.getElementById('email-error').textContent = "Please enter your email";
        document.getElementById('pwd-error').textContent = "Please enter your password";
        return false;
    } else if (n.value.length < 3 ) {
        document.getElementById('name-error').textContent = "Your name must be at least 3 characters long";
        return false;
    } else if (!p.value) {
        document.getElementById('surname-error').textContent = "Please enter your surname";
        return false;
    } else if (p.value.length < 3 ) {
        document.getElementById('surname-error').textContent = "Your surname must be at least 3 characters long";
        return false;
    } else if (!e.value) {
        document.getElementById('email-error').textContent = "Please enter your email";
        return false;
    } else if (!pwd.value) {
        document.getElementById('pwd-error').textContent = "Please enter your password";
        return false;
    } else if (pwd.value.length < 8 ) {
        document.getElementById('pwd-error').textContent = "Your password must be at least 8 characters long";
        return false;
    }
}
//document.getElementById('register-form').addEventListener("onsubmit", validateForm);
//document.getElementById('register-form').addEventListener("submit", validateForm);