### 🪨📄✂️ Rock Paper Scissor Game in C

A simple but feature-rich **Rock Paper Scissor game** developed in **C language**.

Ye project maine ek basic Rock Paper Scissor implementation se start kiya tha aur uske baad apne ideas aur game-playing experience ke according multiple features add karke isse ek **interactive, user-friendly console game** banaya.

---

### 🎮 About The Game

Rock Paper Scissor ek simple game hai jisme player aur computer ek choice select karte hain:

* `s` → Stone 🪨
* `p` → Paper 📄
* `z` → Scissor ✂️

Game automatically computer ki random choice generate karta hai aur phir dono choices ke according winner decide hota hai.

### Game Rules

| You         | Computer    | Result        |
| ----------- | ----------- | ------------- |
| Stone 🪨    | Paper 📄    | Computer Wins |
| Paper 📄    | Stone 🪨    | You Win       |
| Stone 🪨    | Scissor ✂️  | You Win       |
| Scissor ✂️  | Stone 🪨    | Computer Wins |
| Paper 📄    | Scissor ✂️  | Computer Wins |
| Scissor ✂️  | Paper 📄    | You Win       |
| Same Choice | Same Choice | Draw 🤝       |

---

## 🚀 Features

Is project me maine basic game ke upar multiple features implement kiye hain.

### 1. 🔄 Multiple Rounds

Game sirf ek baar nahi chalta.

User `y` select karke **multiple rounds continuously** khel sakta hai.

```text
Kya aap dobara game khelna chahte ho? (y/n):
```

---

### 2. 🎲 Random Computer Choice

Computer har round randomly:

```text
Stone
Paper
Scissor
```

me se ek choice select karta hai.

Iske liye C ka:

```c
rand()
srand()
time()
```

use kiya gaya hai.

---

### 3. 🔤 Uppercase + Lowercase Support

User lowercase ke saath uppercase input bhi de sakta hai.

For example:

```text
s / S
p / P
z / Z
```

Program uppercase input ko automatically lowercase me convert karta hai.

---

### 4. ⚠️ Invalid Input Handling

Agar user `s`, `p` ya `z` ke alawa koi character enter karta hai, to program invalid input message show karta hai.

```text
Invalid choice!

Please sirf s, p ya z character type karo.
Wrong attempts: 1/3
```

---

### 5. 🚫 3 Wrong Attempts Limit

Agar user continuously **3 baar invalid choice** enter karta hai, to game safely exit ho jata hai.

```text
Too many invalid attempts!

Aapne 3 baar wrong input enter kiya hai.
Game ab exit ho raha hai.

THANK YOU FOR PLAYING!
```

---

### 6. 🔁 Play Again Validation

Game ke end of round par user se poocha jata hai:

```text
Kya aap dobara game khelna chahte ho? (y/n):
```

Sirf:

```text
y = Yes
n = No
```

valid hain.

Uppercase `Y` aur `N` bhi supported hain.

---

### 7. ⚠️ Play Again ke liye 3 Wrong Attempts

Agar user `y/n` ke place par koi aur character **3 baar** enter karta hai, to program automatically exit ho jata hai.

Final score bhi show kiya jata hai.

---

## 🏆 Main Game Feature — First to 10 Wins

Ye feature maine basic game me khud add kiya hai.

Game me **jo player sabse pehle 10 rounds jeetega, wahi overall game winner hoga.**

### You reach 10 wins

```text
============================================
           GAME WINNER
============================================

CONGRATULATIONS!

You reached 10 wins first!
WOW! You are the WINNER!
```

### Computer reaches 10 wins

```text
============================================
         COMPUTER IS THE WINNER
============================================

Oh! Computer reached 10 wins first.
Better luck next time!
```

10 wins complete hote hi game automatically exit ho jata hai.

---

## 🤝 Draw Limit — 50 Draws

Ek aur feature jo maine khud add kiya hai:

Agar game me **50 draws** ho jayein, to game automatically end ho jata hai.

```text
============================================
           50 DRAWS REACHED!
============================================

Aaj winner decide nahi ho paya.
50 games draw ho gaye!
Next time try again!
```

Iska idea ye tha ki game theoretically unlimited na chale aur ek maximum draw limit ho.

---

## 📊 Score Tracking

Game continuously score maintain karta hai:

```text
========== SCORE ==========
You      : 5 / 10
Computer : 3 / 10
Draw     : 2 / 50
===========================
```

Game end hone par **Final Score** bhi show hota hai.

---

## 💡 Project Idea

