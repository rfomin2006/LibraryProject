# Приложение для управления библиотекой

**Тема:** разработка консольного приложения для управления библиотекой.

**Цель работы:** разработать многофайловый проект, который позволит управлять библиотекой книг.

**Язык реализации:** C++

## Консольный интерфейс программы
![image](https://github.com/user-attachments/assets/3c4880ad-3188-4239-8fba-dc5bf57dc5f5)

#### Программа имеет следующий функционал:
  | Выбор пользователя | Пример ввода |
  | ------------------ | ------------ |
  | 1 | ![image](https://github.com/user-attachments/assets/024997fb-0ee1-4443-bf88-f9fc3d864a58) |
  | 2 | ![image](https://github.com/user-attachments/assets/f8c68cde-2a53-4819-989d-40dc7daad0b4) |
  | 3 | ![image](https://github.com/user-attachments/assets/b6fb6ace-a101-4f15-89c4-fe6cddbf88bb) |
  | 4 | ![image](https://github.com/user-attachments/assets/5782c470-a1be-4709-b417-6d2376fc6309) |
  | 5 или некорректный выбор | ![image](https://github.com/user-attachments/assets/4be61812-e216-49ad-8f3c-113a04461b04) |

## Сборка проекта
  Сборка проекта реализована с помощью CMake.
  
  Содержимое файла сценария CMakeLists:
  
  ![image](https://github.com/user-attachments/assets/cf3fc247-9377-4970-81a5-327ca6900384)

#### Сборка проекта в терминале:
```bash
mkdir build && cd build
cmake .
cmake --build
```
