import { siteConfig } from "@/config/site";
import { buttonVariants } from "@/components/ui/button";

export default function IndexPage() {
  return (
    <section className="container grid justify-center gap-6 pb-8 pt-6 md:py-10">
      <div className="flex max-w-[980px] flex-col items-start gap-2">
        <h1 className="text-3xl font-extrabold leading-tight tracking-tighter md:text-4xl">
          테스트 페이지
        </h1>
        <p className="max-w-[700px] text-lg text-muted-foreground">
          <br />
          개발노트는 개발자가 되고자 하는 분들을 위해 학습 자료를 제공합니다.
          <br />
          <br />
          수강생들의 학습 목적 제작되었으며, 누구나 자유롭게 학습할 수 있습니다.
        </p>
      </div>
    </section>
  );
}