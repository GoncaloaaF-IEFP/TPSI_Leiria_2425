fun main() {
    var nome = "gonçalo"

    println(nome)

    println(nome[0])

    println(nome.length)
    println(nome.capitalize())
    println(nome.uppercase())
    println(nome.lowercase())
    println(nome.compareTo("Gonçalo"))

    nome = "Gonçalo"
    println(nome.compareTo("gonçalo"))


    var a = 210;
    var b = 210;

    if (a > b) {
        println("a é maior que b")
    }else if (a == b) {
        println("a é guagl  que b")
    }else{

        println("a é menor que b")
    }


    var prof = false

    var msg = if(prof){
        "Ola Porfessor"
    }else{
        "Ola Aluno"
    }


    println(msg)


    println("nome: ")
    var myName = readLine()
    println(myName)

    println("nome: ")
    var myIdade = readLine()?.toInt()

    var anoN = 2025 - myIdade!!
    println(myName)
    println(anoN)

}