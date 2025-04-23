package com.example.a1_demo_composer

import android.os.Bundle
import android.util.Log
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
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
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.font.FontStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.a1_demo_composer.ui.theme._1_demo_composerTheme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        
        setContent {
            
            var nome =  remember {
                mutableStateOf("Gonçalo")
            }

            var nome_v2 by remember {
                mutableStateOf("Gonçalo 3")
            }

            var txt1 by remember {
                mutableStateOf("")
            }

            var txt1_len by remember {
                mutableStateOf(txt1.length)
            }
            
            Column {

                Text(text = "Ola Mundo", 
                    fontWeight = FontWeight.ExtraBold,
                    color = Color.Red, 
                    fontSize = 40.sp, 
                    fontStyle = FontStyle.Italic
                )
                
                Spacer(modifier = Modifier.height(50.dp))
                
                Text(
                    text = "Ola Mundo",
                    fontWeight = FontWeight.ExtraBold,
                    color = Color.Blue,
                    fontSize = 40.sp,
                    fontStyle = FontStyle.Italic
                )

                Spacer(modifier = Modifier.height(50.dp))

                Row{
                    Text(text = "Txt1",
                        fontWeight = FontWeight.ExtraBold,
                        color = Color.Red,
                        fontSize = 40.sp,
                        fontStyle = FontStyle.Italic)

                    Spacer(modifier = Modifier.width(40.dp))
                    
                  myTxt(msg = "Txt 3")
                    
                }// row 1
                
                Spacer(modifier = Modifier.height(30.dp))

                Text(text = nome.value,
                    fontWeight = FontWeight.ExtraBold,
                    color = Color.Black,
                    fontSize = 30.sp,
                    fontStyle = FontStyle.Italic
                )

                Button(onClick = {
                        nome.value = "foo"
                        Log.d("novo nome", nome.value)
                }) {

                    Text(text = "Mudar Nome")
                }




            Column(modifier = Modifier.padding(
                horizontal = 15.dp,
                vertical = 40.dp)
            ) {

                Text(
                    text = nome_v2,
                    fontWeight = FontWeight.ExtraBold,
                    color = Color.Black,
                    fontSize = 30.sp,
                    fontStyle = FontStyle.Italic
                )


                TextField(value = txt1,
                    onValueChange = {
                        txt1 = it
                        txt1_len = it.length
                    })
                Text(text = "num chars $txt1_len")


                Button(onClick = {
                    if (txt1.length > 3 ){
                        nome_v2 = txt1
                        txt1 = ""
                    }

                    Log.d("novo nome", nome_v2)
                }) {

                    Text(text = "Mudar Nome 2")
                }

            }

            } // Column 1

        }
    }
}

@Composable
fun myTxt(msg: String){
    
    Text(
        text = msg,
        fontWeight = FontWeight.ExtraBold,
        color = Color.Blue,
        fontSize = 40.sp,
        fontStyle = FontStyle.Italic
    )
    
}






@Preview(showBackground = true)
@Composable
fun GreetingPreview() {
    _1_demo_composerTheme {

    }
}