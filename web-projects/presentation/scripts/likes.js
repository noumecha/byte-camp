lBtn = document.getElementById('likeBtn');
dBtn = document.getElementById('dLikeBtn');
likes = document.getElementById('likes');

likes.textContent = parseInt(0);

function like() {
    likes.textContent = parseInt(likes.textContent) + parseInt(1);
}
function disLike() {
    likes.textContent = parseInt(likes.textContent) - parseInt(1);
}

//lBtn.addEventListener('click', like);
//dBtn.addEventListener('click', disLike);