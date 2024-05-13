function nameUser(firstName, lastName) {

    if(firstName === '' && lastName === ''){
        alert(`Error user did not enter name `);
    } else {
        alert(`Welcome ${firstName} ${lastName} to exercise  page 01 Java Script`);
    } 
}

const firstName = prompt ("Type your first name");
const lastName  = prompt ("Type your last name");
    
nameUser(firstName, lastName);
