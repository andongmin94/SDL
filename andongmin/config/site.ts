export type SiteConfig = typeof siteConfig;

export const siteConfig = {
  name: "안동민 개발노트",
  description: "안동민의 개발노트입니다.",
  infoNav: [
    { title: "Home", href: "/" },
    { title: "Blog", href: "/blog" },
    { title: "About", href: "/about" },
  ],
  devNav: [
    { title: "BOJ", href: "/boj" },
    { title: "C++", href: "/cpp" },
    { title: "Unreal", href: "/unreal" },
    { title: "React", href: "/react" },
    { title: "Next.js", href: "/next" },
    { title: "Verse", href: "/verse" },
  ],
  links: {
    twitter: "https://twitter.com/andongmin94",
    github: "https://github.com/andongmin94",
    docs: "https://www.andongmin.com/",
  },
};
