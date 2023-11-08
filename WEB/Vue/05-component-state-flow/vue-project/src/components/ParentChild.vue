<template>
    <div>
        <p>{{ myMsg }}</p>
        <ParentGrandChild :my-msg="myMsg" />
        <p>{{ dynamicProps }}</p>
        <button @click="buttonClick">클릭</button>
        <button @click="emitArgs">클릭</button>
    </div>
</template>

<script setup>
import ParentGrandChild from'@/components/ParentGrandChild.vue'
defineProps({
    myMsg: String,
    dynamicProps: String,
})

const emit = defineEmits(['someEvent', 'emitArgs'])

const buttonClick = () => {
    emit('someEvent')
}

const emitArgs = () => {
    emit('emitArgs', 1, 2, 3)
}

<style scoped>

</style>