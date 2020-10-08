#include "stdafx.h"
#include "CppUnitTest.h"
#include"../priority queue/PriorityQueue.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(isEmpty)
		{
			PriorityQueue<int> pq;
			Assert::IsTrue(pq.isEmpty());
			pq.push(1, 3);
			Assert::IsFalse(pq.isEmpty());
		}
		TEST_METHOD(Push)
		{
			PriorityQueue<int> pq;
			pq.push(2, 34);
			pq.push(1, 56);
			pq.push(4, 23);
			Assert::AreEqual(pq.front(), 23);
		}
		TEST_METHOD(Pop)
		{
			PriorityQueue<int> pq;
			pq.push(2, 34);
			pq.push(1, 56);
			pq.push(4, 23);
			pq.push(2, 22);
			pq.push(2, 45);
			pq.pop();
		
			Assert::AreEqual(pq.front(), 34);
		}
		TEST_METHOD(Size)
		{
			PriorityQueue<int> pq;
			pq.push(2, 34);
			pq.push(1, 56);
			pq.push(4, 23);
			Assert::AreEqual(pq.size(), 3);
		}
	};
	
}