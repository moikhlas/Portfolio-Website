let allRods = document.querySelectorAll('.rod')

let rodFunction = (backgroundOne, durationOne,  backgroundTwo = '', durationTwo = 0) => {
    for(let i = 1; i < 11; i++) {
        let rod = document.querySelector(`#rod-${i}`);
        setTimeout(() => {
            rod.style.backgroundColor = `${backgroundOne}`;
            if(backgroundTwo != '' || durationTwo != 0) {
                setTimeout(() => {
                    rod.style.backgroundColor = `${backgroundTwo}`;
                }, i * durationTwo);
            }
        }, i * durationOne);
    }
}

let loadPageAnimetion = (callBack) => {
    let backgroundHeader = document.querySelector('.background-header');
    callBack('rgba(0, 0, 0, 0.7)', 150);
    // backgroundHeader.style.zIndex = '1'
}

loadPageAnimetion(rodFunction);

let regularAnimation = (callBack) => {
    let colorArray = [
        'rgba(0, 0, 0, 0.55)',
        'rgba(0, 0, 0, 0.8)',
        'rgba(0, 0, 0, 0.6)'
    ]
    let color = colorArray[Math.floor(Math.random() * colorArray.length)];
    setTimeout(() => {
        callBack(color, 200)
    }, 4000)
    console.log(callBack)
}

//Animation to run regularly after 10s

setInterval(() => {
    regularAnimation(rodFunction); // Call regularAnimation with rodFunction as callback
}, 5000);
