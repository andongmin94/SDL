import axios from 'axios'

// 기본 URL
const BASE_URL = import.meta.env.VITE_API_URL

// 1. 기본 출처 설정
const api = axios.create({
    baseURL: BASE_URL,
    withCredentials: true, // 로그인 관련 인증 정보를 보내야하는 경우
});

// axios 처리에서 전달하는 정보가 JSON 정보이다... 헤더를 설정해줘야한다...
api.defaults.headers.common['Content-Type'] = 'application/json'


export default api;