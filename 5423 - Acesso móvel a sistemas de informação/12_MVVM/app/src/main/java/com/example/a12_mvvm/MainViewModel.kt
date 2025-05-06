package com.example.a12_mvvm

import androidx.lifecycle.ViewModel
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData


data class Aluno (var nome:String)

class MainViewModel:ViewModel(){

    private val _aluno = MutableLiveData<Aluno>()

    val aluno: LiveData<Aluno>
        get() = _aluno

    val alunoNome: String
        get() = _aluno.value?.nome.toString()

    init {
        _aluno.value = Aluno("Gonçalo")
    }

    fun nudarNome(){
        _aluno.value = _aluno.value?.copy(nome = "Novo nome")

    }


}