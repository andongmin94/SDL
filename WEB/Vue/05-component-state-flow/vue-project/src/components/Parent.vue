<template>
    <div>
      <ParentChild @update-name="updateName" @some-event="someCallback" @emit-args="getNumbers" my-msg="message" :dynamic-props="name" />
    </div>
  </template>
  
<script setup>
import { ref } from 'vue'
import ParentChild from'@/components/ParentChild.vue'

const name = ref('Alice')
const someCallback = () => {
  console.log('ParentChild가 발신한 이벤트를 수신했어요.')
}
const getNumbers = (...args) => {
  console.log(args)
}

const updateName = () => {
    name.value = 'Bob'
}
</script>

<style scoped>

</style>