package pt.iefp.nav

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.width
import androidx.compose.material3.Button
import androidx.compose.material3.Text
import androidx.compose.material3.TextField
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.navigation.NavController


@Composable
fun HomeView(navCtrl: NavController){
    var nome by remember {
        mutableStateOf("")
    }

    var idade by remember {
        mutableStateOf("")
    }

    Column(
        modifier = Modifier.fillMaxSize()
            .padding(horizontal = 20.dp),
            horizontalAlignment = Alignment.CenterHorizontally,
            verticalArrangement = Arrangement.Center

    ) {


        Text(text = "Infos",
            fontSize = 25.sp,
            fontWeight = FontWeight.Bold,
            modifier = Modifier.padding(15.dp)
            )


        Row{

            TextField(
                label = {
                    Text("Nome")
                },
                value = nome,
                onValueChange = {
                    nome = it
                },
                modifier = Modifier.weight(3f)
            )

            Spacer(modifier = Modifier.width(2.dp))

            TextField(
                label = {
                    Text("Idade")
                },
                value = idade,
                onValueChange = {
                    idade = it
                },
                modifier = Modifier.weight(1f)
            )

            } // linha TextField

        Spacer(modifier = Modifier.height(2.dp))

        Row {
            Button(onClick = {

                val idade = idade.toIntOrNull()

                //navg
                navCtrl.navigate(route = "infos/$nome/$idade")

            }, modifier = Modifier.weight(1f)) {
                Text("Enviar Dados")
            }



            Button(onClick = {
                nome = ""
                idade = ""



            }
                , modifier = Modifier.weight(1f)) {

                Text(text = "Limpar")
            }





        }// linha btns






    }






}