package com.example.unitytest1

import android.content.Intent
import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.offset
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.RectangleShape
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import com.example.unitytest1.ui.theme.UnityTest1Theme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContent {
            UnityTest1Theme {
                LetsGo()
            }
        }
    }
}

@Composable
fun MainScreen() {
    val context = LocalContext.current

    Column(
        modifier = Modifier
            .fillMaxSize()
            .background(Color.White)
            .padding(16.dp)
    ) {
        Text(
            modifier = Modifier
                .fillMaxWidth()
                .padding(bottom = 24.dp),
            style = TextStyle(
                fontWeight = FontWeight.Bold,
                fontSize = 36.sp,
                color = Color(0xff98c4ab)
            ),
            text = "Наши предложения",
            textAlign = TextAlign.Center
        )

        Column(
            modifier = Modifier
                .fillMaxWidth()
                .padding(bottom = 32.dp)
        ) {
            Box(
                modifier = Modifier
                    .fillMaxWidth()
                    .height(200.dp)
                    .clip(RoundedCornerShape(8.dp))
                    .background(Color.LightGray)
                    .clickable {

                        val intent = Intent()
                        intent.setClassName(
                            context,
                            "com.unity3d.player.UnityPlayerActivity"
                        )
                        context.startActivity(intent)
                    }
            ) {
                Image(
                    painter = painterResource(id = R.drawable.first_flat),
                    contentDescription = "Первая квартира",
                    modifier = Modifier.fillMaxSize(),
                    contentScale = ContentScale.Crop
                )
            }

            Text(
                modifier = Modifier.padding(top = 12.dp, bottom = 4.dp),
                style = TextStyle(
                    fontWeight = FontWeight.SemiBold,
                    fontSize = 17.sp
                ),
                text = "33 500 000 ₽",
                color = Color.Black
            )

            Text(
                style = TextStyle(
                    fontWeight = FontWeight.Normal,
                    fontSize = 12.sp
                ),
                text = "Апартаменты · 60 м² · 16/16 · м. Павелецкая 5 мин пешком",
                color = Color.Black
            )
        }

        Column(
            modifier = Modifier
                .fillMaxWidth()
                .padding(bottom = 32.dp)
        ) {
            Box(
                modifier = Modifier
                    .fillMaxWidth()
                    .height(200.dp)
                    .clip(RoundedCornerShape(8.dp))
                    .background(Color.LightGray)
                    .clickable {
                        // Запуск Unity проекта для второй квартиры
                        val intent = Intent()
                        intent.setClassName(
                            context,
                            "com.unity3d.player.UnityPlayerActivity"  // ← именно так
                        )
                        context.startActivity(intent)
                    }
            ) {
                Image(
                    painter = painterResource(id = R.drawable.second_kv),
                    contentDescription = "Вторая квартира",
                    modifier = Modifier.fillMaxSize(),
                    contentScale = ContentScale.Crop
                )
            }

            Text(
                modifier = Modifier.padding(top = 12.dp, bottom = 4.dp),
                style = TextStyle(
                    fontWeight = FontWeight.SemiBold,
                    fontSize = 17.sp
                ),
                text = "15 500 000 ₽",
                color = Color.Black
            )

            Text(
                style = TextStyle(
                    fontWeight = FontWeight.Normal,
                    fontSize = 12.sp
                ),
                text = "Апартаменты · 16 м² · 3/5 · м. Сокол 7 мин пешком",
                color = Color.Black
            )
        }

        Text(
            modifier = Modifier
                .fillMaxWidth()
                .padding(top = 16.dp),
            style = TextStyle(
                fontWeight = FontWeight.Bold,
                fontSize = 27.sp,
                color = Color(0xff98c4ab)
            ),
            text = "Скоро будет больше!",
            textAlign = TextAlign.Center
        )
    }
}

