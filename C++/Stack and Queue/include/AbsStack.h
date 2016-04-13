template <class Object>
class AbsStack{
public:
	AbsStack() {}
	virtual ~AbsStack(){}
	
	//Basic members:
	virtual void push( const Object &x ) = 0;
	virtual Object pop() = 0;
	virtual Object top() const = 0;

	virtual bool isEmpty() const = 0;
	virtual void makeEmpty() = 0;

private:
	AbsStack( const AbsStack & ) {} //Disable copy constructor
};