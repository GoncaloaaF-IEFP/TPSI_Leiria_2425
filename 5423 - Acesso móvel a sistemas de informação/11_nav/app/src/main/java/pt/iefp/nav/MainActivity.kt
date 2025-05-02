package pt.iefp.nav

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.compose.runtime.Composable
import androidx.compose.ui.tooling.preview.Preview
import androidx.navigation.NavType
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.navigation.navArgument


class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContent {

            var myNavController = rememberNavController()


            NavHost(
                navController = myNavController,
                startDestination = "home"
            ){
                composable("home"){
                    HomeView(myNavController)
                }


                composable(
                    route = "infos/{nome}/{idade}",
                    arguments = listOf(
                        navArgument("nome"){type = NavType.StringType},
                        navArgument("idade"){type = NavType.IntType}
                    )
                ){ elm ->
                    val nome = elm.arguments?.getString("nome") ?: "sem Nome"
                    var idade = elm.arguments?.getInt("idade") ?: -1
                    InfoView(nome, idade)

                }






            }









        }
    }
}






@Preview(showBackground = true)
@Composable
fun GreetingPreview() {

}