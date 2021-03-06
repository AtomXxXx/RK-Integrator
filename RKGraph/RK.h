#pragma once

#include <stdio.h>
#include <ctype.h>
#include <math.h>

enum TokenType;
struct Token;

//Use this when you need to calculate repeatedly
double RKFirstOrder(Token postfix[], int numTokens, double x0, double y0, double h);

//Slightly slower, same accuracy/precision
double RKFirstOrder(char infix[], double x0, double y0, double h);

//Returns the number of Tokens in postfix
int ConvertToPostfix(char *infix, Token *postfix);

struct StackChar
{
	char s[1000];
	int top;
	StackChar()
	{
		top = -1;
	}
	void push(char element)
	{
		s[++top] = element;
	} 
	int pop()
	{
		return s[top--];
	}
	char operator[](int n)
	{
		return s[n];
	}
};


enum TokenType
{
	Number,
	Operator,
	X,
	Y,
	Z,
	Invalid
};

struct Token
{
	double token;
	TokenType type;
};

int precedence(char element)
{
	switch (element)
	{
	case '#':
		return 0;
	case '(':
		return 1;
	case '+':
	case '-':
		return 2;
	case '*':
	case '/':
		return 3;
	case '^':
		return 4;
	}
}

double GetNumber(char* infix, int& i)
{
	int stack[50];
	int top = -1;
	char ch;
	bool decimal = false;
	while (true)
	{
		ch = infix[i++];
		if (isdigit(ch))
		{
			stack[++top] = ch - '0';
		}
		else if (ch == '.')
		{
			decimal = true;
			break;
		}
		else
		{
			break;
		}
	}
	double sum = 0;
	int power = 0;
	while (top != -1)
	{
		sum = sum + stack[top--] * powf(10, power);
		power++;
	}
	power = 1;
	if (decimal)
	{
		while (true)
		{
			ch = infix[i++];
			if (isdigit(ch))
			{
				int num = ch - '0';
				sum = sum + num * (1 / pow(10.0, power++));
			}
			else
			{
				break;
			}
		}
	}
	return sum;
}

int ConvertToPostfix(char *infix, Token *postfix)
{
	StackChar s;
	char ch, element;
	int i = 0, k = 0;
	s.push('#');
	while ((ch = infix[i++]) != '\0')
	{
		if (ch == ' ');
		else if (ch == '(')
			s.push(ch);
		else if (isalnum(ch))
		{
			if (isdigit(ch))
			{
				//Parse digits into numbers
				int j = i - 1;
				double num = GetNumber(infix, j);
				i = j - 1;
				postfix[k].token = num;
				postfix[k].type = TokenType::Number;
				k++;
			}
			else if (ch == 'x' || ch == 'X')
			{
				postfix[k].token = 'X';
				postfix[k].type = TokenType::X;
				k++;
			}
			else if (ch == 'y' || ch == 'Y')
			{
				if (infix[i] == 39 || infix[i] == 96)
				{
					i++;
					postfix[k].token = 'Z';
					postfix[k].type = TokenType::Z;
					k++;
				}
				else
				{
					postfix[k].token = 'Y';
					postfix[k].type = TokenType::Y;
					k++;
				}
			}
			else if (ch == 'z' || ch == 'Z')
			{
				postfix[k].token = 'Z';
				postfix[k].type = TokenType::Z;
				k++;
			}
		}
		else if (ch == ')')
		{
			while (s[s.top] != '(')
			{
				postfix[k].token = s.pop();
				postfix[k].type = TokenType::Operator;
				k++;
			}
			element = s.pop();
		}
		else
		{
			while (precedence(s[s.top]) >= precedence(ch))
			{
				postfix[k].token = s.pop();
				postfix[k].type = TokenType::Operator;
				k++;
			}
			s.push(ch);
		}
	}
	while (s[s.top] != '#')
	{
		postfix[k].token = s.pop();
		postfix[k].type = TokenType::Operator;
		k++;
	}
	return k;
}

