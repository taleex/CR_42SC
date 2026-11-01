#include "libft.h"
#include <stdio.h>

void ft_upper_char(unsigned int i, char *c)
{
    (void)i;
    *c = ft_toupper(*c);
}

void ft_map_upper(void *content)
{
    char *str;

    str = (char *)content;
    ft_striteri(str, ft_upper_char);
}

void *ft_map_upper_copy(void *content)
{
    char *str;
    char *result;

    str = (char *)content;
    result = ft_strdup(str);
    if (!result)
        return (NULL);
    ft_striteri(result, ft_upper_char);
    return (result);
}

void ft_del(void *content)
{
    free(content);
}

int main(void)
{
    char s1[] = "hello\n";
    char s2[] = "yupi";
    t_list *node;
    t_list *new_list;

    node = ft_lstnew(s1);
    if (!node)
        return (1);

    ft_lstadd_front(&node, ft_lstnew(s2));

    ft_lstiter(node, ft_map_upper);

    printf("Original: %s", (char *)node->content);

    new_list = ft_lstmap(node, ft_map_upper_copy, ft_del);

    if (!new_list)
    {
        ft_lstclear(&node, NULL);
        return (1);
    }

    printf("Copied: %s\n", (char *)new_list->content);

    ft_lstclear(&new_list, ft_del);
    ft_lstclear(&node, NULL);

    return (0);
}
