cat /etc/passwd | grep -v "#" | sed -n 'n;p' | cut -d ":" -f1 | rev | sort -r | awk "NR<=$FT_LINE2" | awk "NR>=$FT_LINE1" | sed 's/$/, /' | tr -d '\n' | sed "s/, $/./" | tr -d "\n"
