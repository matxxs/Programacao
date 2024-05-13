function carregar() {
    var msg = document.getElementById('msg');
    var img = document.getElementById('imagem');

    var data = new Date();
    var hora = data.getHours();

    if (hora >= 0 && hora < 12) {
        //BOM DIA
        msg.innerHTML += `<h4>BOM DIA </h4>`
        msg.innerHTML += `Agora são ${hora} horas.`
        img.src = 'fotomanha.png'
        document.body.style.background = '#aeabaf'
    } else if (hora >= 12 && hora <= 18) {
        //BOA TARDE
        msg.innerHTML += `<h4> BOA TARDE </h4>`
        msg.innerHTML += `Agora são ${hora} horas.`
        img.src = 'fototarde.png'
        document.body.style.background = '#cd876c'
    } else {
        //BOA NOITE 
        msg.innerHTML += `<h4> BOA NOITE </h4>`
        msg.innerHTML += `Agora são ${hora} horas.`
        img.src = 'fotonoite.png'
        document.body.style.background = '#212426'
    }
}