#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#define n 5

void stu_mark();
char names();
void even_odd_arr(void);
void ascending(void);
void insert(void);
int string_len();
void str_reverse();

int main()
{

remove_blank_space();

//char_freq();
//matrix_mltiply();
//sum_of_array_elements();
//string_upper_lower();
//str_reverse();
//concatenation_string();
//angram();
//occu_string();
//remove_char_from_string();
//largest();
//sum_without_plus();
//swap();
//binary();
//prime();
//armestrong();
//rev_int();
//odd_occurance();
//majority();
//determinant();
// sparse_matrix();
//lower_triangle();
//second_largst();
//del_from_arr();
//fibonacci();
//insert();
//ascending();
}
    //even_odd_arr();
    /*int arr[5],j, i,max, min;
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

max = arr[0];
min=arr[0];
    for(i=0; i<5;i++){
       if(arr[i]>max){
       max = arr[i];}

    else{max=max;}
if(min>arr[i]){
    min = arr[i];
}
else{min=min;}

}

 printf("the max is %d \n and the min is %d ", max , min);
*/

void remove_blank_space(void){//this function is to remove the space from string

char string[100] , c=' ';
int i,j,size;

printf("enter the string:");
gets(string);

size= strlen(string);

for(i=0,j=0;i<size;i++){

        if(string[i]!=c){
            string[j]=string[i];
            j++;

        }
    }



string[j] = '\0';

puts(string);

}






void char_freq(void){//this function is to find the char with largest frequency

char string[100],c;

int i ,j,size,count[1000]={0},x=0;

printf("enter the string:");
gets(string);

size= strlen(string);


for(i=0;i<size;i++){


    count[string[i]]++;

}

for(i=0;i<size;i++){
    if(count[string[i]] >= x){
        x=count[string[i]];

        c=string[i];
    }
}
printf("the char is %c is repeated %d times", c,x);

}




void even_odd_arr(void){ //this function is to receive elements in array and seperate even from odd and print each seperatly.

int arr[n],even[n],odd[n],i,j=0,k=0;

for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
for(i=0; i<n ; i++){
    if((arr[i] % 2) == 0){
        even[j] = arr[i];
        j++;
    }
    else {
        odd[k] = arr[i];
        k++;}
    }


for(i=0; i<j; i++){
    printf("%d ", even[i]);
}
printf("\n");

for(i=0; i<k; i++){
    printf("%d ", odd[i]);
}

}
void ascending(void){ //this is a function to sort array Descending
int arr[n], i,j, temp;

printf("please enter the array elements:\n");
for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
temp = arr[0];
for(i=0; i<n; i++){
        for(j=i+1;j<n;j++){



    if (arr[i]<arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
       arr[j] = temp;

        }}}


        printf("the array elements are:\n");
    for(i=0; i<n; i++){
        printf("%d", arr[i]);}
    }




void insert(void){ //this function is to insert element in the sorted array
int  i,num,size,x,pos;
int arr[size];

printf("enter the size of array");
scanf("%d",&size);


printf("please enter the array elements:\n");
for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("please enter the number to be inserted:");
    scanf("%d",&num);


printf("where do you want to insert the element:");
scanf("%d",&pos);
 for(i=(size-1);i>=pos-1;i--){

        arr[i+1]=arr[i];
    }
    arr[pos-1]= num;

         size++;

    for(i=0;i<size;i++){
        printf("%d", arr[i]);
    }


}


void fibonacci(void){
int i,n1=0,n2=1,sum=0,max=20;
for(i=2;i<=max;i++){

    sum=n1+n2;
    printf("%d ",sum);

     n1=n2;
     n2=sum;
}

}

void del_from_arr(void){ //this function is to delete element from array
int arr[30], i, size,pos;

printf("please enter the size of array:");
scanf("%d",&size);

printf("what is the position you want to remove:");
scanf("%d", &pos);

printf("enter array elements:");

for(i=0;i<size;i++){
    scanf("%d", &arr[i]);
}
for(i=pos-1; i<size-1;i++){
    arr[i] = arr[i+1];
}
    size--;

for(i=0;i<size;i++){
    printf("%d",arr[i]);
}
}


void second_largst(void){ //this function is to print the second largest number in array
int arr[20], i,j,size, largst,second_lrgst=0,temp;


printf("please enter the size of array:");
scanf("%d",&size);

printf("enter array elements:");

for(i=0;i<size;i++){
    scanf("%d", &arr[i]);
}

for(i=0; i<size;i++){
 for(j=i+1;j<size;j++){

  if(arr[i]>arr[j]){
    largst = arr[i];
  }
  else{
    largst=arr[j];
    }


    }

}
for(i=0; i<size;i++){
 for(j=0;j<=size;j++){
 if(arr[i]< largst && arr[i]> arr[j]){
        second_lrgst = arr[i];
}
}
}


printf("\n%d",second_lrgst);

}

