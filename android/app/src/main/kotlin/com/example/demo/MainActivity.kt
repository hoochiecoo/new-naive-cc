
package com.example.demo

import android.os.Bundle
import io.flutter.embedding.android.FlutterActivity

class MainActivity: FlutterActivity() {
    companion object {
        init {
            System.loadLibrary("native-lib")
        }
    }
}
  