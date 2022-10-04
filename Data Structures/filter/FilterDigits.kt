
fun main(){
    //initilize input
    val string1 = "abc 12232 e2349s ABDC"

    //filter digit
    val filterDigit = string1.filter { it.isDigit() }
    
    //filter letter
    val filterLetter = string1.filter { it.isLetter() }

    //print out filter digit and letter
    println(filterDigit)
    println(filterLetter)
}