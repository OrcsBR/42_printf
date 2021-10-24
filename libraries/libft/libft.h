/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:10:35 by peduardo          #+#    #+#             */
/*   Updated: 2021/10/24 13:14:36 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define INT_MIN -2147483648
# define INT_MAX 2147483647

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/**
* @brief The ft_atoi() function onverts the initial portion of the string
* pointed by str to int.
* @param str Pointer to the area of memory of the string to be converted.
* @return int The converted value as int or 0 on error
*/
int		ft_atoi(const char *str);

/**
* @brief  Checks whether c, which must havethe value of unsigned char of EOF
* falls into the alphanumeric character class
* @param c The character to be checked
* @return int non-zero if alphanumeric, 0 if not.
*/
int		ft_isalnum(int c);

/**
* @brief  Checks whether c, which must havethe value of unsigned char of EOF
* falls into the alphabetic character class
* @param c The character to be checked
* @return int non-zero if alphabetic, 0 if not.
*/
int		ft_isalpha(int c);

/**
* @brief  Checks whether c, which must havethe value of unsigned char of EOF
* falls into the ASCIII character class
* @param c The character to be checked
* @return int non-zero if ASCIII, 0 if not.
*/
int		ft_isascii(int c);

/**
* @brief  Checks whether c, which must havethe value of unsigned char of EOF
* falls into the numeric character class
* @param c The character to be checked
* @return int non-zero if numeric, 0 if not.
*/
int		ft_isdigit(int c);

/**
* @brief  Checks whether c, which must havethe value of unsigned char of EOF
* falls into the printable character class
* @param c The character to be checked
* @return int non-zero if printable, 0 if not.
*/
int		ft_isprint(int c);

/**
* @brief  Checks whether c, which must havethe value of unsigned char of EOF
* falls into the lowercase character class
* @param c The character to be checked
* @return int non-zero if lowercase, 0 if not.
*/
int		ft_tolower(int c);

/**
* @brief  Checks whether c, which must havethe value of unsigned char of EOF
* falls into the uppercase character class
* @param c The character to be checked
* @return int non-zero if uppercase, 0 if not.
*/
int		ft_toupper(int c);

/**
* @brief  The ft_bzero() function erases the data in the n bytes of the memory
* starting at the location pointed by s, by writing zeros (\0) to that area
* @param b, the pointer to the start memory region to be erased.
* @param len, the lenght in bytes of the region that will be erased.
* @return none
*/
void	*ft_bzero(void *b, size_t len);

/**
* @brief  The ft_calloc() function allocates size bytes and returns a pointer to
* the allocated memory. The memory is intialized to zero.
* @param nmemb, the number of elements to be allocated.
* @param size, the size of the elements to be allocated.
* @return pointer to the memory region which was allocated.
*/
void	*ft_calloc(size_t nmemb, size_t size);

/**
* @brief The  ft_memchr() function  scans  the  initial n bytes of the memory
* area pointed to by s, fort the first instance of c. Both c and the memory
* bytes pointed to by s are interpreted as unsigned char.
* @param s, the pointer to the memory regiom
* @param c, the matching charachter to be found
* @param n, Number of the bytes to be searched.
* @return pointer to matching byte or NULL if the character does not occur in
* the given memory area
*/
void	*ft_memchr(const void *s, int c, size_t n);

