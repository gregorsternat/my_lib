# My_lib

## Files by authorised function :

### str is

| Files                                                | Functions used                       |
|------------------------------------------------------|--------------------------------------|
| [my_str_is_alpha](/lib/str_is/my_str_is_alpha.c)     | nothing                              |
| [my_str_is_lower](/lib/str_is/my_str_is_lower.c)     | nothing                              |
| [my_str_is_num](/lib/str_is/my_str_is_num.c)         | nothing                              |
| [my_str_is_upper](/lib/str_is/my_str_is_upper.c)     | nothing                              |

### linked list

| Files                                            | Functions used                       |
|--------------------------------------------------|--------------------------------------|
| [push_to_list](/lib/linked_list/push_to_list.c)  | malloc                               |
| [add_to_list](lib/linked_list/add_to_list.c)     | malloc                               |

### array management

| Files                                                             | Functions used                       |
|-------------------------------------------------------------------|--------------------------------------|
| [array_len](/lib/array_management/array_len.c)                    | nothing                              |
| [free_double_array](/lib/array_management/free_double_array.c)    | free                                 |

### Others

| Files                                         | Functions used                                                    |
|-----------------------------------------------|-------------------------------------------------------------------|
| [file_to_str](/lib/file_to_str.c)             | open / close / malloc                                             |
| [my_strlen](/lib/my_strlen.c)                 | nothing                                                           |
| [put_error](/lib/put_error.c)                 | write / [my_strlen](/lib/my_strlen.c)                             |
| [my_strdup](/lib/my_strdup.c)                 | malloc / [my_strlen](/lib/my_strlen.c)                            |
| [my_put_str](lib/my_put_str.c)                | write / [my_strlen](lib/my_strlen.c)                              |
| [print_file](lib/print_file.c)                | [file_to_str](lib/file_to_str.c) / [my_put_str](lib/my_put_str.c) |
|                                               |                                                                   |
