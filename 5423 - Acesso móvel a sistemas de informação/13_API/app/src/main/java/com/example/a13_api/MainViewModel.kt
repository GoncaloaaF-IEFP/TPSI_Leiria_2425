package com.example.a13_api

import androidx.lifecycle.ViewModel
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData



class MainViewModel:ViewModel(){

    private val _cmt = MutableLiveData<Comment>()


    val nome: String
        get() = _cmt.value?.name.toString()

    val email: String
        get() = _cmt.value?.email.toString()


    fun setCmt(cmt:Comment){
        _cmt.value = cmt

    }
}