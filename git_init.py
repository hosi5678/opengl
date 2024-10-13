import subprocess
import os

def shell_command(command):
    process = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    stdout, stderr = process.communicate()
    #結果の端末での表示
    print(stdout.decode(), stderr.decode())
    return stdout, stderr

# ファイルパスの指定
file_path="~/git/access_token"

# ファイルを開いて内容を取得
with open(os.path.expanduser(file_path), 'r') as file:
    access_token = file.read().strip()

# proj_name="gitprac"

proj_name=str(input("input project name: "))

user_name="hosi5678"

str="git init"

print(str)

shell_command(str)

str="echo '# gitprac' >> README.md"

print(str)

shell_command(str)

str="git add ."

print(str);

shell_command(str)

str="git commit -m 'first commit'"

print(str)

shell_command(str)

str="git branch -M main"

print(str)

shell_command(str)

str="git remote rm origin"

print(str)

shell_command(str)

str="git remote add origin git@GitHub.com:"+user_name+"/"+proj_name+".git"

print(str)

shell_command(str)

str="git push -u origin main"

print(str)

shell_command(str)

# echo "# opengl" >> README.md
# git init
# git add README.md
# git commit -m "first commit"
# git branch -M main
# git remote add origin git@github.com:hosi5678/opengl.git
# git push -u origin main

# python3 -m venv myenv

# 2.仮想環境をアクティブにする:
# source myenv/bin/activate

# 3.パッケージをインストール:
# pip install pandas
