import { createRouter, createWebHashHistory } from "vue-router";

const router = createRouter({
  history: createWebHashHistory(),
  routes: [
    {
      path: "/",
      name: "home",
      component: () => import("@/views/HomeView.vue"),
    },
    {
      path: "/about",
      name: "about",
      component: () => import("@/views/AboutView.vue"),
    },
    {
      path: "/admin",
      name: "admin",
      component: () => import("@/views/AdminView.vue"),
    },
    {
      path: "/user/:id",
      name: "user",
      component: () => import("@/views/UserProfile.vue"),
    },
  ],
});

const isAdmin = () => true;
const isLoggedIn = () => true;

router.beforeEach((to, from) => {
  if (to.name === "profile" && !isLoggedIn()) {
    return { name: "about" };
  } else if (to.name === "admin" && !isAdmin()) {
    return false;
  }
});

router.beforeResolve((to, from) => {});

router.afterEach((to, from) => {});

export default router;
