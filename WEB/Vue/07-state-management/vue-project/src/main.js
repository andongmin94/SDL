import { createApp } from 'vue'
import { createPinia } from 'pinia'
import App from './App.vue'
import piniaPluginPersistedState from 'pinia-plugin-persistedState'

const app = createApp(App)
const pinia = createPinia()

pinia.use(piniaPluginPersistedState)

// app.use(createPinia())
app.use(pinia)

app.mount('#app')
