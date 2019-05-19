class Interface
{
public:
	virtual void Fun() = 0;

	virtual ~Interface();
};

template <class T, class P>
Interface* MakeAdapter(const T& obj, const P& arg)
{
	class Local : public Interface
	{
	public:
		Local(const T& obj, const P& arg)
		:obj_(obj), arg_(arg)
		{

		}

		virtual void Fun()
		{
			obj_.Call(arg);
		}

		virtual ~Local(){}
	private:
		T obj_;
		P arg_;
	};

	return new Local(obj, arg);
}
