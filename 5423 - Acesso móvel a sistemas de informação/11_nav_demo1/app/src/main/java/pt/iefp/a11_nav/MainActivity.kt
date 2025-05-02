package pt.iefp.a11_nav

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

            val navController = rememberNavController()

            NavHost(
                navController = navController,
                startDestination = "home"
            ) {
                composable("home") {
                    HomeActivity(navController)
                }

                composable(
                    route = "infos/{nome}/{idade}",
                    arguments = listOf(
                        navArgument("nome") { type = NavType.StringType },
                        navArgument("idade") { type = NavType.IntType }
                    )
                ) { backStackEntry ->
                    val nome = backStackEntry.arguments?.getString("nome") ?: "Sem nome"
                    val idade = backStackEntry.arguments?.getInt("idade") ?: -1
                    infoActivity(nome, idade)
                }
            }



        }
    }
}



@Preview(showBackground = true)
@Composable
fun GreetingPreview() {

}