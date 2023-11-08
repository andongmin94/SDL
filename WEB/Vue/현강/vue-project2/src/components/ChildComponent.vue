<template>
    <div>
        {{  message }}
    </div>
</template>

<script setup>
defineProps({
    message:String
})

defineProps(['message'])
</script>

<style lang="scss" scoped>

</style>