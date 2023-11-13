<template>
    <div>
        <form @submit.prevent="1">
            <input type="text" v-model="todoText">
            <input type="submit" @click="createTodo">
        </form>
    </div>
</template>

<script setup>
import { useCounterStore } from '@/stores/counter';
import { ref } from 'vue'

const todoText = ref('')
const store = useCounterStore();

const createTodo = () => {
    store.addTodo(todoText.value)
    todoText.value = ''
}

</script>

<style scoped>

</style>b