void  lower_triangle(void){ //this function is to print the lower triangle of array as 0
int  size1,size2,j, i;
int arr[size1][size2];
printf("please enter the array rows number:");
scanf("%d",&size1);

printf("please enter the array columns number:");
scanf("%d",&size2 );


for(i=0; i<size1;i++){
        for(j=0; j<size2;j++){
    printf("enter array element no %d %d :  ",i,j);
    scanf("%d", &arr[i][j]);
}
}

for(i=0; i<size1;i++){
        for(j=0; j<size2;j++){
                if(i>j){
                    printf("%d ",0);
                }
                else{
                    printf("%d ", arr[i][j]);
                }


}
printf("\n");
}

}

void determinant(void){  //this function is to print the determinant of 3*3 matrix
    int arr[3][3], i,j, result;

    printf("enter the matrix elements: ");

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("enter element [%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i<0; i<1; i++){
        for(j=0; i<3; i++){
            result= ((arr[i][j]*((arr[1][1]*arr[2][2]) - (arr[1][2]*arr[2][1]))) - (arr[i][j]*((arr[1][0] * arr[2][2])-(arr[1][2]*arr[2][0]))) - (arr[i][j] * (arr[1][0] * arr[2][1]) - (arr[1][1] * arr[2][0])));

        }
    }

printf("%d", result);

}

void sparse_matrix (void){ //this function is to determine wether given matrix is sparce or not

int size1,size2, i,j, count_of_0=0, count_of_N_0=0;
int array[20][20];


printf("enter the array row size:");
scanf("%d",&size1);

printf("enter the array column size:");
scanf("%d",&size2);

printf("enter the array elements:");

  for (i=0;i<size1;i++){
    for(j=0;j<size2;j++){
        printf("enter element : %d %d :", i,j);
        scanf("%d", &array[i][j]);

    }
}
for(i=0;i<size1;i++){
    for(j=0;j<size2;j++){
        if(array[i][j] == 0){
            count_of_0 ++;
            }

            else{
                count_of_N_0 ++;
            }
    }
}
if(count_of_0 > count_of_N_0){
    printf("This Matrix is sparse_matrix ");
}
else{
    printf("this is not sparse_matrix");
}


}



void majority(void){ //this function is to find if a number has the majority
int arr[50], i ,j , size,x, count=0;

printf("enter the matrix size:");
scanf("%d",&size);

printf("enter elements of array:");
for(i=0; i<size; i++){


        scanf("%d",&arr[i]);

}

for(i=0; i<size;i++){
    for(j=i+1;j<size; j++){

    if (arr[i]= arr[j]){

        count++;
        x=i;
    }
    else{
        count--;
}
    }
}

if (count >= (size/2))
    printf("the number %d is majority ", arr[x]);

    else
        printf("no majority number");
}


void odd_occurance(void){
int arr[20], i, j ,size,x, count;

printf("enter the matrix size:");
scanf("%d",&size);

printf("enter elements of array:");
for(i=0; i<size; i++){


        scanf("%d",&arr[i]);

}

for(i=0; i<size; i++){
    for(j=i+1; j<size;j++){
    if (arr[i] == arr[j]){

        count++;
        x=i;
    }
    else
        count--;
}

}

if((count%2) != 0){
        printf("the %d number happened odd number of times", arr[x]);

}
}

void rev_int(void){ //this function is to reverse an integer if more than 10

    int x ,temp,rem=0 , result;

    printf("enter the int :");
    scanf("%d", &x);

    if(x<10){
        printf("this is single int number and can't be reversed.");
         exit (0) ;
    }
    else{
    while(x != 0){
         rem = (x%10);
        temp = (x/10);


        result = result*10 + rem ;
x = temp;
    }
    }
    printf("the reversed number is  : %d ", result);
}


void armestrong(void){ //this function is to detect wetther a num is armestrong or not
int x , temp, rem=0, res,count=0,i,original;

printf("enter the number : ");
scanf("%d" , &x);

original = x;
temp = x;
while(temp != 0){
    temp /=10;
    count ++;

}


while(x!= 0){

    rem = x%10;

    res = res + pow(rem,count);

    x /=10;

}

if( res == original ){
    printf("this is Armestrong num");
}
else{
    printf("this is not Armestrong num");
}
}


