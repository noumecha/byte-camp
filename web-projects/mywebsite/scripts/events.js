let btn = document.querySelector('#btn')
btn.removeAttribute('href')
btn.addEventListener('click', function() {
    alert("call the number +237 696 879 475")
})
document.addEventListener('keydown', (event) => {
    alert("vous avez appuyez sur la touche " + event.key)
})

function bonjour() {
    alert("Bonjour le monde")
}