@Composable
fun InfoScreen() {
    Column(
        modifier = Modifier
            .fillMaxSize()
            .background(Color.White)
    ) {

        Text(
            text = "О нас",
            modifier = Modifier
                .fillMaxWidth(),
            fontSize = 36.sp,
            fontWeight = FontWeight.Bold,
            color = Color(0xff98c4ab),
            textAlign = TextAlign.Center
        )

        Column(
            modifier = Modifier
                .fillMaxWidth()
        ) {
            Box(
                modifier = Modifier
                    .fillMaxWidth()
                    .height(200.dp)
                    .clip(RoundedCornerShape(8.dp))
                    .background(Color.LightGray)
            ) {
                Image(
                    painter = painterResource(id = R.drawable.screen_second),
                    contentDescription = "Базовая картинка",
                    modifier = Modifier.fillMaxSize(),
                    contentScale = ContentScale.Crop
                )

                Image(
                    painter = painterResource(id = R.drawable.white_effect),
                    contentDescription = "Нижнее наложение",
                    contentScale = ContentScale.Crop,
                    modifier = Modifier
                        .fillMaxWidth()
                        .height(67.dp)
                        .align(Alignment.BottomStart)
                        .clip(RectangleShape)
                )
            }
        }

        Image(
            painter = painterResource(R.drawable.logo_upd),
            contentDescription = "Логотип",
            modifier = Modifier
                .align(Alignment.CenterHorizontally)
                .height(100.dp)
                .offset(y = -75.dp)
        )

        Text(
            text = "Это когда купил квартиру и\nуже в уютном доме",
            fontSize = 20.sp,
            fontWeight = FontWeight.Bold,
            color = Color(0xff98c4ab),
            textAlign = TextAlign.Center,
            modifier = Modifier
                .fillMaxWidth()
                .offset(y = -75.dp)
        )

        Image(
            painter = painterResource(R.drawable.cat_figma),
            contentDescription = "Маленький котик",
            modifier = Modifier
                .align(Alignment.CenterHorizontally)
                .height(70.dp)
                .offset(y = -45.dp)
        )

        Text(
            text = "Наша компания специализируется\n" +
                    "на создании и визуализации комфортного жиличного\n" +
                    "пространства, для того, чтобы вы приобрели\n" +
                    "недвижимость и уже оказались как в родном доме",
            fontSize = 12.sp,
            lineHeight = 14.sp,
            textAlign = TextAlign.Center,
            color = Color.Black,
            modifier = Modifier
                .fillMaxWidth()
                .offset(y = -50.dp)
        )

        Box(
            modifier = Modifier
                .fillMaxWidth()
        ) {
            Image(
                painter = painterResource(R.drawable.greeneffect),
                contentDescription = "Фон",
                contentScale = ContentScale.Crop
            )

            Column(
                modifier = Modifier
                    .fillMaxWidth()
                    .align(Alignment.BottomStart)
                    .padding(16.dp)
            ) {
                Text(
                    text = "Контактная информация",
                    fontSize = 26.sp,
                    color = Color(0xff98c4ab),
                    fontWeight = FontWeight.Bold
                )

                Spacer(modifier = Modifier.height(16.dp))

                Row(
                    verticalAlignment = Alignment.CenterVertically
                ) {
                    Image(
                        painter = painterResource(R.drawable.figma_phone),
                        contentDescription = "Телефон",
                        modifier = Modifier.size(28.dp)
                    )
                    Spacer(modifier = Modifier.width(12.dp))
                    Text(
                        text = "+7(999)999-99-99",
                        fontSize = 14.sp,
                        color = Color.Black
                    )
                }

                Spacer(modifier = Modifier.height(12.dp))

                Row(
                    verticalAlignment = Alignment.CenterVertically
                ) {
                    Image(
                        painter = painterResource(R.drawable.figma_em),
                        contentDescription = "Email",
                        modifier = Modifier.size(28.dp)
                    )
                    Spacer(modifier = Modifier.width(12.dp))
                    Text(
                        text = "vDome@exsample.com",
                        fontSize = 14.sp,
                        color = Color.Black
                    )
                }
            }
        }
    }
}

