<template>
  <div>
    <h1>게시글 작성</h1>
    <form @submit.prevent="createArticle">
      <label for="title">제목 : </label>
      <input type="text" id="title" v-model="title" />
      <p></p>
      <label for="content">내용 : </label>
      <textarea id="content" v-model="content"></textarea>
      <input type="submit" value="작성">
    </form>
  </div>
</template>

<script setup>
import { ref } from 'vue'
import axios from 'axios'
import { useCounterStore } from '@/stores/counter'
import { useRouter } from 'vue-router';

const store = useCounterStore()
const router = useRouter()

const title = ref(null)
const content = ref(null)

const createArticle = ()=>{
  axios({
    method:'post',
    url: `${store.API_URL}/api/v1/articles/`,
    data: {
      title: title.value,
      content: content.value
    }
  })
  .then(()=>{
    router.push({name:'ArticleView'})
  })
  .catch((err)=>{
    console.log(err)
  })
}
</script>

<style>

</style>
