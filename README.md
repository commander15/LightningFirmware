**⚡ Be light — and let it *glow*! 🌈✨**

Let me take you on a quick dev journey…

I recently built a fun little project called **Lightning** — a desktop app that lets you *pick a color on screen and watch it light up a real RGB LED* in perfect sync.  
Sounds simple? Sure. But the path to glowing glory had a few surprises. 😄

It started with an idea:  
> "What if I could control an RGB LED with just a color picker from a Qt app?" 💭  
Next thing I knew, I was prototyping a custom board and writing serial communication logic between a Qt 6 **Widgets-based app** and an **Arduino** (via PlatformIO).  

🎯 The goals were clear:  
- A color picker that feels intuitive  
- Real-time LED feedback  
- A smooth and minimal UI  
- Cross-platform and open source

But of course… dev life happened.

🤔 *Challenge 1:* How do you embed a `QColorDialog` into a `QMainWindow` as a proper widget, not a pop-up?  
Let’s just say that required a few flag flips and avoiding native dialogs.  
👉 `Qt::Widget` + `DontUseNativeDialog` saved the day.

🧠 *Challenge 2:* Getting the LED to reflect color accurately meant going beyond just sending 8-bit RGB values — I had to deal with analog output, brightness calibration, and LED limitations. Tiny tweaks made a big difference!

And today, the result is *Lightning* ⚡:  
💻 A Qt app that sends RGBA color codes via Serial  
💡 A microcontroller that reads, converts, and lights up  
🌈 A live color preview right in the app  
🎯 And a real LED that responds instantly — it just *feels good*

Sometimes, it’s the small projects that remind you how joyful dev can be — just color, code, and creativity.  
Stay curious. Stay lit. 💡⚡

#Qt #Arduino #LightningApp #RGBFun #OpenSource #Widgets #CPlusPlus #PlatformIO #MadeWithQt #SerialPort #DIY #EmbeddedFun #CodeAndColor