void prime(void){//this function is to check for prime number
int num,temp,i,prime;

printf("enter the number :");
scanf("%d", &num);

temp = ceil(sqrt(num));

for(i=2; i<=temp;i++){
    if (num%i == 0){
       prime =0;
    }
    else{
        prime = 1;
    }

}
if(prime || num==2||num==3){
    printf("this number is prime");
}
else{
    printf("this is not prime");
}


}


void binary(void){//this function is to determine given number is entered in binary form or not

int num, temp, rem,count=0;

printf("enter the number:");
scanf("%d", &num);

temp = num;
while(temp!=0){
    rem = temp%10;
     temp=temp/10;
    if(rem==0 || rem==1){
     count++;


    }
    else{
        count=0;
    }

    }

    if(count){
        printf("this number is binary");
    }
    else{
        printf("this number is not binary");
    }

}


void swap(void){ //this function is to swap 2 numbers without using third variable

int num1,num2;


printf("enter the first num:");
scanf("%d",&num1);

printf("enter second num:");
scanf("%d", &num2);

num1 = num1 - num2;
num2 = num1 + num2;
num1= num2 -num1;


printf("num1 = %d\n", num1);
printf("num2 = %d", num2);
}

void sum_without_plus(void){//this function is to add 2 numbers without using + sign
int x , y,i;

printf("enter first n:");
scanf("%d", &x);

printf("enter second n:");
scanf("%d", &y);

for (i=0;i<y;i++){
    x++;
}

printf("the sum is :%d ", x);


}

void largest(void){//this function to find the largest of 3 numbers

int x,y,z,i,largest;


    printf("enter first number:");
    scanf("%d", &x);

     printf("\nenter second number:");
    scanf("%d", &y);

     printf("\nenter third number:");
    scanf("%d", &z);



    if(x>y && x>z)
        largest=x;
    else if (z>y && z>x)
        largest=z;
    else if(y>x && y>z)
        largest = y;
    printf("\n%d", largest);
}

void remove_char_from_string(void){//this function is to remove a specific char from string
char string[50],c;
int i ,j,count;

printf("enter the string:");
gets(string);

puts("enter the string you want to remove");
scanf("%c", &c);


count = strlen(string);

for(i=0,j=0; i<count; i++){

    if (string[i] != c){

        string[j++] = string[i];

    }

}
string[j] = '\0';
puts(string);



}

void occu_string(void){ //this function is to count number of times char is repeated
char string[50], c;
int i ,x,count=0,size;

printf("enter the string:");
gets(string);

puts("enter the string you want to check");
scanf("%c", &c);

size = strlen(string);

for (i=0; i<size;i++){

    if (string[i] == c){
        count++;
        x=i;
    }

}
printf("the string %c is repeated %d times", string[x], count);

}




void angram(void){//this function is to detect if 2 strings are angram or not
char string1[20], string2[20],temp;
int i,j,size1,size2,count=0;

printf("enter string 1:");
gets(string1);

printf("\nenter string 2:");
gets(string2);

size1= strlen(string1);
size2= strlen(string2);


if(size1!= size2){
    printf("NOT ANGRAM STRING");
    exit(0);
}
else{
for(i=0;i<size1;i++){
        for(j=i+1;j<size1;j++){
    if(string1[i] > string1[j]){

       temp = string1[i];
       string1[i]=string1[j];
       string1[j]=temp;
    }
        }
    }
for(i=0;i<size2;i++){
        for(j=i+1;j<size2;j++){

    if(string2[i]>string2[j]){
         temp = string2[i];
       string2[i]=string2[j];
       string2[j]=temp;
    }

}
}

if(strcmp(string1, string2)==0){
    printf("ANGRAM");
}
else{
    printf("NOT ANGRAM");
}



}
}


int string_len(char *string){ //this function is to get string length and return the string length as int
int i=0;

while(string[i] != '\0'){
i++;
}

return i;
}


void concatenation_string(void){//this function is to concatenate 2 strings

char string1[20],string2[20];
int i ,j,size1,size2,order;

printf("Enter first string:");
gets(string1);

printf("Enter second string:");
gets(string2);


printf("which string first :");
scanf("%d", &order);

size1= strlen(string1);
size2 = strlen(string2);

if(order == 1){

for(i=size1,j=0;j<size2;j++,i++){
       string1[i] = string2[j];

        }
    puts(string1);

}

else{

 for(i=size2,j=0;j<size1;j++,i++){
       string2[i] = string1[j];

        }
    puts(string2);

}

}


