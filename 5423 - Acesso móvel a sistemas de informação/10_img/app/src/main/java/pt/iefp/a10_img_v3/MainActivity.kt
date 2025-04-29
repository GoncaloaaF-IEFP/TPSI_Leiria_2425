package pt.iefp.a10_img_v3

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.compose.foundation.Image
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row

import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import pt.iefp.a10_img_v3.ui.theme._10_img_v3Theme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContent {





            Column {

                Row(verticalAlignment= Alignment.CenterVertically) {
                    Image(
                        painter = painterResource(R.drawable.img),
                        contentDescription = "img de comida",
                        contentScale = ContentScale.FillBounds,
                        modifier = Modifier
                            .padding(top = 20.dp, start = 20.dp)
                            .size(80.dp, 80.dp)
                            .clip(CircleShape)
                            .border(2.dp, Color.Red, CircleShape)
                    )

                    Text(
                        "Ola Mundo",
                        fontWeight = FontWeight.Bold,
                        fontSize = 20.sp,
                        modifier = Modifier.padding(20.dp)
                    )


                }

            }




        }
    }
}

@Preview(showBackground = true)
@Composable
fun GreetingPreview() {

}