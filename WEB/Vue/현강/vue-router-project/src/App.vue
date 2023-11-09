<template>
  <div>
    <!-- RouterLink -->
    <!-- 페이지 간의 링크를 생성 -->
    <RouterLink :to="{ name:'home' }">Home</RouterLink> | 
    <RouterLink :to="{ name:'about' }">About</RouterLink> | 
    <RouterLink :to="{ name:'admin' }">Admin</RouterLink> | 
    <RouterLink :to="{ name:'user', params:{id:1}}">user1</RouterLink> | 
    <RouterLink :to="{ name:'user', params:{id:2}}">user2</RouterLink>
    
    <!-- RouterView -->
    <!-- 현재 경로에 따라서 동적으로 컴포넌트를 렌더링 -->
    <RouterView />
  </div>
</template>

<script setup>

</script>

<style scoped>

</style>