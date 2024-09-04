e = document.getElementById("first");
let t = document.getElementById('home')
//t.innerHTML = '<span>Texte avec HTML</span>';
t.textContent = "Welcome Home!";
d = document.createElement('p');
d.textContent = 'I am noumecha Spaker and i like eating and programming';
e.appendChild(d);

// Working with node :
block = document.getElementById('present');
console.log(block.attributes);
console.log("baseURI : " + block.baseURI);
console.log("Name : " + block.nodeName);
console.log("Parent : " + block.parentNode);
block.classList.add("bg-color-text");
//block.setAttribute("class", " bg-color-text");

// working with the browser
console.log(`
is closed : ${closed} \n  
name : ${window.name} \n  
screen : ${window.screen.pixelDepth} \n  
parent : ${window.parent} \n  
document : ${window.document} \n   
Height : ${window.innerHeight} \n   
Width : ${window.innerWidth} \n   
navigator : ${window.navigator} \n   
`);
// images 
let img = document.getElementById('my-image')
img.innerHTML = "Test";
console.log(`${JSON.stringify(img.innerHTML)}`)
// events 
btn = document.getElementById('link');
btn.addEventListener('click', function test() {
    console.log("Button clicked !");
});
/*btn.addEventListener('click', () => {
    console.log("Button clicked !");
});
function test() {
    console.log("Button clicked !");
}*/
// toggle Element 
block.style.display = 'none';
//display = ;
b = document.getElementById('display-btn'); 
b.textContent = 'Show';
document.getElementById('display-btn').addEventListener('click', function() {
    if (block.style.display === 'none') {
        block.style.display = 'flex';
        b.textContent = 'Mask';
    } else {
        block.style.display = 'none';
        b.textContent = 'Show';
    }
});