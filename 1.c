// // #include <stdio.h>
// // #include <ctype.h>
// // #include <string.h>

// // void main()
// // {
// //     char str[100] = "yag";
// //     int len = strlen(str);
// //     int hasLetter = 0, hasDigit = 0, hasSpecial = 0;

// //     if (len < 6)
// //     {
// //         printf("not a strong");
// //     }

// //     for (int i = 0; i < len; i++)
// //     {
// //         if (isalpha(str[i]))
// //         {
// //             hasLetter = 1;
// //         }
// //         else if (isdigit(str[i]))
// //         {
// //             hasDigit = 1;
// //         }
// //         else if (ispunct(str[i]))
// //         {
// //             hasSpecial = 1;
// //         }
// //     }

// //     if (hasLetter && hasDigit && hasSpecial)
// //     {
// //         printf("pass is strong");
// //     }
// //     else
// //     {
// //         printf("pass is not strong");
// //     }
// // }

// #include <stdint.h>
// #include <ctype.h>
// #include <string.h>

// void main()
// {
//     char pass[100] = "12345546", email[100] = "yag12@gm.com";
//     int alpha = 0, special = 0, dot = 0, passl = 0;

//     int len = strlen(email);
//     int passlen = strlen(pass);
//     if (passlen > 6)
//     {
//         passl = 1;
//     }

//     for (int i = 0; i < len; i++)
//     {
//         if (isalpha(email[i]))
//         {
//             alpha = 1;
//         }
//         else if (email[i] == '@')
//         {
//             special = 1;
//         }
//         else if (email[i] == '.')
//         {
//             dot = 1;
//         }
//     }

//     if (alpha && special && dot && passl)
//     {
//         printf("login");
//     }
//     else
//     {
//         printf("not login");
//     }
// }
