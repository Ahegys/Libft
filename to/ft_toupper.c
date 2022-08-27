char ft_toupper(char *str) {
  while (*str) {
    if ((*str >= 'a' && *str <= 'z'))
      str += 32;
    str++;
  }
  return (*str);
}