int string_comparison(char* string1,char* string2){//this function is to check wether 2 strings are same or not

int i,j;
char temp;

if(strlen(string1) != strlen(string2)){
    return 1;
}
else{
for(i=0; i<strlen(string1);i++){
    for(i+1;j<=strlen(string1);j++){
        if(string1[i] > string1[j]){
            temp = string1[i];
            string1[i] = string1[j];
            string1[j]=temp;
        }
    }
}

  for(i=0; i<strlen(string2);i++){
    for(i+1;j<=strlen(string2);j++){
        if(string1[i] > string1[j]){
                  temp = string2[i];
            string2[i] = string2[j];
            string2[j] = temp;
        }
    }
}
}

for(i=0; i<strlen(string1);i++){
    if(string1[i] == string2[i]){
        return 0;
    }
    else{
        return 1;
    }


}

}


void str_reverse(void){//this function is to reverse a string

int size, half_size,i,j;
char temp,string[50];

printf("enter the string:");
gets(string);

half_size = ceil(strlen(string)/2);
size=strlen(string);

for(i=0,j=size-1;i<half_size;i++,j--){
    temp = string[i];
    string[i]=string[j];
    string[j]=temp;
}

puts(string);



}

void string_upper_lower(void){//this function is to convert from UPPER to lower

int i,j;
char string[50];

printf("enter the string:");
gets(string);


for(i=0;i<strlen(string);i++){

    if(string[i] <= 90 && string[i]>=65){
        string[i] = string[i]+32;
    }
}

puts(string);

}


void sum_of_array_elements(void){
int array[5][5] , i,j,sum_row[5]={0},sum_column[5]={0};

for(i=0;i<5;i++){
    for(j=0;j<5;j++){

        printf("enter element no %d of row %d", j,i);
        scanf("%d",&array[i][j]);
    }
}
for(i=0;i<5;i++){
    for(j=0;j<5;j++){

        printf("%d ", array[i][j]);

    }

    printf("\n");
}



for(i=0;i<5;i++){
        for(j=0;j<5;j++){
    sum_row[i] = sum_row[i] + array[i][j];

        }
}
for(i=0;i<5;i++){
        printf("%d ",sum_row[i]);

}


printf("\n");

for(i=0;i<5;i++){
        for(j=0;j<5;j++){
    sum_column[i] = sum_column[i] + array[j][i];

        }
}
for(i=0;i<5;i++){
        printf("%d ",sum_column[i]);

}

}


void matrix_mltiply(void){

int arr1[3][3], arr2[3][3], j,i,rows1,columns1,rows2,columns2,mul[3][3];

printf("enter the # of rows and # of columns of first matrix");
scanf("%d %d", &rows1,&columns1);

printf("\n enter the # of rows and # of columns of second matrix ");
scanf("%d %d", &rows2,&columns2);

if(columns1 != rows2){
    printf("can't be multiplied as rows of 1 matrix not equal to columns of 2 array");
    exit (0);
    }
else{
    for(i=0;i<rows1;i++){
        for(j=0;j<columns1;j++){
            printf(" for matrix 1, enter element #%d of row #%d",j,i);
            scanf("%d", &arr1[i][j]);
        }
    }

     for(i=0;i<rows2;i++){
        for(j=0;j<columns2;j++){
            printf(" for matrix 2, enter element #%d of row #%d",j,i);
            scanf("%d", &arr2[i][j]);
        }
    }
for(i=0;i<rows1;i++){
    for(j=0;j<columns1;j++){
        printf("%d ",arr1[i][j]);
    }
    printf("\n");
}


for(i=0;i<rows2;i++){
    for(j=0;j<columns2;j++){
        printf("%d ",arr2[i][j]);
    }
    printf("\n");
}


for(i=0;i<rows1;i++){
    for(j=0;j<columns2;j++){
        mul[i][j]= ((arr1[i][j]*arr2[i][j])+(arr1[i][j+1]+arr2[i][j+1])+(arr1[i][j+2]*arr2[i][j+2]));

    }
}

for(i=0;i<rows1;i++){
    for(j=0;j<columns2;j++){
        printf("%d ",mul[i][j]);
    }
    printf("\n");
}

}
}



    /*for(i=0; i<5; i++){

        for(j=i+1;j<5;j++){

            if(arr[i] == arr[j]){
            freq++;
            printf("%d repeted %d times\n", arr[i],freq);
            break;}
            else{
            printf("%d repeted %d times\n", arr[i],freq);
            break;
        }

        }

    }
    printf("there are %d repettions", freq);

}
/*int arr1[3], arr2[3],merg[2][3]={0},k, i,j,temp;

printf("enter the elements of the first array\n");
for(i=0,k=1; i<3;i++,k++){
        printf("element no %d:",k);
scanf("%d",&arr1[i]);

}
printf("enter the elements of the second array\n");
for(i=0,k=1; i<3;i++,k++){
        printf("element no %d:",k);
scanf("%d",&arr2[i]);
}

for(i=0;i<1;i++){
    for(j=0,k=0;j<3;j++,k++){
        merg[i][j] = arr1[k];
    }
}

for(i=1;i<2;i++){
    for(j=0,k=0;j<3;j++,k++){
        merg[i][j] = arr2[k];
    }
}
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
            if(merg[i][j+1] > merg[i][j] ){
                temp = merg[i][j+1];
                merg[i][j+1]= merg[i][j];
                merg[i][j]=temp;
            }

     printf("%d ",merg[i][j]);
}

}
}






   /* int n,arr[n],i,j,dupl=0, a[n],uniq[n];
    int count ;

    printf("enter the num of elements to be stored in array:");
    scanf("%d", &n);

    for(i=0;i<n;i++){
            printf("enter element no %d:",i);
            scanf("%d",&arr[i]);
            a[i]=arr[i];
        }

    for(i=0;i<n;i++){
    count = 0;
       for(j=(i+1); j<n;j++){
        if(arr[i] == a[j]){

        }
        else
    {
        count =1;
    }
       }
       if(count == 1)
        printf("%d", uniq[i]);
    }
}

//printf("the duplicate nums : %d", dupl);}
    /*int arr[3][3]={{6,9,8},{1,2,3},{4,5,6}},k=0,l=0,i,j,sum=0,a[3][3]
    ,y[3][3]={{5,9,8},{6,7,9},{4,3,4}};

    /*for(i=0; i<m;i++){
        for(j=0; j<n;j++){
            scanf("%d",&arr[i][j]);
            sum = sum + arr[i][j];

        }
    }*/
    /*for(i=0; i<3;i++){
        for(j=0;j<=2;j++){
                a[i][j] = arr[i][j]+y[i][j];


        }
        printf("\n");
    }
    for(i=0; i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

     /*  int arr[5], i=0;
    while(i<5)
        (arr[i])= i+1;
    for(i=0; i<5; i++){
        printf("%d, ", arr[i]);}

    return 0;}*/
