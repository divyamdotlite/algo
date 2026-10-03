
# ⭕ STAGES IN GIT

U → Untracked  
A → Added / Staged  
M → Modified  
C → Committed  



# 🔘 GIT CONFIGURATION (One Time Setup)

```
git config --global user.name "User Name"
git config --global user.email "email@domain.com"

git config --global core.editor "code --wait"
git config --global core.autocrlf "input"
```

Check or edit config:

```
git config --global -e
git config --list
```



# 📌 BASIC FLOW 🔥
```
1️⃣ Initialize → `git init`  
2️⃣ Status check → `git status -s`  
3️⃣ Add files → `git add filename`  
4️⃣ Commit → `git commit -m "message"`  
5️⃣ Logs check → `git log --oneline --graph`
```

## The .gitignore file
```
Sometimes it may be a good idea to exclude files from being
tracked with Git. This is typically done in a special file named
`.gitignore`
```

## AM ka Matlab
```
AM → File Added bhi hai aur Modified bhi hai.

Left side → Staging area status  
Right side → Working directory status
```

# 📌 RESET ⚠️
```
`git reset --hard HEAD~1` →
Last commit delete karke previous state me le jaata hai.
```

## If deleted and want to go back ⚠️
```
Get commit hash → `git reflog`

Go back → `git reset <commit_hash>`
```

## View Previous Commit (Safe)
```
`git checkout HEAD~1`

Moves you temporarily to the previous commit (detached HEAD).
Use git checkout <branch_name> to return.
```

## Show Previous Commit Changes (Safe)
```
`git show HEAD~1`

Displays commit message and code changes.
```

## diff of what is changed but not staged
```
git diff
```

## diff of what is staged but not yet committed
```
git diff --staged
```

## Difference b/w Last And Previous Commit (Safe)
```
`git diff HEAD~1 HEAD`

Shows exactly what changed between the two commits.
```

## blame = kisne likha + kab likha
```
`git blame <file>`
```


# 🌿 BRANCHING
```
Create branch: `git branch feature/navbar`

Switch branch: `git switch feature/navbar`

Create + switch together: `git switch -C feature/add-footer`

View local branches: `git branch`
View remote branches: `git branch -r`
View all branches: `git branch -a`
```

## Ek fix chahiye, pura branch nahi  
```
`git cherry-pick <commit>`

Ek specific commit uthao aur current branch me laga do
```

# 📌 MERGE

⚠️ Merge karne se pehle main branch me hona zaroori.

```
git switch main
git merge feature/navbar
```

Delete branch: `git branch -d feature/navbar`

# 📌 Rebase
👉 “Feature branch ke commits ko uthake latest main ke upar dubara likh do”

Before:
```
main:     A ── B ── C
feature:  A ── B ── D ── E
```

After:
```
main:     A ── B ── C
feature:  A ── B ── C ── D ── E
```

```
Github
D, E ko delete karta hai (temporarily)
phir C ke baad dobara apply karta hai
```
## Simulation:

```
// main branch
function app() {
  console.log("Hello");
}
```
feature branch code (old base pe bana):
```
// feature branch
function app() {
  console.log("Hello");
  console.log("Login feature");
}
```
Meanwhile (main update ho gaya):
```
// main branch updated
function app() {
  console.log("Hello");
  console.log("Bug fix from team");
}
```
Result code (after rebase):
```
function app() {
  console.log("Hello");
  console.log("Bug fix from team");   // main se aaya
  console.log("Login feature");       // tera code upar shift hua
}
```

# 📌 STASH
```
IMPORTANT SITUATION (Uncommitted Changes)

Agar branch switch karte waqt code commit nahi kiya:
Git warning dega ⚠️

Options: 1️⃣ Changes delete hone do  2️⃣ Ya stash kar do
```

### Stash karo (Temprorary draft) : 

```
`git stash`

`git stash push -m "bug fix"`
```

### Stash lists :
```
git stash list
```

