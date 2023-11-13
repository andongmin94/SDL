<template>
  <div>
    <h1>Todo PJT</h1>
    <TodoForm />
    <TodoList />
    완료 : {{  store.doneTodosCount }}
  </div>
</template>

<script setup>
import TodoForm from '@/components/TodoForm.vue'
import TodoList from '@/components/TodoList.vue'

import { useCounterStore } from '@/stores/counter';

const store = useCounterStore();


</script>

<style scoped>

</style>