/**
* @brief The ft_memcmp() function compares the first n bytes (each interpreted
* as unsigned char) of the memory areas s1 and s2.
* @param s1, the fist memory area to be compared.
* @param s2, the second memory area to be compared.
* @param n, the number of bytes to be compared (each byte interpreted as an
* unsigned char).
* @return int less than, equal to, or greater than zero, if the first n bytes of
* s1 is found, respectively to be less than, to match, or to be greater than the
* first n bytes of s2.
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
* @brief The ft_memcpy() function copies n bytes from memory area src to the
* memory area dest. The memory areas MUST NOT overlap.
* @param dest the pointer to the start of memory to receive the copied bytes
* @param src, the pointer to the start of memory area to be copied.
* @param n, length in bytes to be copied.
* @return pointer to dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
* @brief The ft_memmove() function copies n bytes from memory area src to the
* memory area dest. The memory areas may overlap, as the bytes in src are first
* copied into a temporary array that does not overlap src or dest, then copied
* over to dest.
* @param dest the pointer to the start of memory to receive the copied bytes
* @param src, the pointer to the start of memory area to be copied.
* @param n, length in bytes to be copied.
* @return pointer to dest.
*/
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
* @brief The  ft_memset() function fills the first len bytes of memory pointed
* to by dest, with the constant byte c.
* @param s, the pointer to the memory region to be filled.
* @param c, the byte to be filled with.
* @param n, Number of the bytes to filled.
* @return pointer to dest.
*/
void	*ft_memset(void *s, int c, size_t n);

/**
* @brief        The strchr() function returns a pointer to the first occurrence
* of the character c in the string s.
* @param s, the string to be matched upon.
* @param c, the char to match, passed as an int.
* @return pointer to the first occurrence of the character c in the string str,
or NULL if the character is not found.
*/
char	*ft_strchr(const char *s, int c);

/**
* @brief        function returns a pointer to the last occurrence of the
* character c in the string s.
* @param s, the pointer to the string to be matched upon.
* @param c, the char to match, passed as an int.
* @return pointer to the first occurrence of the character c in the string str,
or NULL if the character is not found.
*/
char	*ft_strrchr(const char *s, int c);

/**
* @brief The strdup() function returns a pointer to a new string which is a
* duplicate of the string s
* @param src, the pointer to string to be duplicated.
* @return pointer to the new string. It returns NULL if insufficient memory was
 available, with errno set to indicate the error.
*/
char	*ft_strdup(char *src);

/**
 * @brief The strlcpy() function copies up to size - 1 characters from the
 * NUL-terminated string src to dst, NUL-terminating the result.
 * @param dst pointer to the string to receive the copy operation.
 * @param src pointer to the string to be copied.
 * @param dstsize the ammount of characters to copy, including NULL terminator.
 * @return the ammount of bytes that make up the length of the string they tried
 * to create. That is, it returns ft_strlen(src). While this may seem somewhat
 * confusing, it was done to make truncation detection simple.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * @brief  function appends the NUL-terminated string src to the end of dst.
 * It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the
 * result.
 * @param dst pointer to the string to receive the concatenation.
 * @param src pointer to the string to concatenate.
 * @param dstsize the ammount of characters to copy, including NULL terminator.
 * @return the ammount of bytes that make up the length of the string they tried
 * to create.  For strlcat() that means the initial length of dst plus the
 * length of src.  While this may seem somewhat confusing, it was done to make
 * truncation detection simple.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size);

/**
 * @brief The strlen() function calculates the length of the string pointed to
 * by s, excluding the terminating null byte ('\0').
 * @param s The pointer to the string to be measured.
 * @return The ammount of bytes that makes up for the lenght of the string;
*/
size_t	ft_strlen(const char *s);

