package com.example.a9_listas

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.LazyRow
import androidx.compose.foundation.lazy.items
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.a9_listas.ui.theme._9_listasTheme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            lista(itens = listOf("val1", "val2", "val3", "val4"),
                onClick = { item, len ->
                    println("$item tem $len letras")
            })
        }
    }
}

@Composable
fun lista(itens: List<String>, onClick: (String, Int) -> Unit){
    
    LazyColumn {
        items(itens){ item ->
            Text(text = item,
                modifier = Modifier
                    .padding(20.dp)
                    .fillMaxSize()
                    .clickable { onClick(item, item.length) },
                style = MaterialTheme.typography.bodyLarge

            )
            
        }
    }

}



@Preview(showBackground = true)
@Composable
fun GreetingPreview() {

}