### Draft wapas lana : 
```
way 1 (copy-paste) : 

`git stash apply`

`git stash apply <stash@{1}>`
```

```
way 2 (cut-paste) : 

`git stash pop`

`git stash pop <stash@{2}>`
```

### Delete/Clear :
```
`git stash drop <stash@{3}>`
`git stash clear`
```
Ye changes ko temporarily store karta hai bina commit kiye.

# 📌 Version
```
`git tag v1.0`
`git tag -a v1.0 -m "First release"`
```
```
👉 Versioning pattern:
v1.0 → first release
v1.1 → small update
v2.0 → major change

👉 Isko bolte hain: 
Semantic Versioning
```

```
👉 Commit = version bana
👉 Tag = version ka naam diya
```

# 📌 Delete Unwanted Files
## Pehle check kar:
[👉 Untracked = jo Git track hi nahi kar raha]
```
git clean -n

👉 Ye batayega:
“kaun kaun delete hoga” (without deleting)
```

```
`git clean -f`

⚠️ permanently delete karta hai
```

```
`git clean -fd`

👉 folders bhi delete karega
⚠️ permanently delete karta hai
```


# 📌 Comparison

| OLD | NEW |
|----------|----------|
| git checkout main | git switch main |
| git checkout -b dev | git switch -c dev |
| git checkout file.txt | git restore app.js |

| Stash | Branch |
|----------|----------|
| Fast Switch | Long Term |
| Don't want commit | Want commit |
| No history maintain | History maintain & Team Work |



---
# ✨ GIT + GITHUB CMDS 
## GIT (LOCAL WORK)

### 1. Project Start Karna
```
`git init` → git ko enable karna project me
```

### 2. File Status Check Karna
```
`git status -s` → kaunsi file kis stage me hai
```

### 3. Files Staging Me Daalna
```
`git add filename`
`git add .`
→ files ko staging me daalna
```

### 4. Checkpoint Banana
```
`git commit -m "message"` → saved point / checkpoint banana
```

### 5. Commit History Dekhna
```
`git log` → Lists version history for the current branch

`git log --follow [file]` → 
Lists version history for a file, including renames

`git log --oneline` → saare commits short me dekhna

`git log --oneline --graph` → commits graph ke saath dekhna
```

### 6. Pichhle Commit Par Jaana
```
`git reset --hard HEAD~1` → ek commit pichhe jaana
```

## 🌿 BRANCHING

### Branch Dekhna
```
`git branch` → saari branches dekhna
```

### Nayi Branch Banana
```
`git branch feature/navbar` → nayi branch banana
```

### Branch Change Karna
```
`git switch feature/navbar` → branch change karna
```

### Branch Banana + Switch Ek Saath
```
`git switch -C feature/add-footer` → branch banana + switch ek saath
```

### Branch Merge Karna
```
`git merge feature/navbar` → branch merge karna (main me rehkar)
```

### Branch Delete Karna
```
`git branch -d feature/navbar` → branch delete karna
```

## 📌 Temporary Commit (Stash)
```
`git stash` → temporary draft save karna

`git stash apply` → draft wapas lana
```

## GITHUB (REMOTE WORK)

> Note: 
\
Origin = github ka naam/rep (default remote)
\
main = branch ka naam
\
\
origin/main → remote tracking branch hai
\
*"github ke main branch ka local copy"* 

### Repository Copy Karna
```
`git clone <link>`
→ GitHub se pura repo apne system me copy karna
```

### Remote Check Karna
```
`git remote -v`
→ dekhne ke liye kaunsa GitHub repo connected hai 
```

```
[Check karna ho origin kya hai]

Output: origin  https://github.com/xxx/project.git

[Bas wahi jagah push hoga]
```
*"Push always goes to the repo you cloned from."*

### Remote Add Karna (Agar clone nahi kiya)
```
`git remote add origin <repo-link>`
→ apne local project ko GitHub repo se connect karna
```

### Branch Rename Karna
```
`git branch -M main` [force]
→ current branch ka naam main karna

`git branch -m main` [lovely]
→ current branch ka naam main karna
```

