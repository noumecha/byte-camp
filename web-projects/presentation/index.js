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