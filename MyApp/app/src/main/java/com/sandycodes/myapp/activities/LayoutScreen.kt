package com.sandycodes.myapp.activities

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import com.google.android.material.tabs.TabLayoutMediator
import com.sandycodes.myapp.adapter.ViewPagerAdapter
import com.sandycodes.myapp.databinding.ActivityLayoutScreenBinding

class LayoutScreen : AppCompatActivity() {
    private lateinit var binding: ActivityLayoutScreenBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityLayoutScreenBinding.inflate(layoutInflater)
        setContentView(binding.root)

        binding.viewpager.adapter = ViewPagerAdapter(supportFragmentManager, lifecycle)

        TabLayoutMediator(binding.tablayout, binding.viewpager) { tab, position ->
            when (position) {
                0 -> tab.text = "Dashboard"
                1 -> tab.text = "Peoples"
            }
        }.attach()
    }
}