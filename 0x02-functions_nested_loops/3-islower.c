/*Write a function that checks for lowercase character.

Prototype: int _islower(int c);
//* Returns 1 if c is lowercase
//* Returns 0 otherwise
//! FYI: The standard library provides a similar function: islower. Run man islower to learn more.
*/

int _islower(int c)
{
    /*if (c >= 'a' && c <= 'z')
    {
        return(1);
    }
    return (0);*/
    //* OR
    return (c >= 97 && c <= 122); // function int return 1 or 0 by defult this we added a bolean exprition to return statement so 
    //if true return 1 and if  false return 0  
}
