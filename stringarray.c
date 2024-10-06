// #include<stdio.h>
// int main(){

// char name[10];
// printf("enter your name ");
// fgets(name,20,stdin);   // fgets used to input strings with spaces 
// gets(name)    //Representation of scanf
// puts(name)   // Represnetation of printf
// printf("%s",name);
// }

//LENTGH COUNT OF NAME AND VOWEL COUNT
//  #include<stdio.h>
//  int main(){
// char name[20];
// printf("enter your name ");
// fgets(name, 20, stdin);
// printf("%s", name);

// int c = 0;
// for (int i = 0; name[i] != '\0'; i++)
// {
//     if (name[i] == 'a' || name[i] =='e' || name[i] =='i' || name[i] == 'o' || name[i] == 'u')
//     {
//         c++;
//     }
// }
// printf("%d", c);
// return 0;
// }



// PUNCTUATION COUNT
//  #include<stdio.h>
//  int main(){
// char name[20];
// printf("enter your name ");
// fgets(name, 20, stdin);

// int c = 0;
// for (int i = 0; name[i] != '\0'; i++)
// {
//     if((name[i]>=32 && name[i]<=47) || (name[i]>=58 && name[i]<=64)  || (name[i]>=91 && name[i]<=96))
//     {
//         c++;
//     }
// }
// printf("%d", c);
// return 0;
// }



// REVERSE OF A STRING
// #include <stdio.h>

// int main() {
//     char name[20];
//     int c = 0, i; 
//     printf("Enter your name: ");
//     fgets(name, 20, stdin);

//     for (i = 0; name[i] != '\0'; i++) {
//         c++;
//     }

//     for (i = c - 1; i >= 0; i--) {
//         printf("%c", name[i]);
//     }

//     return 0;
// }


// COPY STRING
// #include <stdio.h>
// int main(){

// char name[20];
// char copy[20];
// printf("enter your name ");
// fgets(name, 20, stdin);

// for(int i=0 ; i<=20;i++){

//     copy[i]=name[i];
// }
// printf("%s", copy);
// }



// SWAPPING OF STRINGS
//  #include <stdio.h>
// int main(){

// char name[20];
// char a[20],b[20];
// printf("enter your name 1 ");
// fgets(name, 20, stdin);
// printf("enter your name 2 ");
// fgets(a, 20, stdin);

// name[20] = b[20];
// a[20] = name[20];
// b[20] = a[20];

// printf("1st name\t%s",a);
// printf("2nd name\t%s",name);
// }


// COMBINATION OF 2 STRINGS
// #include <stdio.h>
// int main(){

// char name1[20];
// char name2[20];

// printf("enter your name 1 ");
// scanf("%s",&name1);
// printf("enter your name 2 ");
// scanf("%s",&name2);

// int j=0,c=0,i;
// for ( i = 0; name1[i] != '\0'; i++)
// {
//     c++;
//   }

// for ( i=c;name2[j]!='\0';i++){
//     name1[i]=name2[j];
//     j++;
// }
// name1[i]='\0';
// printf("name%s",name1);

// return 0;
// }




// DIVIDE IN EQUAL PARTS
// #include <stdio.h>
// int main(){

// char name[20];
// printf("enter your name ");
// fgets(name, 20, stdin);

// }



// #include<stdio.h>
// int main ()
// {
//   char name1[20],name2[20],extra[20];
//   int length=0;

//   printf("enter the name 1: ");
//   fgets(name1, 20, stdin);
 
//   printf("enter the name 2: ");
//   fgets(name2, 20, stdin);

//   extra[5] = name1[5];
//   name1[5] = name2[5];
//   name2[5] = extra[5];

//   printf(" name 1 :%s", name1);
//   printf("\nname 2 :%s", name2);

//   for(int i=0;a[i]!='\n';i++)
//   {
//     length++;           
//   }

//   return 0;
// }

