# Programming Skills Portfolio (C++)

![Language](https://img.shields.io/badge/language-C%2B%2B17-blue)
![Build](https://img.shields.io/badge/build-manual-success)
![License](https://img.shields.io/badge/license-MIT-lightgrey)

## 👤 Student & Module Info
- **Name:** Irinel Talica  
- **Course Title:** _[Insert course title]_  
- **Module Timeline:** _[Insert timeline, e.g., Sep 2025 – Dec 2025]_  
- **GitHub Repository:** https://github.com/talicairinel/Programming-Skills-Portfolio

---

## 🎯 Overview
This repository contains a **Programming Skills Portfolio** implemented in **modern C++ (C++17)**. Each exercise demonstrates fundamental programming concepts (variables, I/O, conditionals, loops, searching) and includes **clear comments** to support learning and assessment.

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

> A variant with **line-by-line comments** may exist in `ProgrammingSkillsPortfolio_CPP_LineComments/`.

---

## ✅ Deadlines
- **Deadline 1:** October 30, 11:59 AM — Exercises **01–05**  
- **Deadline 2:** November 24, 11:59 AM — Exercises **06–10**

---

## 🧰 Prerequisites
- **Compiler:** `g++` (C++17 or later)
- **Operating Systems:** Windows, macOS, Linux
- **Git** (for version control)

Check compiler version:
```bash
g++ --version
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

> Repeat for each folder, changing the path and output name as needed.

---

## 🧭 Suggested Workflow (per exercise)
1. **Plan:** Read the exercise and identify inputs, outputs, and edge cases.  
2. **Implement:** Write the code, comment clearly (line-by-line where helpful).  
3. **Test:** Run with several inputs (valid / invalid / boundaries).  
4. **Commit:** Save working code with a meaningful message.  
5. **Push:** Upload promptly to GitHub.

---

## 🔁 Commit & Branch Strategy

**Branching (optional but clean):**
- `main`: Stable, submission-ready code
- `deadline-1`: Work for exercises 01–05
- `deadline-2`: Work for exercises 06–10

**Typical workflow:**
```bash
# Create and switch to a branch for Deadline 1
git checkout -b deadline-1

# Stage and commit changes
git add ProgrammingSkillsPortfolio_CPP/01-CodingIsCool/main.cpp
git commit -m "feat(01): add CodingIsCool with comments"

# Push to GitHub
git push -u origin deadline-1

# When ready, merge to main (via GitHub PR or locally)
git checkout main
git merge deadline-1
git push
```

**Commit message examples:**
- `feat(02): implement SimpleSums with input validation`
- `fix(05): correct leap year logic for century years`
- `docs: update README with build steps`
- `chore: add .gitignore to ignore binaries`

---

## 🔎 Academic Integrity
- All code is authored by the student. If you used **online resources** or **Generative AI**, acknowledge in comments:
```cpp
// Reference: <URL>, accessed on <YYYY-MM-DD>
// Assistance: M365 Copilot (reasoning, code review), <YYYY-MM-DD>
```
- Ensure you **understand** and can explain your code.

---

## 🧪 Testing Checklist (selected)

### 01 — CodingIsCool
- ✅ Prints exactly the expected message.

### 02 — SimpleSums
- ✅ Valid input: `10 20` → `Sum: 30`
- ✅ Invalid input: `ten twenty` → error message
- ✅ Large numbers: `10000000000 5` (64-bit handling)

### 03 — Biography
- ✅ `std::getline` correctly handles spaces in names/hobbies.
- ✅ Age input validation (if extended).
- ✅ Output formatted as intended.

### 05 — DaysOfTheMonth
- ✅ Month range validation (1–12).
- ✅ Leap year correctness: 2000 (leap), 1900 (not leap), 2024 (leap).

### 06 — BruteForceAttack (simulation)
- ✅ PIN in range 0000–9999.
- ✅ Outputs attempts; stops when found.

### 08 — SimpleSearch
- ✅ Target present → prints index.
- ✅ Target absent → “Not found”.

### 10 — IsItEven
- ✅ Even and odd reported correctly.
- ✅ Handles negative and large numbers.

> Apply similar checks to the other exercises.

---

## 🧰 Troubleshooting
- **`g++: command not found`** → Install a C++ compiler (MinGW-w64/MSYS2 on Windows, Xcode CLT on macOS, build-essential on Linux).  
- **`Permission denied` (macOS/Linux)** → Make the file executable: `chmod +x ./ProgramName`.  
- **Locale/keyboard issues** → Prefer simple ASCII inputs; avoid trailing spaces when testing.

---

## 📦 .gitignore
The repository ignores common build artifacts:
```
*.o
*.obj
*.exe
*.out
a.out
.DS_Store
```

---

## 📝 Roadmap / Status
- [ ] Deadline 1 (01–05) — implemented, tested, pushed  
- [ ] Deadline 2 (06–10) — implemented, tested, pushed

---

## 🤝 Contribution
This is coursework; external contributions are disabled. Issues can be opened for review comments or self-tracking.

---

## 📜 License
MIT License — you may use and learn from this code, but ensure **academic integrity** for your submissions.

---

## 📧 Contact
For questions or clarifications, please open a GitHub issue in this repository.

> Generated: 2025-11-20 19:21:15 UTC
