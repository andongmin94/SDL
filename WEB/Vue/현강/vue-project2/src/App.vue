<template>
  <div>
    <ChildComponent message="안녕하세요"/>
    <ChildComponent v-bind.message="msMsg"/>
  </div>
</template>

<script setup>
import ChildComponent from '@/components/ChildComponent.vue';
</script>

<style scoped>

</style>