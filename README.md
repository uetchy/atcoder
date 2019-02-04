# AtCoder Code

## Install

```
pip3 install online-judge-tools
oj login -u <user> -p <password> https://atcoder.jp/login
```

## Test

```
CONTEST=abc117 TASK=abc117_c ./test.sh
```

## VSCode

Add `.vscode/tasks.json`:

```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "test",
      "type": "shell",
      "command": "./test.sh",
      "options": {
        "env": {
          "CONTEST": "abc117",
          "TASK": "abc117_c"
        }
      },
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": []
    }
  ]
}
```
