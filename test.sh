make re
./ft_printf > ft_printf.txt
./printf > printf.txt
diff -y -s -a --suppress-common-lines ft_printf.txt printf.txt
# rm ft_printf.txt printf.txt
echo "[end of file]"
