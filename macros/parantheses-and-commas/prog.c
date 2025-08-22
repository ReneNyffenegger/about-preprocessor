#define call(func, arg) func(arg);
#define COMMA ,

call(printf, "foo bar baz\n")
call(printf, "a = %d, b=%s\n" COMMA a COMMA b)
call(printf, "d = %d, s=%s\n" COMMA (a+b)*2 COMMA get_val(1 COMMA 2) )