/**
 * @brief The strncmp() function compares the two strings s1 and s2.  The locale
 * is not taken into account (for a locale-aware comparison, see strcoll(3)).
 * The comparison is done using unsigned characters.
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @param n The max ammount of characters to be compared.
 * @return The  strcmp()  and strncmp() functions return an integer less than,
 * equal to, or greater than zero if s1 (or the first n bytes thereof) is found,
 * respectively, to be less than, to match, or be greater than s2.
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief The strnstr() function locates the first occurrence of the null
 * terminated string needle in the string haystack, where not more than len
 * characters are searched.  Characters that appear after a ‘\0’ character are
 * not searched.
 * @param haystack The string to match upon.
 * @param needle The string to be match.
 * @param len  The ammount of characters to search
 * @return If needle is an empty string, haystack is returned; if needle occurs
 * nowhere in haystack, NULL is returned; otherwise a pointer to the first
 * character of the first occurrence of needle is returned.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * @brief Allocates (with malloc(3)) and returns a substring from the string ’s’
 * The substring begins at index ’start’ and is of maximum size ’len’.
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in the string ’s’.
 * @param len The maximum length of the substring.
 * @return The substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Allocates (with malloc(3)) and returns a new string, which is the
 * result of the concatenation of ’s1’ and ’s2’.
 * @param s1 the prefix string.
 * @param s2 the suffix string.
 * @return new string which is the concatenation of both above.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Allocates (with malloc(3)) and returns a copy of ’s1’ with the
 * characters specified in ’set’ removed from the beginning and the end of the
 * string.
 * @param s1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return The trimmed string. NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Allocates (with malloc(3)) and returns an array of strings obtained by
 * splitting ’s’ using the character ’c’ as a delimiter. The array must be
 * ended by a NULL pointer.
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return The array of new strings resulting from the split. NULL if the
 * allocation fails.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief Allocates (with malloc(3)) and returns a string representing the
 * integer received as an argument. Negative numbers must be handled.
 * @param n The Integer to convert.
 * @return The string representing the integer. NULL if the allocation fails.
 */
char	*ft_itoa(int n);

/**
 * @brief Applies the function ’f’ to each character of the string ’s’ to create
 * a new string (with malloc(3)) resulting from successive applications of ’f’.
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return The string created from the successive applications of ’f’. Returns
 * NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Applies the function f to each character of the string passed as
 * argument, and passing its index as first argument. Each character is passed
 * by address to f to be modified if necessary
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return None.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Outputs the character ’c’ to the given file descriptor.
 * @param c The character to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string ’s’ to the given file descriptor.
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 * @return
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs the string ’s’ to the given file descriptor, followed by a
 * newline.
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer ’n’ to the given file descriptor.
 * @param n The character to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief Allocates (with malloc(3)) and returns a new element. The variable
 * ’content’ is initialized with the value of the parameter ’content’. The
 * variable ’next’ is initialized to NULL.
 *
 * @param content The content to create the new element with.
 * @return The new element.
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief Adds the element ’new’ at the beginning of the list.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param element The address of a pointer to the element to be added.
 */
void	ft_lstadd_front(t_list **lst, t_list *element);

/**
 * @brief Adds the element ’new’ at the end of the list.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param element The address of a pointer to the element to be added.
 */
void	ft_lstadd_back(t_list **lst, t_list *element);

/**
 * @brief Counts the number of elements in a list.
 *
 * @param lst The beginning of the list.
 * @return Length of the list.
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief Returns the last element of the list.
 *
 * @param lst The beginning of the list.
 * @return Returns the last element of the list.
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief Takes as a parameter an element and frees the memory of the
 * element’s content using the function ’del’ given as a parameter and free
 * the element. The memory of ’next’ must not be freed.
 *
 * @param lst The element to free.
 * @param del The address of the function used to delete the content.
 */
void	ft_lstdelone(t_list *lst_el, void (*del)(void*));

/**
 * @brief Deletes and frees the given element and every successor of that
 * element, using the function ’del’ and free(3). Finally, the pointer to
 * the list must be set to NULL.
 *
 * @param lst The adress of a pointer to an element.
 * @param del The adress of the function used to delete the content of the
 * element.
 */
void	ft_lstclear(t_list **lst_el, void (*del)(void*));

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ to the content
 * of each element.
 *
 * @param lst The adress of a pointer to an element.
 * @param f  The adress of the function used to iterate on the list.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ to the content
 * of each element. Creates a new list resulting of the successive
 * applications of the function ’f’. The ’del’ function is used to delete the
 * content of an element if needed.
 *
 * @param lst The adress of a pointer to an element.
 * @param f The adress of the function used to iterate on the list.
 * @param del The adress of the function used to delete the content of an
 * element if needed.
 * @return The new list. NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
