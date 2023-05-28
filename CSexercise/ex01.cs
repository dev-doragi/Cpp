// 솔루션 탐색기에서 실행할 파일의 솔루션을 시작 프로젝트로 설정하면 오류 안뜸.
// C#에서 상속할 때, 함수 오버라이드를 할 경우 부모 클래스에는 virtual, 자식에는 override 한정자를 붙임.
using System;

namespace CSexercise
{
    public class Animal
    {
        public int legs;
        public string name;
        public Animal(int legs, string name)
        {
            this.legs = legs;
            this.name = name;
        }

        public virtual void PrintInfo()
        {
            Console.WriteLine("다리: {0}, 이름: {1}", legs, name);
        }
    }

    public class Human : Animal
    {
        public string regist_no;

        public Human(string regist_no) : base(2, "사람")
        {
            this.regist_no = regist_no;
        }

        public override void PrintInfo()
        {
            Console.WriteLine("이름: {0} 주민번호: {1}", name, regist_no);
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Animal anim01 = new Human("1234-5678");
            Animal anim02 = new Animal(2, "닭");

            anim01.PrintInfo();
            anim02.PrintInfo();
        }
    }
}