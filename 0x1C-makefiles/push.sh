#!/bin/bash

if [ -z "$1" ]; then
  echo "Please provide a commit message."
  exit 1
fi

commit_message="$1"
while true
do
    git pull
    git add .
    git commit -m "$commit_message"
    git push

    sleep 10
done