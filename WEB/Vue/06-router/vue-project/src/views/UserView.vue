<template>
    <div>
        <h1>UserView</h1>
        <h2>{{ userId }}번 User페이지</h2>
        <button @click="goHome">홈으로</button>
    </div>
</template>

<script setup>
import { ref } from 'vue'
import { useRoute, useRouter } from 'vue-router'

const route = useRoute()
const router = useRouter()
const userId = ref(route.params.id)
const goHome = () => {
    router.push({ name: 'home'})
}
</script>

<style scoped>

</style>