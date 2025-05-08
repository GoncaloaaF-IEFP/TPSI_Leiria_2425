package pt.iefp.a14_api_v2

import android.util.Log
import androidx.lifecycle.ViewModel
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import retrofit2.Call
import retrofit2.Retrofit
import retrofit2.converter.gson.GsonConverterFactory
import retrofit2.Callback
import retrofit2.Response


class MainViewModel: ViewModel() {

    private val _cmt = MutableLiveData<Comment>()

    val comment: LiveData<Comment>
        get() = _cmt


    private var api = Retrofit.Builder()
        .baseUrl("https://jsonplaceholder.typicode.com/")
        .addConverterFactory(GsonConverterFactory.create())
        .build()
        .create(APIHandler::class.java)



    fun loadAllCmts(){
        api.getComments().enqueue(object : Callback<List<Comment>> {
            override fun onResponse(call: Call<List<Comment>>,
                                    response: Response<List<Comment>>) {
                if (response.isSuccessful){
                    response.body()?.let {
                        for(cmt in it){
                            Log.i("Aula - loadAllCmts", cmt.email)

                        }
                    }


                    Log.i("Aula - ok", "Codigo: ${response.code()}")
                }else{
                    Log.i("Aula - Erro", "Codigo: ${response.code()}")
                }
            }

            override fun onFailure(call: Call<List<Comment>>, t: Throwable) {
                Log.i("Aula - Erro", "msg: ${t.message}")
            }
        })
    }

    fun loadCmdWithId(id: Int){

        api.getComment(10).enqueue(object : Callback<Comment> {
            override fun onResponse(call: Call<Comment>, response: Response<Comment>) {
                if (response.isSuccessful){
                    response.body()?.let {

                        _cmt.postValue(it)

                        Log.i("Aula - getComment", it.email)

                    }

                    Log.i("Aula - ok", "Codigo: ${response.code()}")
                }else{
                    Log.i("Aula - Erro", "Codigo: ${response.code()}")
                }
            }

            override fun onFailure(call: Call<Comment>, t: Throwable) {
                Log.i("Aula - Erro", "Codigo: ${t.message}")
            }
        })
    }

    fun postData(){

        var myCmt = Comment(postId = 200, id = -1, name = "nome", email = "mail", body = "body")


        api.postComment(myCmt).enqueue(object : Callback<Comment> {
            override fun onResponse(call: Call<Comment>, response: Response<Comment>) {
                if (response.isSuccessful){
                        response.body()?.let {

                       Log.i("Aula - Post", it.id.toString())

                        }
                    Log.i("Aula - ok", "Codigo: ${response.code()}")
                }else{
                    Log.i("Aula - Erro", "Codigo: ${response.code()}")
                }
            }

            override fun onFailure(call: Call<Comment>, t: Throwable) {
                Log.i("Aula - Erro", "Codigo: ${t.message}")
            }
        })




    }

}

