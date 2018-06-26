/*
#include<iostream>
#include<cstring>
using namespace std;
int main(){
            struct person{
                        char name[20];
                        int count;
            }leader[3]={"Li", 0, "Zhang", 0, "Fun", 0};

            int n;
            char leader_name[20];
            cin>>n;
            if(n>0&&n<=100){
                        for(int i=0;i<n;++i){
                                    cin>>leader_name;
                                    for(int j=0;j<3;++j){
                                                if(strcmp(leader_name,leader[j].name)==0){
                                                            leader[j].count++;
                                                }
                                    }
                        }
            }
            cout<<endl;
            for(int i=0;i<3;++i){
                        cout<<leader[i].name<<":"<<leader[i].count<<endl;
            }
            return 0;
}
*/
/*
#include<iostream>
#include<cstring>
using namespace std;
int main(){
            struct person{
                        char name[20];
                        int count;
            }leader[3]={"Li", 0, "Zhang", 0, "Fun", 0};

            char leader_name[20];
            person *pt;//结构体数组指针
            pt=leader;
            int n;
            cin>>n;
            for(int i=0;i<n;++i){
                        cin>>leader_name;
                        for(int j=0;j<3;++j){
                                    if(strcmp(leader_name,(pt+j)->name)==0){
                                                (pt+j)->count++;
                                    }
                        }
            }

            for(int i=0;i<3;++i){
                        cout<<(pt+i)->name<<":"<<(pt+i)->count<<endl;
            }

            return 0;
}
*/
/*
#include<iostream>
#include<cstring>
using namespace std;
int main(){
            struct student {
            int num;
            char name[20];
            char sex;
            int age;
            };
            int n;
            student a[20];
            student *pt=a;
            cin>>n;
            if(n>0&&n<=20){
                for(int i=0;i<n;++i){
                        cin>>(pt+i)->num>>(pt+i)->name>>(pt+i)->sex>>(pt+i)->age;
                }
               for(int j=0;j<n;++j){
                        cout<<(pt+j)->num<<" "<<(pt+j)->name<<" "<<(pt+j)->sex<<" "<<(pt+j)->age<<endl;
                }

            }
            return 0;
}
*/
/*
#include<iostream>
#include<cstring>
using namespace std;

int main(){
             struct person{
                        int num;
                        char name[10];
                        char sex;
                        char job;
                        union {
                                    int clas;
                                    char position[10];
                        }category;
            };
            person a[20];
            person *pt=a;
            int n;
            cin>>n;
            if(n>0&&n<=100){
                        for(int i=0;i<n;++i){
                                    cin>>(pt+i)->num>>(pt+i)->name>>(pt+i)->sex>>(pt+i)->job;
                                    if((pt+i)->job=='t'){
                                                cin>>(pt+i)->category.position;
                                    }
                                    if((pt+i)->job=='s'){
                                                cin>>(pt+i)->category.clas;
                                    }
                        }

                        for(int i=0;i<n;++i){
                                    if((pt+i)->job=='t'){
                                                cout<<(pt+i)->num<<" "<<(pt+i)->name<<" "<<(pt+i)->sex<<" "<<(pt+i)->job<<" "<<(pt+i)->category.position<<endl;
                                    }
                                    if((pt+i)->job=='s'){
                                                 cout<<(pt+i)->num<<" "<<(pt+i)->name<<" "<<(pt+i)->sex<<" "<<(pt+i)->job<<" "<<(pt+i)->category.clas<<endl;
                                    }
                        }
            }
            return 0;
}
*/
/*
#include<iostream>
using namespace std;
struct student{
            int num;
            char name[20];
            int score1;
            int score2;
            int score3;
};
            student a[20];
            student *pt=a;
void input(){
         for(int i=0;i<5;i++){
            cin>>(pt+i)->num>>(pt+i)->name>>(pt+i)->score1>>(pt+i)->score2>>(pt+i)->score3;
         }

}
void print(){
        for(int i=0;i<5;i++){
            cout<<(pt+i)->num<<" "<<(pt+i)->name<<" "<<(pt+i)->score1<<" "<<(pt+i)->score2<<" "<<(pt+i)->score3<<endl;
        }
}

int main(){
            input();
            print();
            return 0;
}
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
            struct student{
                        int num;
                        char name[20];
                        int score1;
                        int score2;
                        int score3;
            };
            student a[20];
            student *pt=a;
            double sum1=0;
            double sum2=0;
            double sum3=0;
            int N;
            int avg_person_max=0;
            int avg_person[10];
            for(int i=0;i<10;++i){
                        cin>>(pt+i)->num>>(pt+i)->name>>(pt+i)->score1>>(pt+i)->score2>>(pt+i)->score3;
            }
            for(int i=0;i<10;++i){
                        sum1+=(double)(pt+i)->score1;
                        sum2+=(double)(pt+i)->score2;
                        sum3+=(double)(pt+i)->score3;
                        avg_person[i]=((pt+i)->score1+(pt+i)->score2+(pt+i)->score3)/3;
            }

            for(int i=0;i<10;++i){
                       if(avg_person_max<avg_person[i]){
                           avg_person_max=avg_person[i];
                           N=i;
                       }
            }
            cout<<fixed<<setprecision(2)<<(sum1/10)<<" "<<(sum2/10)<<" "<<(sum3/10)<<endl;
            cout<<(pt+N)->num<<" "<<(pt+N)->name<<" "<<(pt+N)->score1<<" "<<(pt+N)->score2<<" "<<(pt+N)->score3<<endl;

}

