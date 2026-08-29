### 🏧 ATM Cash Withdrawal System

A simple **ATM Cash Withdrawal System written in C** that simulates cash withdrawal using available ₹100, ₹200, ₹500, and ₹2000 notes.

The program uses a **greedy approach**, trying to dispense larger denomination notes first to reduce the total number of notes given to the user.

---

## 📌 Features

* 💰 Supports ₹100, ₹200, ₹500 and ₹2000 notes
* 🏧 Maintains the number of available notes in the ATM
* ✅ Allows withdrawal only in multiples of ₹100
* 💵 Checks whether the ATM has sufficient total cash
* 🔝 Gives larger denomination notes first
* 🔄 Restores notes if the exact withdrawal amount cannot be provided
* 📋 Displays the complete denomination-wise transaction
* ❌ Handles invalid withdrawal amounts and insufficient ATM funds

---

## 🧠 How It Works

The ATM has a fixed number of notes:

| Note  | Initial Quantity |
| ----- | ---------------- |
| ₹100  | 1000             |
| ₹200  | 1000             |
| ₹500  | 1000             |
| ₹2000 | 1000             |

When the user enters an amount, the program follows these steps:

1. Checks whether the amount is a multiple of ₹100.
2. Calculates the total money available in the ATM.
3. Checks whether the ATM has enough total money.
4. Tries to dispense notes in this order:

   * ₹2000
   * ₹500
   * ₹200
   * ₹100
5. Updates the available notes.
6. If the exact amount cannot be provided, the transaction is cancelled and all used notes are restored.
7. If successful, the denomination-wise amount is displayed.

---

## 🔄 Example

### Input

```text
Enter amount to withdraw: 4700
```

### Output

```text
====================================
       TRANSACTION SUCCESSFUL
====================================
2000 x 2 = 4000
500  x 1 = 500
200  x 1 = 200
100  x 0 = 0
====================================
```

Total:

```text
4000 + 500 + 200 = ₹4700
```

---

## ⚠️ Invalid Amount Example

If the user enters an amount that is not a multiple of ₹100:

```text
Enter amount to withdraw: 1250
```

Output:

```text
Error: Amount must be a multiple of 100.
```

---

## ❌ Transaction Failure

Sometimes the ATM may have enough total money but may not have the **required combination of notes** to provide the exact amount.

In that case:

```text
Error: Transaction failed!
ATM cannot provide the exact amount.
```

The program restores all notes used during the failed transaction.

---

## 🛠️ Technologies Used

* **Language:** C
* **Concepts Used:**

  * Variables
  * Data Types
  * Arithmetic Operators
  * Conditional Statements
  * Integer Division
  * Global Variables
  * Functions / `main()`
  * Basic ATM Simulation
  * Greedy Approach

---

## ▶️ How to Run

### 1. Clone the repository

```bash
git clone <your-repository-url>
```

### 2. Navigate to the project folder

```bash
cd ATM-Cash-Withdrawal
```

### 3. Compile the program

Using GCC:

```bash
gcc main.c -o atm
```

### 4. Run the program

**Windows:**

```bash
atm
```
---

## 📂 Project Structure

```text
ATM-Cash-Withdrawal/
│
├── main.c
└── README.md
```

---


## 🚀 Future Improvements

Possible improvements for this project:

* Add PIN authentication
* Add account balance
* Add deposit functionality
* Add multiple withdrawal transactions
* Add transaction history
* Add user account management
* Use functions to make the code more modular
* Add file handling to permanently store ATM note quantities

---

## 👨‍💻 Author

**Mohit Parmar**

