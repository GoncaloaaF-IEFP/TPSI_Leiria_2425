

fun main() {
    olaMundo()
    soma(1,3)
    var res = soma2(2,4)
    println("soma 2 -> ${res}")

    println(msg("Gonçalo", 2025))
}


fun olaMundo(){
    println("Ola Mundo!")
}


fun soma(num1:Int, num2:Int){
    var soma  = num1 + num2
    println("soma   -> $soma")
}

// def soma2(num1:Int, num2:Int) -> Int{
// fun nome(param):return

fun soma2(num1:Int, num2:Int): Int{
    var soma  = num1 + num2
    return soma
}


fun msg(nome:String, ano:Int):String{
    return "Ola $nome, benm vindo  em $ano"
}