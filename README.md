# AtCoder Code

## Install

```
pip3 install online-judge-tools
oj login -u <user> -p <password> https://atcoder.jp/login
```

## Test

### Samples

```
# edit `.env`
./scripts/test.sh
```

### Custom

```
cat<<EOD | ./a.out
4
4 3 3 2
EOD
```

## VSCode

Add following task to `.vscode/tasks.json`:

```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "test",
      "type": "shell",
      "command": "./test.sh",
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": []
    }
  ]
}
```

then hit <kbd>command</kbd> + <kbd>shift</kbd> + <kbd>b</kbd>.
