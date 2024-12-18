#include<stdio.h>
#include<string.h>
// Task strukturasini yaratamiz
typedef struct {
    char title[128];  // Vazifaning nomi
    char description[512];
    int status;       // 1 - "Bajarilgan", 0 - "Bajarilmagan"
} Task;

Task tasks[100];  // Vazifalar ro'yxati
int count = 0;    // Hozirgi vazifalar soni
Task tasks[100]; 
int count = 0;    
int exit = 1;

// add_task - Yangi vazifa qo'shish
void add_task();
void add_task() {
    char arr_title[128], arr_description[512];
    printf("Title kiriting :");
    
    fgets(arr_title, sizeof(arr_title), stdin);
    for (int i = 0; arr_title[i + 1] != '\0'; i++)
    {
        tasks[count].title[i] = arr_title[i];
    }
    printf("Titlega tavsif bering :");
    fgets(arr_description, sizeof(arr_description), stdin);
    for (int i = 0; arr_description[i + 1] != '\0'; i++)
    {
        tasks[count].description[i] = arr_description[i];
    }
    tasks[count].status = 0;
    count++;
};

// list_all_tasks - Barcha vazifalarni ro'yxatini ko'rsatish
void list_all_tasks();
void list_all_tasks(){
    if(count == 0){
        printf("Buyruqlar mavjud emas. Boshqa buyruq kiriting\n");
    }else
    {
        printf(" ID|        Title|               Description| Status\n----------------------------------------------------------\n");
        for (int i = 0; i < count; i++)
        {
            if (tasks[i].status != -1) 
            {
                printf("%-3d", i + 1);
                printf("| %-12s", tasks[i].title);
                printf("| %-25s", tasks[i].description);
                if (tasks[i].status == 0)
                {
                    printf("| Bajarilmagan\n");
                }
                else
                    printf("| Bajarilgan\n");
            }
            
        }
        
    }
    
};

// get_task_by_id - Vazifani ID bo'yicha ko'rsatish
void get_task_by_id();
void get_task_by_id(){
    //ID raqamini kiritish uchun o`zgaruvchi
    int n, deleted_index;
    printf("Izlazyotgan vazifangizning ID raqamini kiriting: ");
    scanf("%d", &n);
    deleted_index = tasks[n - 1].status;
    if ((n - 1 <= count) && (count != 0) && deleted_index != -1)
    {
        printf("%-3d", n);
        printf("| %-12s", tasks[n - 1].title);
        printf("| %-25s", tasks[n - 1].description);
        if (tasks[n - 1].status == 0)
        {
            printf("| Bajarilmagan\n");
        }
        else
            printf("| Bajarilgan\n");
    }else
    {
        printf("Vazifa mavjud emas ");
    }
    
    
};

// delete_task_by_id - Vazifani ID bo'yicha o'chirish
void delete_task_by_id();
void delete_task_by_id(){
    int n;
    printf("O`chirmoqchi bo`lgan vazifangixni ID raqamini kiriting: ");
    scanf("%d", &n);
    if ((n - 1 <= count) && (count != 0))
    {
        if (tasks[n - 1].status != -1)
        {
            tasks[n - 1].status = -1;
            printf("Vazifa muofaqqiyatli o'chirildi!\n");
        } else
        {
            printf("Bu ID allaqachon o'chirilgan");
        }
        
        
    }else
    {
        printf("Bu ID ga vazifa kiritilmagan!\n ");
    }
    
    };

// mark_task_completed - Vazifani "Completed" deb belgilash
void mark_task_completed();
void mark_task_completed(){
    int n;
    printf("Bajarilgan vazifani ni ID raqamini kiriting: ");
    scanf("%d", &n);
    if (n - 1 <= count && count != 0)
    {
        while (tasks[n - 1].status == 1)
        {
            printf("Bu vazifa bajarilgan!\n ");
            scanf("%d", &n);
        }
        tasks[n - 1].status = 1;
        printf("Vazifa bajarildi deb belgilandi :)\n");
    }else
    {
        printf("Bu ID da vazifa mavjud emas!\n");
    }
    
    
};

// mark_task_incomplete - Vazifani "Incomplete" deb belgilash
void mark_task_incomplete();
void mark_task_incomplete(){
    int n;
    printf("Bajarilmagan vazifani ni ID raqamini kiriting: ");
    scanf("%d", &n);
    if (n - 1 <= count && count != 0)
    {
        while (tasks[n - 1].status == 0)
        {
            printf("Bu vazifa oldindan bajarilmagan!\n ");
            scanf("%d", &n);
        }
        tasks[n - 1].status = 0;
        printf("Vazifa bajarilmadi deb bilgilandi :\n");
    }else
        {
            printf("Bunday ID da vazifa mavjud emas \n");
        }
    };

// show_menu - Foydalanuvchiga menyuni ko'rsatish
void show_menu(void);
void show_menu(void){
printf("To-Do List Menu:\n1. Add Task\n2. List Tasks\n3. Get Task by ID\n4. Delete Task\n5. Mark Task as Completed\n6. Mark Task as Incompleted\n7-menu ni qayta ko`rish\n8. Exit\n");
}
int main(){
    printf("To-Do List Menu:\n1. Add Task\n2. List Tasks\n3. Get Task by ID\n4. Delete Task\n5. Mark Task as Completed\n6. Mark Task as Incompleted\n7. menu ni qayta ko`rish\n8. Exit\n");
    
    while (exit != 8)
    {  
        printf("\nQaysi menu ga kirishni qilishni hohlaysiz: ");
        scanf("%d", &exit);
        while (getchar() != '\n')
            ;
        switch (exit)
        {
        case 1:
            add_task();
            break;
        case 2:
            list_all_tasks();
            break;
         case 3:
             get_task_by_id();
             break;
        case 4:
            delete_task_by_id();
            break;
        case 5:
            mark_task_completed();
            break;
        case 6:
            mark_task_incomplete();
            break;
         case 7:
             show_menu();
             break;
         case 8:
             break;
        
         default:
             printf("\nSiz mavjud bolmagan menu tanladingiz: ");
             break;
        }
    }    
}