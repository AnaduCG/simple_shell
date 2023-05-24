#include "main.h"
/**
 *exec_err_msg - a funtion that displays meaningful
 *		command execution error message
 *@_argv: array of command strings to be used for
 *	error display
 *@sc: seccion count for displaying meaningful
 *	error message
 * @e_ex: the program executable for proper error
 *	message display
 *
 */
void exec_err_msg(char **_argv, char *e_ex, int sc)
{
	_print_str(e_ex);
	_print_str(": ");
	_print_int(sc);
	_print_str(": ");
	_print_str(_argv[0]);
	_print_str(EXEC_ERR);
}
/**
 *exit_err_msg - a funtion that displays meaningful
 *		exit error message on error
 *@_argv: array of command strings to be used for
 *	error display
 *@sc: seccion count for displaying meaningful
 *	error message
 *@e_ex: the program executable for proper error
 *	message display
 *
 */
void exit_err_msg(char **_argv, char *e_ex, int sc)
{
	_print_str(e_ex);
	_print_str(": ");
	_print_int(sc);
	_print_str(EXIT_ERROR);
	_print_str(_argv[1]);
	_putchar('\n');
}
/**
 *setenv_usage_err_msg - a funtion that displays meaningful
 *			error on "setenv" command usage
 *@e_ex: the program executable for proper error
 *	message display
 *
 */
void setenv_usage_err_msg(__attribute__((unused)) char *e_ex)
{
	_print_str("Usage: setenv <VARIABLE> <VALUE>\n");
}
/**
 *unsetenv_usage_err_msg - a funtion that displays meaningful
 *			error on "unsetenv" command usage
 *@e_ex: the program executable for proper error
 *	message display
 */
void unsetenv_usage_err_msg(__attribute__((unused)) char *e_ex)
{
	_print_str("Usage: unsetenv <VARIABLE>\n");
}
/**
 *and_or_err - a funtion that displays meaningful
 *		error for "&&" and "||" commands
 *@e_ex: the program executable for proper error
 *	message display
 *@ao: a paramerter that holds the "&&" or "||"
 *	sign for proper meaningful error display
 *@sc: session count for proper error display
 *Return: returns 2
 */
int and_or_err(char *e_ex, char *ao, int sc)
{
	_print_str(e_ex);
	_print_str(": ");
	_print_int(sc);
	_print_str(LOGIC_ERROR);
	_print_str(ao);
	_print_str(LOGIC_ERRND);
	return (2);
}
