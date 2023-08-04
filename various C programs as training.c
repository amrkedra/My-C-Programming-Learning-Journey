#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 5

void stu_mark();
char names();
void even_odd_arr(void);
void ascending(void);
void insert(void);

int main() //this function is to check if any of the array elements are the same value and then prints the number of matches found
{
armestrong();
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
}
//this function is to receive elements in array and seperate even from odd and print each seperatly.
void even_odd_arr(void){
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


    /*int x=3,y=6,z=14,i,largest;

        if(x>y)
        largest=x;
    else
        largest=y;
    if(largest>z)
        largest = largest;
    else
        largest = z;
    printf("%d", largest);
}

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