Is project ka idea mujhe **real-life game experience** se bhi mila.

Main jab friends ke saath Rock Paper Scissor khelta tha, tab mujhe laga ki:

> "Agar isi game ko C language me bana kar computer ke against khela jaye aur kuch extra rules/features add kiye jayein, to project aur interesting ho sakta hai."

Isi thought se maine basic Rock Paper Scissor game ko modify karna start kiya.

---

## 📌 Starting Point / Source

Project ka **initial/basic Rock Paper Scissor code** maine **GeeksforGeeks (GFG)** ke ek implementation se reference kiya tha.

Original code me basic functionality thi:

* Computer ke liye random choice
* User input
* Winner decide karna
* Draw / Win / Lose result

Us basic implementation ko samajhne ke baad maine uske upar apne requirements aur ideas ke according features add aur modify kiye.


## 🛠️ What I Added / Modified

Basic implementation ke comparison me maine mainly ye changes kiye:

### Original Basic Game

```text
User input
     ↓
Computer random choice
     ↓
Winner decide
     ↓
Result
     ↓
Program Exit
```

### My Modified Version

```text
                 START
                   ↓
          User chooses s/p/z
                   ↓
          Computer random choice
                   ↓
             Result
                   ↓
             Score Update
                   ↓
        ┌──────────┼──────────┐
        ↓          ↓          ↓
     You = 10  Computer=10  Draw=50
        ↓          ↓          ↓
      WIN        LOSE       DRAW LIMIT
        ↓          ↓          ↓
        └──────────┼──────────┘
                   ↓
              Game Exit
                   
        If no limit reached
                   ↓
             Play Again?
              /       \
             y         n
             ↓         ↓
         New Round    Exit
```

### Major modifications:

* Infinite/multiple rounds
* Score tracking
* First-to-10 winning system
* 50 draw limit
* Invalid input validation
* 3 invalid attempts limit
* `y/n` play-again validation
* 3 wrong `y/n` attempts limit
* Uppercase input support
* Final score display
* User-friendly Hindi + English messages
* Different exit conditions
* Better console interaction

---

## 🧠 C Concepts Used

Is project ko banate time maine C language ke following concepts practically use kiye:

* `printf()`
* `scanf()`
* Variables
* `char`
* `int`
* Functions
* Function return values
* `if-else`
* `while` loop
* `break`
* `return`
* Logical operators
* Comparison operators
* Increment operator `++`
* Random number generation
* `rand()`
* `srand()`
* `time()`
* User input validation
* Counters
* Score tracking

---

## 📚 What I Learned

Is project se mujhe sirf syntax nahi, balki **programming logic** ko practically samajhne me help mili.

Especially:

* Function ka use kaise karna hai
* `if-else` se game conditions kaise handle karni hain
* `while` loop se repeated gameplay kaise banana hai
* Random values kaise generate karni hain
* User input ko validate kaise karna hai
* Invalid attempts ko count kaise karna hai
* Multiple exit conditions kaise design karni hain
* Score ko track kaise karna hai
* Program ko user-friendly kaise banana hai

---

## 🔮 Future Improvements

Future me is project me aur features add kiye ja sakte hain:

* 👥 Two Player Mode
* 🏅 Best Score / High Score
* 📜 Game History
* 📈 Win Percentage
* 🎯 Custom Winning Score
* 🔊 Sound Effects
* 🎨 Better Console UI
* 💾 Score Save karna

---

## 💻 How to Run

### 1. Compile the C program

```bash
gcc rockpaperscisor.c -o rockpaperscisor
```

### 2. Run the program

Windows:

```bash
rockpaperscisor
```

---

## 🎯 Project Goal

Is project ka main goal ek simple game banana hi nahi tha.

Main goal tha:

> **C language ke basic concepts ko use karke ek complete, interactive aur user-friendly console application banana.**

Basic code se start karke usme apne ideas add karna aur gradually project ko improve karna is project ka main learning experience raha.

---

### Acknowledgement

Special thanks to **ChatGPT** for helping me understand C programming concepts,
debug logical errors, improve the game logic, and guide me while developing
this project.

## 👨‍💻 Author

**Mohit Parmar**

Beginner C Programming Project 🚀

> **Started with a basic implementation, then built it into my own version by adding logic, features and improvements.**

---

## ❤️ Final Note

Ye mera **C language ka practice project** hai.

Project simple hai, lekin isse mujhe programming logic, problem solving aur feature development ko practically samajhne ka opportunity mila.

**Small project → Better logic → Bigger projects 🚀**

