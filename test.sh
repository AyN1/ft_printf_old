make
./ft_printf > ft_printf.txt
./printf > printf.txt
diff -s -a --suppress-common-lines ft_printf.txt printf.txt
# rm ft_printf.txt printf.txt
echo "[end of file]"
