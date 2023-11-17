import { ref, computed } from 'vue'
import { defineStore } from 'pinia'
import axios from 'axios'

export const useCounterStore = defineStore('counter', () => {
  const articles = ref([])
  const API_URL = 'http://127.0.0.1:8000'

  // DRF에 article 조회 요청을 보내는 action
  const getArticles = function () {
    axios({
      method: 'get',
      url: `${API_URL}/api/v1/articles/`
    })
      .then((res) =>{
        // console.log(res)
        articles.value = res.data
      })
      .catch((err) => {
        console.log(err)
      })
  }

  const signUp = (payload) => {
    const { username, password, password2 } = payload

    axios({
      method:'post',
      url: `${API_URL}/accounts/signup/`,
      data: {
        username,
        password,
        password2
      }
    })
    .then((res) => {
      console.log(res)
      console.log('회원가입 성공')
    })
    .catch((err) => {
      console.log(err)
    })
  }

  return { articles, API_URL, getArticles, signUp }
}, { persist: true })
