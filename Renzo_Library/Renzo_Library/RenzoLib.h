// RenzoLib
// 
// namespace renzo
#include <iterator>

#pragma once
namespace renzo
{
	size_t strlen(const char* str);
	
	/**
	 * my type string 
	 */
#pragma region MyString
	typedef class string
	{
		char* str_ = nullptr;
		size_t lenght_ = 0;
	public:

		string();

		string& operator=(const string& obj);
		
		string(const char* str);

		const char* c_str() const noexcept;

		~string();
	}string;

#pragma endregion


#pragma region MyStack
	/**
	 *  my class stack 
	 */
	template <typename T>
	class stack
	{
		static size_t size_;

		struct Node
		{
			T data;
			Node* pNext = nullptr;
		};
		// stack: Node* head;

		// Node: pNext . T data

		Node* head;

	public:
		
		stack();

		void push(const T& data);

		void push(T& data);

		size_t size() const;

		void pop();

		constexpr auto empty() -> bool;

		T top();

		// swap

		~stack();
	};

	template <typename T>
	size_t stack<T>::size_ = 0;

	template <typename T>
	stack<T>::~stack()
	{
		while (head)
		{
			this->pop();
		}
	}

	template <typename T>
	stack<T>::stack(): head(nullptr){}

	template <typename T>
	void stack<T>::push(const T& data)
	{
		auto now = static_cast<Node*> (malloc(sizeof Node));
		now->data = data;
		now->pNext = head;
		head = now;
		size_++;
	}

	template <typename T>
	void stack<T>::push(T& data)
	{
		auto now = static_cast<Node*> (malloc(sizeof Node));
		now->data = data;
		now->pNext = head;
		head = now;
		size_++;
	}

	template <typename T>
	size_t stack<T>::size() const
	{
		return this->size_;
	}

	template <typename T>
	void stack<T>::pop()
	{
		if(head!=nullptr)
		{
			Node* new_head = head->pNext;
			free(head);
			head = new_head;
			size_--;
		}
	}

	template <typename T>
	constexpr bool stack<T>::empty()
	{
		return 0 == size_;
	}

	template <typename T>
	T stack<T>::top()
	{
		return this->head->data;
	}
}
#pragma endregion