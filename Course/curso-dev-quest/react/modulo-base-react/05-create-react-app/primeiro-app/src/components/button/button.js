import React, { Component} from 'react'
import './button.css'

const sayHello = () => {
    console.log('Olá')
}


const Button = (props) => {
    return <button className='btn' onClick={sayHello}>{props.label}</button>
}
    Button.defaultProps = {
    label: 'Clique aqui'
}


// class Button extends Component {
//     render(){
//         return <button className='btn' onClick={sayHello}>{props.label}</button>
//     }
// }

// Button.defaultProps = {
//     label: 'Clique aqui com classe'
// }

export default Button