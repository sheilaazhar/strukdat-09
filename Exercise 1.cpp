/*
Nama		: Sheila Azhar ALmufarida
NPM			: 140810180001
Kelas		: A
Nama Program: Exercise 1 (Reverse Word) menggunakan array
*/

#include<iostream>

#include <string.h>

using namespace std;

const int maxElmt = 255;
typedef char isi[maxElmt];

struct stack{
 isi kata;
 int top;
};

void createStack(stack& s);
void push(stack& s, isi newElmt);
void pop(stack& s);
 
main(){
 stack word;
 isi k;
 createStack(word);
 cout<<"Masukkan kalimat : ";
 cin.getline(k,maxElmt);
 system("cls");
 cout<<"t\tHASIL"<<endl<<endl;
 cout<<"Kalimat yang dimasukkan : "<<k<<endl;
 push(word,k);
 cout<<"Kalimat setelah dibalik : ";
 pop(word);
}

void createStack(stack& s){
 s.top = -1;
}

void push(stack& s, isi newElmt){
 if(s.top == maxElmt-1){
        cout<<"Stack sudah penuh!";
    }
    else{
        for(int i=0; newElmt[i]; i++){
            s.top = s.top+1;
        }
        strcpy(s.kata,newElmt);
    }
}

void pop(stack& s){
 while(s.top != -1){
  cout<<s.kata[s.top];
  s.top--;
 }
}
