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