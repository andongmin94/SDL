<template>
    <div>
      <div>
        <button @click="increment">count : {{ count }}</button>
      </div>
    </div>
  </template>
  
  
  <script setup>
  import { ref } from 'vue'
  const count = ref(0)
  const increment = () => count.value++
  </script>
  
  
  <style scoped>
  </style>