@Composable
fun RuleScreen() {
    Column(
        modifier = Modifier
            .fillMaxSize()
            .background(Color.White)
    ) {

        Text(
            text = "Третий экран",
            modifier = Modifier
                .fillMaxWidth(),
            fontSize = 36.sp,
            fontWeight = FontWeight.Bold,
            color = Color(0xff98c4ab),
            textAlign = TextAlign.Center
        )

        Column(
            modifier = Modifier
                .fillMaxWidth()
        ) {
            Box(
                modifier = Modifier
                    .fillMaxWidth()
                    .height(200.dp)
                    .clip(RoundedCornerShape(8.dp))
                    .background(Color.LightGray)
            ) {
                Image(
                    painter = painterResource(id = R.drawable.screen_second),
                    contentDescription = "Базовая картинка",
                    modifier = Modifier.fillMaxSize(),
                    contentScale = ContentScale.Crop
                )

                Image(
                    painter = painterResource(id = R.drawable.white_effect),
                    contentDescription = "Нижнее наложение",
                    contentScale = ContentScale.Crop,
                    modifier = Modifier
                        .fillMaxWidth()
                        .height(67.dp)
                        .align(Alignment.BottomStart)
                        .clip(RectangleShape)
                )
            }
        }

        Image(
            painter = painterResource(R.drawable.logo_upd),
            contentDescription = "Логотип",
            modifier = Modifier
                .align(Alignment.CenterHorizontally)
                .height(100.dp)
                .offset(y = -75.dp)
        )
    }
}


@Composable
fun BottomBar(
    onHome: () -> Unit,
    onInfo: () -> Unit,
    onRule: () -> Unit
) {
    Box(
        modifier = Modifier
            .fillMaxWidth()
            .background(Color.White)
            .padding(bottom = 60.dp),
        contentAlignment = Alignment.Center
    ) {
        Box(
            modifier = Modifier
                .clip(RoundedCornerShape(100))
                .background(Color(0xffbcd4c4))
                .padding(horizontal = 5.dp, vertical = 5.dp)
        ) {
            Row(
                horizontalArrangement = Arrangement.spacedBy(30.dp),
                verticalAlignment = Alignment.CenterVertically
            ) {

                Box(
                    modifier = Modifier
                        .clip(RoundedCornerShape(50))
                        .clickable { onHome() }
                        .padding(12.dp)
                ) {
                    Image(
                        painter = painterResource(R.drawable.house),
                        contentDescription = "home",
                        modifier = Modifier.height(28.dp)
                    )
                }

                Box(
                    modifier = Modifier
                        .clip(RoundedCornerShape(50))
                        .clickable { onInfo() }
                        .padding(12.dp)
                ) {
                    Image(
                        painter = painterResource(R.drawable.info),
                        contentDescription = "info",
                        modifier = Modifier.height(28.dp)
                    )
                }

                Box(
                    modifier = Modifier
                        .clip(RoundedCornerShape(50))
                        .clickable { onRule() }
                        .padding(12.dp)
                ) {
                    Image(
                        painter = painterResource(R.drawable.notes),
                        contentDescription = "info",
                        modifier = Modifier.height(28.dp)
                    )
                }
            }
        }
    }
}

@Composable
fun LetsGo() {
    val navController = rememberNavController()

    Scaffold(
        bottomBar = {
            BottomBar(
                onHome = { navController.navigate("main") },
                onInfo = { navController.navigate("info") },
                onRule = { navController.navigate("rule") }
            )
        }
    ) { paddingValues ->
        NavHost(
            navController = navController,
            startDestination = "main",
            modifier = Modifier.padding(paddingValues)
        ) {
            composable("main") { MainScreen() }
            composable("info") { InfoScreen() }
            composable("rule") { RuleScreen() }
        }
    }
}


