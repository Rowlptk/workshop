function myFunction()
{
    var x = document.getElementById('top-menu');
    if(x.className === "topmenu")
    {
        x.className += " responsive";
    }
    else
    {
        x.className = "topmenu";
    }
}