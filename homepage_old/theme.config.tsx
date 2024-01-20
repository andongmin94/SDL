import React from "react";
import { DocsThemeConfig } from "nextra-theme-docs";

const config: DocsThemeConfig = {
  useNextSeoProps() {
    return {
      titleTemplate: "%s",
    };
  },
  head: <link rel="icon" href="profile.png" />,
  logo: (
    <>
      <img
        src="logo.png"
        alt="profile"
        style={{height: "32px"}}
      />
    </>
  ),
  sidebar: {
    defaultMenuCollapseLevel: 1,
    toggleButton: true,
  },
  search: {
    placeholder: "학습자료 검색",
  },
  project: {
    link: "https://github.com/andongmin94",
  },
  chat: {
    link: "https://twitter.com/andongmin94",
    icon: (
      <img
        src="sns/twitter.svg"
        alt="twitter"
        style={{ width: "1.5em", height: "1.5em", marginRight: ".5em" }}
      />
    ),
  },
  toc: {
    title: "목차",
    backToTop: true,
  },
  docsRepositoryBase: "https://github.com/andongmin94/andongmin/edit/main/",
  feedback: {
    content: null,
  },
  editLink: {
    text: "이 문서 수정하기",
  },
  footer: {
    text: "copyright ⓒ 2023 andongmin. all rights reserved.",
  },
};

export default config;
