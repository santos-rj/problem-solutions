echo "Fazendo git add"
git add *
echo "Commitando"
git commit -m "feat: resolutions created in $(date +%F)."
echo "Fazendo push"
git push