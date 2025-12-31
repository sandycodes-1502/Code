package com.sandycodes.myapp.activities

import android.os.Bundle
import android.content.Intent
import android.widget.Button
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.sandycodes.myapp.R
import com.sandycodes.myapp.databinding.ActivityMainBinding


class MainActivity : AppCompatActivity() {

    lateinit var binding : ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        binding = ActivityMainBinding.inflate(layoutInflater)
        var submitButton = findViewById<Button>(R.id.submitButton)
        submitButton.setOnClickListener({
            val intent = Intent(this, LayoutScreen::class.java)
            startActivity(intent)
            Toast.makeText(this, "Submitted", Toast.LENGTH_SHORT).show()

        })

    }
}