double EvaluatePostfixExpression(Token *postfix, int n, double x, double y, double z)
{
	double stack[50];
	int top = -1;

	for (int i = 0; i < n; i++)
	{
		if (postfix[i].type == TokenType::Number)
		{
			stack[++top] = postfix[i].token;
		}
		else if (postfix[i].type == TokenType::X)
		{
			stack[++top] = x;
		}
		else if (postfix[i].type == TokenType::Y)
		{
			stack[++top] = y;
		}
		else if (postfix[i].type == TokenType::Z)
		{
			stack[++top] = z;
		}
		else
		{
			double operand2 = stack[top--];
			double operand1 = stack[top--];
			char op = (char)postfix[i].token;
			switch (op)
			{
			case '+':
				stack[++top] = operand1 + operand2;
				break;
			case '-':
				stack[++top] = operand1 - operand2;
				break;
			case '*':
				stack[++top] = operand1 * operand2;
				break;
			case '/':
				stack[++top] = operand1 / operand2;
				break;
			case '^':
				stack[++top] = powf(operand1, operand2);
				break;
			}
		}
	}
	return stack[top];
}

double RKFirstOrder(Token postfix[], int numTokens, double x0, double y0, double h)
{
	double k1 = h * EvaluatePostfixExpression(postfix, numTokens, x0, y0, 0);
	double k2 = h * EvaluatePostfixExpression(postfix, numTokens, x0 + h / 2, y0 + k1 / 2, 0);
	double k3 = h * EvaluatePostfixExpression(postfix, numTokens, x0 + h / 2, y0 + k2 / 2, 0);
	double k4 = h * EvaluatePostfixExpression(postfix, numTokens, x0 + h, y0 + k3, 0);

	double result = y0 + (1 / 6.0) * (k1 + 2 * k2 + 2 * k3 + k4);

	return result;
}

double RKFirstOrder(char infix[], double x0, double y0, double h)
{
	Token postfix[1000];
	int n = ConvertToPostfix(infix, postfix);

	return RKFirstOrder(postfix, n, x0, y0, h);
}

void RKSimultaneousFirstOrder(Token dydx[], Token dzdx[],int numDydx, int numDzdx, double x0, double y0, double z0, double h, double* yRes, double* zRes)
{
	double k1 = h * EvaluatePostfixExpression(dydx,numDydx, x0, y0, z0);
	double l1 = h * EvaluatePostfixExpression(dzdx, numDzdx, x0, y0, z0);

	double k2 = h * EvaluatePostfixExpression(dydx, numDydx, x0 + h / 2.0, y0 + k1 / 2.0, z0 + l1 / 2.0);
	double l2 = h * EvaluatePostfixExpression(dzdx, numDzdx, x0 + h / 2.0, y0 + k1 / 2.0, z0 + l1 / 2.0);

	double k3 = h * EvaluatePostfixExpression(dydx, numDydx, x0 + h / 2.0, y0 + k2 / 2.0, z0 + l2 / 2.0);
	double l3 = h * EvaluatePostfixExpression(dzdx, numDzdx, x0 + h / 2.0, y0 + k2 / 2.0, z0 + l2 / 2.0);

	double k4 = h * EvaluatePostfixExpression(dydx, numDydx, x0 + h, y0 + k3, z0 + l3);
	double l4 = h * EvaluatePostfixExpression(dzdx, numDzdx, x0 + h, y0 + k3, z0 + l3);

	*yRes = y0 + (1 / 6.0) * (k1 + 2 * k2 + 2 * k3 + k4);
	*zRes = z0 + (1 / 6.0) * (l1 + 2 * l2 + 2 * l3 + l4);
}

void RKSimultaneousFirstOrder(char dydx[], char dzdx[], double x0, double y0, double z0, double h, double* yRes, double* zRes)
{
	Token dydxP[1000], dzdxP[1000];
	int numDydx = ConvertToPostfix(dydx, dydxP);
	int numDzdx = ConvertToPostfix(dzdx, dzdxP);

	RKSimultaneousFirstOrder(dydxP, dzdxP, numDydx, numDzdx, x0, y0, z0, h, yRes, zRes);
}

void RKSecondOrder(char infix[], double x0, double y0, double y1_0, double h, double* yRes, double* y1Res)
{
	Token dydx[1], dzdx[1000];
	dydx[0].type = TokenType::Z;
	dydx[0].token = 'Z';

	int numDzdx = ConvertToPostfix(infix, dzdx);

	RKSimultaneousFirstOrder(dydx, dzdx, 1, numDzdx, x0, y0, y1_0, h, yRes, y1Res);
}

