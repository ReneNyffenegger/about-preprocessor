#define call(func, arg, cond) if (cond) { func(arg); }
#define COMMA ,

call(printf, "foo bar baz\n", true)
call(printf, "a = %d, b=%s\n" COMMA a COMMA b, get_flag("a" COMMA "b"))
call(printf, "d = %d, s=%s\n" COMMA (a+b)*2 COMMA get_val(1 COMMA 2), get_flag("a" COMMA "b") )