### Fetch + Merge = Pull
```
`git fetch` → updates download karega, merge nahi karega

`git merge` → merge karega [git merge origin/main wala code merge hota current local branch mein 
*Only local always]
```

### Pull [Avoid Karna]
```
`git pull` [Uses Upstream auto decide]
→ fetch + merge dono ek saath

`git pull origin main` [fetch + merge]
→ main branch ka latest code lana
```

### First Time Push
```
git push <remote> <branch>
```

```
`git push -u origin main`
→ pehli baar main branch ko GitHub par bhejna

`git push -u origin feature1`
→ github pe branch banegi connection (upstream) set
→ feature1 🔗 origin/feature1
→ upstream local branch kis remote branch se connect hai
```

`-u` ka matlab:
→ future me sirf `git push` likhne se kaam ho jayega
\
*"push kind of merge or update in github"*


### Branch Push Karna
```
`git push -u origin feature/add-effect`
→ new branch push + upstream set
```
[future me sirf `git push` likhne se kaam ho jayega]

### Change Upstream
```
Check current branch and its upstream: `git branch -vv`

Direct change: `git branch -u origin/new-feature`

Ya push ke time: `git push -u origin new-feature`

Remove: `git branch --unset-upstream`
```

### Manual Push
```
`git push origin feature1`
→ specific branch push karna
```
[Matlab origin/feature internally]
\
[Everytime]

### Production
```
`git push origin main`
→ main branch push karna
```
[matlab origin/main internally]
\
[Means main branch push]
\
[Push krne ke liye main mein rhna jaruri nhi]


## 🔥 MERGING CODE

### Way 1 (Direct Git Se)
```
Compare Karna:

`git diff <branch-name>`
→ commits, branches, files compare karne ke liye

`git diff [first-branch]...[second-branch]` → Shows content differences between two branches

Merge Karna:

`git merge <branch-name>`
→ 2 branches merge karna

(Merge karte time main branch me rehna zaroori hai)
```


### Way 2 (GitHub Method)
```
Create a PR (Pull Request)

Pull Request ka matlab:
→ apni branch ka code main branch me merge karne ka request bhejna

Team review karegi
Approve karegi
Phir merge hoga
```

## Fork Kya Hota Hai?
```
A fork is a copy of a repository.

Fork karne ka matlab:
→ kisi aur ka project/repo → apne GitHub account me copy → then apne fork ko clone kro locally

Isse aap freely experiment kar sakte ho
Original project affect nahi hota

Fork mostly open-source projects me use hota hai.
```
## PR Kese kre

### CASE 1: Company / Team Project (NO FORK)
```
-> GitHub pe ja
-> Button: "Compare & pull request"
-> Base: main
-> Compare: feature-login
-> Create PR
```

### CASE 2: Fork (Open Source)
```
-> GitHub pe apne fork me ja
-> Button: "Compare & pull request"
-> Base = original repo (owner/main)
-> Compare = tera branch (dv/fix-bug)
-> Create PR
```

### CASE 3: Same Repo (Direct branch PR)
```
-> GitHub → PR create
-> Base: main
-> Compare: new-feature
```

### ⚡ COMMON RULEs
```
-> Push karna mandatory
-> PR always GitHub se
-> Base = jaha merge karna
-> Compare = tera code
```

## ⚔️ MERGE CONFLICT
```
Conflict hota kab hai?
👉 Same line ko 2 log change kare
```
### Example:
```
main branch:
console.log("Hello")

feature branch:
console.log("Hello Dv")
```
[👉 Ab merge kare → conflict]

### Conflict dikhega aise:
```
<<<<<<< HEAD
console.log("Hello")
=======
console.log("Hello Dv")
>>>>>>> feature-branch
```

### 🛠️ Solve kaise kare:
```
👉 Step 1: File open kar
👉 Step 2: Decide final code

console.log("Hello dv")

👉 Step 3:

git add .
git commit -m "resolved conflict"

👉 Done 
```
## PR REJECT HO GAYA — AB KYA?

