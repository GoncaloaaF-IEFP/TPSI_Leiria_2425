package com.example.a1_demo_composer

import android.os.Bundle
import android.util.Log
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.width
import androidx.compose.material3.Button
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
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