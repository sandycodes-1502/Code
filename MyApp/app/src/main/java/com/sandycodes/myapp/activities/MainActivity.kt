package com.sandycodes.myapp.activities

import android.Manifest
import android.content.Intent
import android.os.Bundle
import android.provider.MediaStore
import android.util.Log
import android.widget.Toast
import androidx.activity.result.contract.ActivityResultContracts
import androidx.appcompat.app.AppCompatActivity
import androidx.databinding.DataBindingUtil
import com.google.android.gms.location.FusedLocationProviderClient
import com.google.android.gms.location.LocationServices
import com.sandycodes.myapp.R
import com.sandycodes.myapp.databinding.ActivityMainBinding
import com.squareup.picasso.Picasso


class MainActivity : AppCompatActivity() {
    lateinit var binding : ActivityMainBinding
    private lateinit var fusedLocationProviderClient: FusedLocationProviderClient

    val locationPermissionRequest = registerForActivityResult(
        ActivityResultContracts.RequestMultiplePermissions()
    ) { permissions ->
        when {
            permissions.getOrDefault(Manifest.permission.ACCESS_FINE_LOCATION, false) -> {}
            permissions.getOrDefault(Manifest.permission.ACCESS_COARSE_LOCATION, false) -> {}
            else -> {}
        }
    }

    override fun onActivityResult(
        requestCode: Int,
        resultCode: Int,
        data: Intent?,
    ) {
        super.onActivityResult(requestCode, resultCode, data)

        if (requestCode == 1 && resultCode == RESULT_OK){
            val uri = data?.data
            Picasso.get().load(uri).into(binding.image)
        }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = DataBindingUtil.setContentView(this, R.layout.activity_main)
        fusedLocationProviderClient = LocationServices.getFusedLocationProviderClient(this@MainActivity)

        locationPermissionRequest.launch(arrayOf(
            Manifest.permission.ACCESS_FINE_LOCATION,
            Manifest.permission.ACCESS_COARSE_LOCATION
        ))

        checkCallingPermission(Manifest.permission.ACCESS_FINE_LOCATION)

        binding.submitButton.setOnClickListener({
            val intent = Intent(this, LayoutScreen::class.java)
            startActivity(intent)
            Toast.makeText(this, "Submitted", Toast.LENGTH_SHORT).show()
        })

        fusedLocationProviderClient.lastLocation.addOnSuccessListener {
            Log.i("Location", "onCreate: ${it.latitude} ${it.longitude} ")
        }

        Picasso.get().load("https://images.wallpapersden.com/image/download/sunset-chrome-os-stock_a2lqbGiUmZqaraWkpJRrZWWta2Vl.jpg")
            .into(binding.image)

        binding.image.setOnClickListener {
            val intent = Intent(Intent.ACTION_PICK, MediaStore.Images.Media.EXTERNAL_CONTENT_URI)
            intent.setType("image/*")

            startActivityForResult(intent, 1)
        }

    }
}