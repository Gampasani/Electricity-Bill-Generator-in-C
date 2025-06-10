# ⚡ Electricity Bill Generator in C

This is a simple and practical C program that simulates an electricity billing system using slab-based rates. It takes customer details and the number of units consumed, applies rate slabs, and calculates the total bill amount accordingly.

---

## 📌 Features

- 👤 Takes full customer name (supports spaces)
- 🔢 Calculates electricity charges based on slab rates
- 🧮 Supports dynamic bill calculation for any number of units
- 🧾 Neatly displays a formatted bill
- ✅ Fixed input handling for multiple-word names using `scanf(" %[^\n]s", ...)`

---

## 🧠 Slab Rates Used

| Units Consumed     | Rate per Unit (₹) |
|--------------------|------------------|
| 0 – 100 units      | ₹1.50            |
| 101 – 300 units    | ₹2.50            |
| 301 – 500 units    | ₹4.00            |
| Above 500 units    | ₹6.00            |

---

## 🛠️ Technologies Used

| Tool/Language | Purpose                        |
|---------------|--------------------------------|
| C             | Main program logic             |
| GCC / MinGW   | Compiler                       |
| VS Code / Code::Blocks | IDE for development   |

---

## 🖥️ Sample Output

Enter Customer Name: G Ravi Teja
Enter Meter Number: 6356688
Enter Units Consumed: 420

========= ELECTRICITY BILL =========
Customer Name : G Ravi Teja
Meter Number : 6356688
Units Used : 420
Total Amount : ₹925.00


---

## 📋 How to Run

### 🔧 Compile the Code (using GCC)

```bash
gcc electricity_bill.c -o bill.exe

▶️ Execute the Program

./bill.exe    # Linux/Mac
bill.exe      # Windows CMD/PowerShell

##👨‍💻 Author
Gampasani Teja
B.Tech CSE (Data Science) – ANITS
GitHub: [your GitHub link here]

##🧾 License
This project is for educational use. Feel free to fork and improve it.