### Reason kya hota hai?
```
👉 Bug hai 
👉 Code messy hai 
👉 Logic galat hai
👉 Style follow nahi kiya
```

### Ab kya kre?
```
Step 1: Feedback pad
👉 Reviewer kya bol raha — dhyaan se

Step 2: Fix kar

Step 3: Same branch pe push
```

👉  Magic:
PR automatically update ho jayega

# 🔥 TEAM WORKFLOW
```
📍 Main Developer:
- Initial project banata hai
- GitHub par push karta hai
- Collaborators add karta hai

📍 Team Members:
- Repo clone karte hain
- Apni branch create karte hain (VERY IMPORTANT)
- Apna feature us branch me develop karte hain
- Commit karke inform karte hain

📍 Merger Person:
- Fetch karega
- Merge karega
- Final push karega
```

# 🔥 PROJECT WORKFLOW
```
1️⃣ `git pull` (pehle latest code lo)
2️⃣ apni branch me kaam karo 
3️⃣ `git add .` 
4️⃣ `git commit -m "message"` 
5️⃣ `git push` 
6️⃣ PR create karo 
7️⃣ Review ke baad merge 
```

# *Optional not used daily
## Git History Rewrite

### Step 0: Clean Working Directory
```
Check status: `git status`

If there are untracked/modified files: `git stash -u`
```


### Step 1: Start Interactive Rebase

```
git rebase -i --root
```


### Step 2: Edit Commits

```
Change:
pick → edit

Save and close file.
```


### Step 3: For EACH Commit

```
1. Edit file

Replace confidential data in:
e.g. index.html

2. Stage ONLY required file

'git add index.html`

3. Amend commit or commit with preserved date

`git commit --amend` or
`git commit --amend --no-edit --date="$(git show -s --format=%aD)"`

4. Continue

`git rebase --continue`
```

Repeat until finished.


### Step 4: After Completion

```
You’ll see:
Successfully rebased...
```


### Step 5: Restore Stashed Files

```
git stash pop
```


###  Step 6: Verify
```
Check history: `git log --oneline`

Search for old data: `grep -r "OLD_NAME" .`

TO SEE COMMIT + DATE + TIME: `git log --pretty=format:"%h | %ad | %s" --date=local`

Full DETAILED VIEW: `git log --pretty=fuller`
```

###  Step 7: Push to GitHub

```
git push --force
```
---
# <div align="center">❤️ Made by @divyamdotlite ❤️</div>


# 🎯 ULTIMATE CHEATSHEET
## [GIT]
Initialize repo → `git init`
\
Status check → `git status -s`
\
Add files → `git add filename`
\
Commit changes → `git commit -m "message"`
\
View history → `git log --oneline --graph`
\
Undo last commit → `git reset --hard HEAD~1`
\
\
View branches → `git branch`
\
Create branch → `git branch feature/navbar`
\
Switch branch → `git switch feature/navbar`
\
Merge branch → `git merge feature/navbar`
\
Delete branch → `git branch -d feature/navbar`
\
\
Save work temporarily → `git stash`
\
Restore stashed work → `git stash apply`

## [GITHUB]
Clone repository → `git clone <url>` 
or
\
Add remote → `git remote add origin <url>`
\
\
View remotes → `git remote -v`
\
View all branches: `git branch -a`
\
Rename branch → `git branch -M main`
\
\
Pull latest changes → `git pull origin main`
\
Fetch changes → `git fetch`
\
Merge fetched changes → `git merge`
\
Pull (using upstream) → `git pull`
\
\
First push → `git push -u origin main`
\
Push new branch → `git push -u origin feature/add-effect`
\
Push branch → `git push origin featurex`
\
Push changes → `git push`
\
Push to production → `git push origin main`
\
\
Create Pull Request (PR) to merge your branch into another branch
\
`1. Push branch to GitHub`\
`2. Create Pull Request`\
`3. Team reviews code`\
`4. Approves changes`\
`5. Merge into main`