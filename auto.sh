git pull
echo "git pull: Atualizando o repositório;"

git add .
echo "git add: Executado;"


git commit -m "feat: resolutions created in $(date +%F)."
echo "commit: Executado;"

git push
echo "git push: Executado;"