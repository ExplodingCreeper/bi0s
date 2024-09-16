# Commands used

## Stashing changes
git stash

## Switching to `main` branch
git checkout main

## Updating the local repo with changes from remote
git pull origin main

## Inspecting commit history to find commit with `branch_name.txt`
git log --diff-filter=A -- branch_name.txt

## Finding the content of the file changed in the commit
git show 28508c1457083d4d5d96cea1eecb54f68c19321e:branch_name.txt

## Switching to branch named in `branch_name.txt`
git checkout 0PCF07O3WM

## Unzipping protected zip file
unzip -P 28508c1457083d4d5d96cea1eecb54f68c19321e protected.zip

## Identifying compression techniques and decompressing
file protected.zip
# Based on file type, use appropriate decompression commands, e.g.:
unzip protected.zip
tar -xvf file.tar
gzip -d file.gz

## Listing folders starting with 2 numbers and ending with 2 numbers
cd misc
find . -maxdepth 1 -type d -name '[0-9][0-9]*[0-9][0-9]'

## Sorting file contents and filtering duplicates
cat * > combined.txt
sort combined.txt > sorted.txt
uniq -d sorted.txt > duplicates.txt

## Replacing `8` with `B` in the 6th result
sed -n '6p' duplicates.txt > sixth_line.txt
sed 's/8/B/g' sixth_line.txt > sixth_line_updated.txt
sed -i '6s/8/B/g' duplicates.txt

## Creating a new file in the main branch with the output as the filename.
touch sixth_line_updated2.txt
cp sixth_line_updated.txt sixth_line_updated.txt
git add sixth_line_updated2.txt
git commit -m "Add file with the output from Step 12"
git push origin main

## Inserting the content 'I am learning Git into the file'.
echo "I am learning Git" > sixth_line_updated2.txt
git add sixth_line_updated2.txt
git commit -m "Insert 'I am learning Git' into sixth_line_updated2.txt"
git push origin main

## Reverting the commit and changing the content of the file to 'I am learning Git and Linux.'
git revert 7b93fbd5c9b3216736d4cd00038a70b1926a87a4
echo "I am learning Git and Linux" > sixth_line_updated2.txt
git commit -m "Insert 'I am learning Git and Linux' into sixth_line_updated2.txt"
git push origin main

## Creating a private GitHub repository and updating remote URL
git remote set-url origin https://github.com/username/repo-name.git
git push -u origin main

## Creating a file, writeup.md in your main branch
touch writeup.md
nano writeup.md
git push origin main
