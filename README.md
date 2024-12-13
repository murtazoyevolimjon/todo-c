# To-Do List Project

## Loyihaning Maqsadi
Bu loyiha To-Do ro'yxatini boshqarish uchun dastur yaratishdir. Foydalanuvchilar vazifalarni qo'shish, ro'yxatlash, o'qish, o'chirish, "Completed" yoki "Incomplete" holatiga o'tkazish imkoniyatiga ega bo'lishadi.

## Asosiy Funktsiyalar
1. **Add Task (Vazifa qo'shish)**: Yangi vazifa qo'shish imkoniyati.
2. **List Tasks (Vazifalarni ro'yxatlash)**: Barcha vazifalarni ko'rsatish.
3. **Get Task (Vazifani olish)**: Belgilangan ID orqali vazifani ko'rsatish.
4. **Delete Task (Vazifani o'chirish)**: Belgilangan ID orqali vazifani o'chirish.
5. **Mark Task as Completed (Vazifani "Completed" deb belgilash)**: Vazifani tugallangan deb belgilash.
6. **Mark Task as Incompleted (Vazifani "Incomplete" deb belgilash)**: Vazifani tugallanmagan deb belgilash.
7. **Menu**: Foydalanuvchiga barcha imkoniyatlarni ko'rsatuvchi menyu.

## Loyihaning Tuzilishi

### `Task` Struct:
Bu struktura har bir vazifaning ma'lumotlarini saqlaydi:
- `title`: char[] (Vazifaning nomi)
- `description`: char[] (Vazifaning tavsifi)
- `status`: int (Vazifaning holati, masalan: 1 - "Bajarilgan", 0 - "Bajarilmagan")

### Funksiyalar
1. **add_task**: Yangi vazifa qo'shish.
2. **list_tasks**: Barcha vazifalarni ro'yxatlash.
3. **get_task**: Belgilangan ID bilan vazifani olish.
4. **delete_task**: Belgilangan ID bilan vazifani o'chirish.
5. **mark_completed**: Vazifani "Completed" deb belgilash.
6. **mark_incomplete**: Vazifani "Incomplete" deb belgilash.
7. **menu**: Foydalanuvchiga menyuni ko'rsatish va tanlov qilish imkoniyatini beradi.
8. 
## Dastur Ishlash Tamoyili

1. **Dastur boshlanganda menyu chiqadi**: 
   - Foydalanuvchi turli variantlarni tanlashi mumkin:
     ```
     To-Do List Menu:
     1. Add Task
     2. List Tasks
     3. Get Task by ID
     4. Delete Task
     5. Mark Task as Completed
     6. Mark Task as Incompleted
     7. Exit
     Enter your choice: 
     ```
   
2. **Vazifa qo'shish**:
   - Foydalanuvchi "Add Task" (Vazifa qo'shish) variantini tanlashi mumkin.
   - Dastur foydalanuvchidan vazifa nomi va tavsifini so'raydi.
   - Misol:
     ```
     Enter task title: Buyurtma qilish
     Enter task description: Buyurtma qilishni yakunlash
     Task added successfully!
     ```

3. **Vazifalarni ro'yxatlash**:
   - Foydalanuvchi "List Tasks" (Vazifalarni ro'yxatlash) variantini tanlashi mumkin.
   - Barcha vazifalar ro'yxatdagi ID, nomi, tavsifi va holati bilan ko'rsatiladi.
   - Misol:
     ```
     ID   | Title           | Description                   | Status
     -----------------------------------------------------------
     1    | Buyurtma qilish | Buyurtma qilishni yakunlash   | Bajarilmagan
     2    | Kitob o'qish    | Kitobni tugatish              | Bajarilgan
     ```

4. **Vazifani o'qish**:
   - Foydalanuvchi "Get Task by ID" variantini tanlashi mumkin.
   - Dastur foydalanuvchidan vazifa ID sini so'raydi va o'sha IDga mos vazifani chiqaradi.
   - Misol:
     ```
     Enter task ID to get: 1
     
     Title: Buyurtma qilish
     Description: Buyurtma qilishni yakunlash
     Status: Bajarilmagan
     ```

5. **Vazifani o'chirish**:
   - Foydalanuvchi "Delete Task" variantini tanlashi mumkin.
   - Dastur foydalanuvchidan o'chiriladigan vazifa ID sini so'raydi.
   - Misol:
     ```
     Enter task ID to delete: 1
     Task deleted successfully!
     ```

6. **Vazifani "Completed" deb belgilash**:
   - Foydalanuvchi "Mark Task as Completed" variantini tanlashi mumkin.
   - Dastur foydalanuvchidan vazifa ID sini so'raydi va vazifani "Completed" holatiga o'tkazadi.
   - Misol:
     ```
     Enter task ID to mark as Completed: 1
     Task marked as Completed!
     ```

7. **Vazifani "Incomplete" deb belgilash**:
   - Foydalanuvchi "Mark Task as Incompleted" variantini tanlashi mumkin.
   - Dastur foydalanuvchidan vazifa ID sini so'raydi va vazifani "Incomplete" holatiga o'tkazadi.
   - Misol:
     ```
     Enter task ID to mark as Incompleted: 1
     Task marked as Incompleted!
     ```

8. **Dasturni yakunlash**:
   - Foydalanuvchi "Exit" variantini tanlashi mumkin, bu dasturdan chiqadi.

## Loyihani Ishga Tushurish
1. `todo.c` faylini kompyuteringizda saqlang.
2. C kompilyatori orqali quyidagi buyruqni ishlating:
   ```
   gcc todo.c -o todo
   ./todo
   ```
3. Dastur sizga menyu orqali vazifalar ro'yxatini boshqarish imkonini beradi.

## Misollar

### Vazifani Qo'shish
Foydalanuvchi yangi vazifani quyidagi tarzda qo'shishi mumkin:
```
Enter task title: Buyurtma qilish
Enter task description: Buyurtma qilishni yakunlash
```

### Vazifalarni Ro'yxatlash
Barcha vazifalar quyidagicha ko'rsatiladi:
```
ID   | Title           | Description                   | Status
-----------------------------------------------------------
1    | Buyurtma qilish | Buyurtma qilishni yakunlash   | Bajarilmagan
2    | Kitob o'qish    | Kitobni tugatish              | Bajarilgan
```

### Vazifani O'chirish
Foydalanuvchi vazifani o'chirishi mumkin:
```
Enter task ID to delete: 1
Task deleted successfully.
```

### Vazifani "Completed" deb belgilash
Foydalanuvchi vazifani tugallangan deb belgilashi mumkin:
```
Enter task ID to mark as Completed: 1
Task marked as Completed!
```

### Vazifani "Incomplete" deb belgilash
Foydalanuvchi vazifani tugallanmagan deb belgilashi mumkin:
```
Enter task ID to mark as Incompleted: 1
Task marked as Incompleted!
```
