package com.sandycodes.myapp.activities

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.viewbinding.ViewBinding
import androidx.viewpager2.widget.ViewPager2
import com.google.android.material.tabs.TabLayout
import com.google.android.material.tabs.TabLayoutMediator
import com.sandycodes.myapp.R
import com.sandycodes.myapp.adapter.ViewPagerAdapter
import com.sandycodes.myapp.databinding.ActivityLayoutScreenBinding

class LayoutScreen : AppCompatActivity() {
    var tabLayoutMediator : TabLayoutMediator? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_layout_screen)

        val tablayout = findViewById<TabLayout>(R.id.tablayout)
        val viewpager = findViewById<ViewPager2>(R.id.viewpager)

        viewpager.adapter = ViewPagerAdapter(supportFragmentManager, lifecycle)
        viewpager.offscreenPageLimit = 2

        tabLayoutMediator = TabLayoutMediator(tablayout, viewpager){ tab, position ->
            when(position){
                0 -> tab.text = "Dashboard"
                1 -> tab.text = "Peoples"
            }
        }

        if (tabLayoutMediator?.isAttached() == false) {
            tabLayoutMediator?.attach()
        }

    }
}