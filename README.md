# Philosophers

The **Philosophers** project from [42 School](https://42.fr) is an introduction to multithreading and process synchronization.  
It simulates the famous [Dining Philosophers Problem](https://en.wikipedia.org/wiki/Dining_philosophers_problem) where philosophers alternately **eat**, **sleep**, and **think**, while competing for limited resources (forks).

---

## 📌 Project Overview

- You must write a program that simulates philosophers sitting around a table.
- Philosophers can **take forks**, **eat**, **sleep**, and **think**.
- They must avoid **dying of starvation**.
- The simulation ends if:
  - A philosopher dies, or
  - All philosophers have eaten at least a certain number of meals (optional argument).

The challenge is to handle **concurrent threads/processes** and avoid **data races** or **deadlocks**.

---

## ⚙️ Compilation

```sh
make        # builds philo
make clean  # removes objects
make fclean # removes binary and objects
make re     # full rebuild

./philo number_of_philosophers time_to_die time_to_eat time_to_sleep [number_of_times_each_philosopher_must_eat]
