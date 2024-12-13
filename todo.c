// Task strukturasini yaratamiz
typedef struct {
    char title[100];  // Vazifaning nomi
    int status;       // 1 - "Completed", 0 - "Incomplete"
} Task;

Task tasks[100];  // Vazifalar ro'yxati
int count = 0;    // Hozirgi vazifalar soni

// add_task - Yangi vazifa qo'shish
void add_task();

// list_all_tasks - Barcha vazifalarni ro'yxatini ko'rsatish
void list_all_tasks();

// get_task_by_id - Vazifani ID bo'yicha ko'rsatish
void get_task_by_id();

// delete_task_by_id - Vazifani ID bo'yicha o'chirish
void delete_task_by_id();

// mark_task_completed - Vazifani "Completed" deb belgilash
void mark_task_completed();

// mark_task_incomplete - Vazifani "Incomplete" deb belgilash
void mark_task_incomplete();

// show_menu - Foydalanuvchiga menyuni ko'rsatish
void show_menu(void);