/*int **q,*p , arr[]={6,8,9,3,4},i;
p = arr;
q=*p;
printf("%d",*p+1);*/


    /*

/* int arr[20]={8,6,9,7,5,3,2}, i, size,pos,num;
 printf("enter size");
 scanf("%d", &size);
if (size > 20 || size<0){
    printf("can't let size exceed or be less than array limits, exiting..");
    exit(0);
}

else{
printf("at which position you want to enter the value:");
scanf("%d", &pos);
printf("what is the value you want to put:");
scanf("%d", &num);
 for(i=size; i>=(pos-1); i--){
    arr[i+1]=arr[i];
 }
 size++;
 arr[pos-1]=num;
for(i=0; i<size; i++){
    printf("%d ", arr[i]);
}
}
//stu_mark();
 /*int x = 5;
   int arr[]={2,6,3,8,9,5};
   int *ptrx,*q;
   ptrx = &x;
   q=arr;
   //printf("%x", arr);
   printf("%d",*(arr+3));
   return 0;
   /* int *p , x =8;
    p = &x;
    printf("%d", *p);*/
   //int my_array[]={1,2,5,9,7,5};

  // test_array(my_array,6 );

    //int a[]={2,1,5,9,6,3};
    //int *p = &a[2];
    //printf("%d",*p);
/*int num, arr[10], rem , i=0,j,temp,count;
printf("please enter number:");
scanf("%d",&num);


for(i=0;num!= 0;i++){
    rem = num%10;
    arr[i] = rem;
    num = num/10;

printf("the array numbers are :%d\n",arr[i]);

}
printf("the size of array is : %d",sizeof(arr));
/*

for (i=0; i<=5;i++){
    temp=arr[i];
    for(j=i+1; j<=5;j++){
        if (arr[j]== temp){
                count++;
        }
    }

}
printf("yes there is match %d times",count);*/


/*int test_array(int *p, int size){

        int i;
        for(i=0; i<size; i++){
            printf("%d",p[i]);
        }

}

void stu_mark(){

int marks[5][5],i,j;
for(i=0;i<=4;i++){
        names();

for(j=0; j<=4 ;j++){

        printf("\nfor student no %d, enter mark no %d:",i,j);
        scanf("%d",&marks[i][j]);
    }
}
}
char names(){
    static int i,j;
    char name[5][5];

    for (i=1; i<=5; i++){

        for(j=1; j<=5;j++){
            printf("please enter no.%d student name:",i);
            gets(name[i]);

            return name;
        }
*/
