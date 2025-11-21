# Programming Skills Portfolio (C++)



## 👤 Student & Module Info
- **Name:** Irinel Talica  
- **Course Title:** CODE LAB I
- **GitHub Repository:** https://github.com/talicairinel/Programming-Skills-Portfolio
- **Sololearn Certificate link**  https://www.sololearn.com/certificates/CC-UVDUURUI
---

## 🎯 Overview
The repository presents a **Programming Skills Portfolio** as implemented in C++. Every exercise illustrates concepts of basic programming: variables, I/O, conditionals, loops, and searching. In addition, there are **clear comments** to support learning and assessment.

---

## 📂 Repository Structure
```
ProgrammingSkillsPortfolio_CPP/
├── 01-CodingIsCool/        # Console output basics
├── 02-SimpleSums/          # Input validation + arithmetic
├── 03-Biography/           # Strings + getline + formatting
├── 04-PrimitiveQuiz/       # Conditionals + user input
├── 05-DaysOfTheMonth/      # Functions + leap year logic
├── 06-BruteForceAttack/    # Loops + counters (simulation)
├── 07-SomeCounting/        # Counting up/down with loops
├── 08-SimpleSearch/        # Linear search + vectors
├── 09-Hello/               # Input + formatted output
└── 10-IsItEven/            # Conditionals (even/odd)
```


---

## 🛠 How to Compile & Run

### macOS / Linux
```bash
# Example: build and run exercise 01
cd ProgrammingSkillsPortfolio_CPP/01-CodingIsCool
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o CodingIsCool
./CodingIsCool
```

### Windows (PowerShell or Command Prompt)
1. Install **MinGW-w64** or use **MSYS2**.
2. Build and run:
```powershell
cd ProgrammingSkillsPortfolio_CPP\01-CodingIsCool
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o CodingIsCool.exe
./CodingIsCool.exe
```

## 🧪 Testing Checklist 

### 01 — CodingIsCool
- ✅ Prints exactly the expected message.

### 02 — SimpleSums
- ✅ Valid input: `10 20` → `Sum: 30`
- ✅ Invalid input: `ten twenty` → error message
- ✅ Large numbers: `10000000000 5` 

### 03 — Biography
- ✅ `std::getline` correctly handles spaces in names/hobbies.
- ✅ Age input validation.
- ✅ Output formatted as intended.

### 05 — DaysOfTheMonth
- ✅ Month range validation (1–12).


### 06 — BruteForceAttack (simulation)
- ✅ PIN in range 0000–9999.
- ✅ Outputs attempts; stops when found.

### 08 — SimpleSearch
- ✅ Target present → prints index.
- ✅ Target absent → “Not found”.

### 10 — IsItEven
- ✅ Even and odd reported correctly.
- ✅ Handles negative and large numbers.




