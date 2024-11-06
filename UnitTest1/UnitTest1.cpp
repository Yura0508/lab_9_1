#include "pch.h"
#include "CppUnitTest.h"
#include <math.h>
#include "../lab_9_1/lab_9_1.cpp"
#include "../lab_9_1/var.h"
#include "../lab_9_1/sum.h"
#include "../lab_9_1/dod.h"
#include "../lab_9_1/var.cpp"
#include "../lab_9_1/sum.cpp"
#include "../lab_9_1/dod.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        // Тест для функції sum
        TEST_METHOD(TestSum)
        {
            // Ініціалізація вхідних значень
            nsVar::xp = 0.0;
            nsVar::xk = 0.9;
            nsVar::dx = 0.1;
            nsVar::eps = 0.0000000001;
            nsVar::s = 0;
            nsVar::n = 0;

            // Викликаємо функцію sum
            nsSum::sum();

            // Очікувані результати (буде залежати від вашої програми)
            double expected_s = atan(-0.5) + 4 * atan(1.0) / 2;  // Це очікувана точність
            Assert::AreEqual(nsVar::s, expected_s, 1e-5); // Перевіряємо суму з точністю до 1e-5
        }

        

        // Тест для перевірки значення n
        TEST_METHOD(TestN)
        {
            nsVar::x = 0.5;
            nsVar::n = 0;
            nsVar::a = -nsVar::x;
            nsVar::s = 0;

            // Викликаємо функцію sum для перевірки лічильника n
            nsSum::sum();

            // Перевірка чи n змінюється коректно
            Assert::IsTrue(nsVar::n > 0);  // Перевіряємо, що n стало більше 0
        }
       
    };
}