package pt.iefp.a14_api_v2

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material3.Button
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.height
import androidx.compose.runtime.getValue
import androidx.compose.runtime.livedata.observeAsState
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.sp
import androidx.compose.ui.unit.dp
import pt.iefp.a14_api_v2.ui.theme._14_api_v2Theme

class MainActivity : ComponentActivity() {

    private val vm = MainViewModel()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContent {

            val cmt by vm.comment.observeAsState()

            Column(
                Modifier.fillMaxSize(),
                verticalArrangement = Arrangement.Center,
                horizontalAlignment = Alignment.CenterHorizontally
            ) {



                cmt?.let {
                    Text(it.name, fontSize = 20.sp, fontWeight = FontWeight.Bold)
                    Spacer(Modifier.height(15.dp))
                    Text(it.email, fontSize = 20.sp, fontWeight = FontWeight.Bold)
                }


                Button(onClick = {
                    vm.loadAllCmts()

                }) {
                    Text("Load All Data")
                }

                Button(onClick = {
                    vm.loadCmdWithId(10)

                }) {
                    Text("Load Cmt with id")
                }


                Button(onClick = {
                   vm.postData()
                }) {
                    Text("Post Data")
                }




            }








        }
    }
}

@Composable
fun Greeting(name: String, modifier: Modifier = Modifier) {
    Text(
        text = "Hello $name!",
        modifier = modifier
    )
}

@Preview(showBackground = true)
@Composable
fun GreetingPreview() {
    _14_api_v2Theme {
        Greeting("Android")
    }
}