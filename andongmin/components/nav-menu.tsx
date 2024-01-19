"use client";

import * as React from "react";
import Link from "next/link";

import { cn } from "@/lib/utils";
import { Icons } from "@/components/icons";
import {
  NavigationMenu,
  NavigationMenuContent,
  NavigationMenuItem,
  NavigationMenuLink,
  NavigationMenuList,
  NavigationMenuTrigger,
  navigationMenuTriggerStyle,
} from "@/components/ui/navigation-menu";

const items: { title: string; href: string; description: string }[] = [
  {
    title: "BOJ",
    href: "/boj",
    description: "백준 온라인 저지 문제풀이",
  },
  {
    title: "C++",
    href: "cpp",
    description: "C++ 문법 및 학습 자료",
  },
  {
    title: "Unreal Engine",
    href: "/unreal",
    description: "언리얼 엔진 학습 자료",
  },
  {
    title: "React",
    href: "/react",
    description: "React 학습 자료",
  },
  {
    title: "Next.js",
    href: "/next",
    description: "Next.js 학습 자료",
  },
  {
    title: "Verse",
    href: "/verse",
    description: "Verse 학습 자료",
  },
];

export function HeadNavigationMenu() {
  return (
    <NavigationMenu>
      <NavigationMenuList>
        <NavigationMenuItem>
          <NavigationMenuTrigger>학습 자료</NavigationMenuTrigger>
          <NavigationMenuContent>
            <NavigationMenuLink asChild>
              <Link
                className="flex flex-col rounded-md bg-gradient-to-b from-muted/50 to-muted p-6 no-underline outline-none focus:shadow-md"
                href="/"
              >
                <Icons.logo />
                <br />
                <div className="mb-2 mt-4 text-lg font-medium">
                  &nbsp;개발자가 되고자 하는 분들을 위해 학습 자료를 제공합니다.
                  <br />
                  <br />
                  &nbsp;누구나 자유롭게 학습할 수 있습니다.
                </div>
              </Link>
            </NavigationMenuLink>
            <ul className="grid w-[400px] gap-3 p-4 md:w-[500px] md:grid-cols-2 lg:w-[600px] ">
              {items.map((item) => (
                <ListItem key={item.title} title={item.title} href={item.href}>
                  {item.description}
                </ListItem>
              ))}
            </ul>
          </NavigationMenuContent>
        </NavigationMenuItem>
        <NavigationMenuItem>
          <NavigationMenuTrigger>동영상 강좌</NavigationMenuTrigger>
          <NavigationMenuContent>
            <ul className="grid gap-3 p-6 md:w-[400px] lg:w-[500px] lg:grid-cols-[.75fr_1fr]">
              <ListItem
                href="https://www.youtube.com/@andongmin"
                title="Youtube"
              >
                안동민의 유튜브 채널입니다.
              </ListItem>
              <ListItem
                href="https://www.inflearn.com/users/1040964/@andongmin"
                title="Inflearn"
              >
                안동민의 인프런 채널입니다.
              </ListItem>
            </ul>
          </NavigationMenuContent>
        </NavigationMenuItem>
        <NavigationMenuItem>
          <Link href="/about" legacyBehavior passHref>
            <NavigationMenuLink className={navigationMenuTriggerStyle()}>
              소개
            </NavigationMenuLink>
          </Link>
        </NavigationMenuItem>
        <NavigationMenuItem>
          <Link href="/posts" legacyBehavior passHref>
            <NavigationMenuLink className={navigationMenuTriggerStyle()}>
              자유롭게 쓰는 글
            </NavigationMenuLink>
          </Link>
        </NavigationMenuItem>
      </NavigationMenuList>
    </NavigationMenu>
  );
}

const ListItem = React.forwardRef<
  React.ElementRef<"a">,
  React.ComponentPropsWithoutRef<"a">
>(({ className, title, children, ...props }, ref) => {
  return (
    <li>
      <NavigationMenuLink asChild>
        <Link
          href={props.href || ""}
          className={cn(
            "block select-none space-y-1 rounded-md p-3 leading-none no-underline outline-none transition-colors hover:bg-accent hover:text-accent-foreground focus:bg-accent focus:text-accent-foreground",
            className
          )}
          {...props}
        >
          <div className="text-sm font-medium leading-none">{title}</div>
          <p className="line-clamp-2 text-sm leading-snug text-muted-foreground">
            {children}
          </p>
        </Link>
      </NavigationMenuLink>
    </li>
  );
});
ListItem.displayName = "ListItem";
