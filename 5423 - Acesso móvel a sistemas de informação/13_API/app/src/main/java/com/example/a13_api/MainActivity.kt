package com.example.a13_api

import android.os.Bundle
import android.util.Log
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material3.Button
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import retrofit2.Call
import retrofit2.Callback
import retrofit2.Response
import retrofit2.Retrofit
import retrofit2.converter.gson.GsonConverterFactory
import kotlin.math.log

class MainActivity : ComponentActivity() {

    var vm = MainViewModel()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {

            val name by remember {
                mutableStateOf(vm.nome)
            }

            Column(Modifier.fillMaxSize(),
                    verticalArrangement = Arrangement.Center,
                    horizontalAlignment = Alignment.CenterHorizontally
                ) {

                Text(name)
                Text(vm.nome)

                Button(onClick = {
                    Log.i("Aula", "1 inicio ler todos")
                    getAllComments()
                    Log.i("Aula", "7 Fim ler todos")

                }) {

                    Text("Carrega todos os comentarios ")
                }

                Button(onClick = {
                    Log.i("Aula", "Fun inicio ler um cmt")
                    getComment(5)
                    Log.i("Aula", "Fim ler um cmt")
                }) {

                    Text("Carrega um comentario ")
                }




            }

        }
    }




fun getAllComments() {
    Log.i("Aula - Fun", "2 inicio ler todos")

    var api = Retrofit.Builder()
        .baseUrl("https://jsonplaceholder.typicode.com/")
        .addConverterFactory(GsonConverterFactory.create())
        .build()
        .create(APIHandler::class.java)
    Log.i("Aula - Fun", "3 Retrofit.Builder() - Criado")
    Log.i("Aula - Fun", "4 Inicio da leitura de dados")


    api.getComments().enqueue(object : Callback<List<Comment>> {

        override fun onResponse(
            call: Call<List<Comment>>,
            response: Response<List<Comment>>
        ) {

            if (response.isSuccessful) {
                response.body()?.let {
                    for (cmt in it) {
                        Log.i("Aula - fun", cmt.email)

                    }


                }


            }


        }


        override fun onFailure(call: Call<List<Comment>>, t: Throwable) {
            Log.i("Aula - Fun - erro", "5 Erro ${t.message}")
        }


    })



    Log.i("Aula - Fun", "6 Fim ler todos")

}

fun getComment(id: Int) {
        Log.i("Aula - Fun", "inicio ler um cmt")

        var api = Retrofit.Builder()
            .baseUrl("https://jsonplaceholder.typicode.com/")
            .addConverterFactory(GsonConverterFactory.create())
            .build()
            .create(APIHandler::class.java)

        api.getComment(id).enqueue(object : Callback<Comment> {
            override fun onResponse(call: Call<Comment>, response: Response<Comment>) {
                if (response.isSuccessful) {

                    response.body()?.let {
                        Log.i("Aula - Fn", "nome: ${it.name}, email: ${it.email}")
                        vm.setCmt(it)
                         nome = vm.nome
                        Log.i("Aula", vm.email)
                    }
                }
            }

            override fun onFailure(call: Call<Comment>, t: Throwable) {
                Log.i("Aula - Fun - erro", "5 Erro ${t.message}")
            }

        })









        Log.i("Aula - Fun", "Fim ler um cmt")
    }

}

@Preview(showBackground = true)
@Composable
fun GreetingPreview() {

}