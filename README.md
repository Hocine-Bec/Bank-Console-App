# Bank Management Console Application

A complete console-based banking system written in C++, designed to demonstrate advanced Object-Oriented Programming (OOP) concepts and professional software architecture. This practice project simulates real-world banking operations including client management, transactions, currency handling, and user administration.

## 📌 Features

### 🔐 Authentication & Security
- Secure login system with PIN encryption
- Role-based access control (Admin/User)
- Login attempt logging and session management

### 👤 Client Management
- Add, update, delete, search, and list bank clients
- Display total client balances

### 💰 Transactions
- Deposit, withdraw, and transfer funds
- Full transaction audit logging
- Transfer history tracking

### 💱 Currency Management
- List and search exchange rates
- Update currency rates
- Currency conversion calculator

### 👥 User Administration
- Manage system users (add, edit, delete)
- Role assignment and access restrictions

## 🛠 Architecture

- **OOP Design:** Inheritance, polymorphism, encapsulation
- **Separation of Concerns:** UI, business logic, and persistence layers
- **Modular Structure:** Reusable screen and utility classes
- **Data Persistence:** Text files with structured delimiters for clients, users, currencies, and logs

## 📂 Data Files

| File Name         | Purpose                     |
|------------------|-----------------------------|
| `Clients.txt`     | Stores client account data  |
| `Users.txt`       | Stores user credentials     |
| `Currencies.txt`  | Stores exchange rate data   |
| `TransfersLog.txt`| Transaction audit logs      |
| `LoginRegister.txt`| Authentication history     |

## 🧪 Technologies

- **Language:** C++
- **Environment:** Console application
- **Build System:** Visual Studio (.sln, .vcxproj)

## 🚀 Getting Started

1. Clone the repository
2. Open the solution in Visual Studio
3. Build and run `Practice File.cpp`
4. Use the following credentials to test:
   - **Username:** Admin
   - **Password:** 1234

## 📄 Project Structure

- `clsLoginScreen`, `clsMainScreen`, `clsClientListScreen`, etc. – UI Layer
- `clsBankClient`, `clsUser`, `clsCurrency` – Business Logic
- `clsInputValidate`, `clsString`, `clsDate` – Utility Helpers

> ✅ **Disclaimer:** This project is intended for educational and demonstration purposes only.
