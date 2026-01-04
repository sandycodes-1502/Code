package com.sandycodes.myapp.activities

import android.content.Intent
import android.os.Bundle
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

//        val username = binding.username.text.toString()
//        val sharedpref = getSharedPreferences("LOCAL_SHARED_PREF_DB", MODE_PRIVATE)
//        val key = "user_name"

//        binding.username.setText(sharedpref.getString(key, ""))

        binding = ActivityMainBinding.inflate(layoutInflater)
        var submitButton = findViewById<Button>(R.id.submitButton)
        submitButton.setOnClickListener({
            val intent = Intent(this, LayoutScreen::class.java)
            startActivity(intent)
            Toast.makeText(this, "Submitted", Toast.LENGTH_SHORT).show()
//            sharedpref.edit {
//                putString(key, username) }
        })

    }
}