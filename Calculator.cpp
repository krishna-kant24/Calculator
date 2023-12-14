#include "Calculator.h"

#include<iostream>
#include<math.h>
#include<iomanip>
#include<sstream>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CalculatorProject::Calculator form;
	Application::Run(% form);
}


double CalculatorProject::Calculator::doDouble(String^ value) {
	try {
		return Convert::ToDouble(value);
	}
	catch (FormatException^) {
		lnum->Text = "Error!";
		numBox->Text = "Not valid";
	}
}

bool CalculatorProject::Calculator::isNegative(String^ value) {
	if (doDouble(value) < 0)
		return true;
	else
		return false;
}

bool CalculatorProject::Calculator::isDotEnabled(String^ value) {
	if (numBox->Text->Contains("."))
		return true;
	else
		return false;
}

bool CalculatorProject::Calculator::isNumValid(String^ value) {
	if (String::Equals(value, "") || Double::IsInfinity(doDouble(value)) || String::Equals(value, "-0"))
		return false;
	else
		return true;
}

String^ CalculatorProject::Calculator::formatResult(double num, int precision) {
	if (Double::IsInfinity(num))
		return gcnew String("Can't divide by 0");
	std::ostringstream oss;

	if (num == std::floor(num)) {
		oss << std::setprecision(0) << std::fixed << num;
	}
	else {
		oss << std::fixed << std::setprecision(precision) << num;
	}

	return gcnew String(oss.str().c_str());
}

System::Void CalculatorProject::Calculator::addBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isNumValid(numBox->Text)) {
		lnum->Text = numBox->Text + " + ";
		l_num = doDouble(numBox->Text);
		opBtn = 1;
		numBox->Text = "";
	}
	else
		return;
}

System::Void CalculatorProject::Calculator::subBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isNumValid(numBox->Text)) {
		lnum->Text = numBox->Text + " - ";
		l_num = doDouble(numBox->Text);
		opBtn = 2;
		numBox->Text = "";
	}
	else
		return;
}

System::Void CalculatorProject::Calculator::multBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isNumValid(numBox->Text)) {
		lnum->Text = numBox->Text + " × ";
		l_num = doDouble(numBox->Text);
		opBtn = 3;
		numBox->Text = "";
	}
	else
		return;
}

System::Void CalculatorProject::Calculator::divBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isNumValid(numBox->Text)) {
		lnum->Text = numBox->Text + " ÷ ";
		l_num = doDouble(numBox->Text);
		opBtn = 4;
		numBox->Text = "";
	}
	else
		return;
}

System::Void CalculatorProject::Calculator::sqrtBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isNumValid(numBox->Text)) {
		lnum->Text = "sqrt(" + numBox->Text + ") =";
		l_num = doDouble(numBox->Text);
		numBox->Text = formatResult(sqrt(l_num), precision);
	}
	else
		return;
}

System::Void CalculatorProject::Calculator::resultBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	r_num = doDouble(numBox->Text);
	double result{};
	String^ res_string;

	switch (opBtn)
	{
	case 1:
		result = l_num + r_num;
		lnum->Text = l_num + " + " + r_num + " =";
		break;
	case 2:
		result = l_num - r_num;
		lnum->Text = l_num + " - " + r_num + " =";
		break;
	case 3:
		result = l_num * r_num;
		lnum->Text = l_num + " × " + r_num + " =";
		break;
	case 4:
		result = l_num / r_num;
		lnum->Text = l_num + " ÷ " + r_num + " =";
		break;

	default:
		res_string = numBox->Text;
		break;
	}
	res_string = formatResult(result, precision);
	l_num = doDouble(res_string);
	numBox->Text = res_string;
	opBtn = 0;

}

System::Void CalculatorProject::Calculator::numBox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	numBox->SelectAll();
}

System::Void CalculatorProject::Calculator::zeroBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numBox->Text != "0")
		numBox->Text += "0";
}

System::Void CalculatorProject::Calculator::oneBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numBox->Text != "0")
		numBox->Text += "1";
	else
		numBox->Text = "1";
}

System::Void CalculatorProject::Calculator::twoBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numBox->Text != "0")
		numBox->Text += "2";
	else
		numBox->Text = "2";
}

System::Void CalculatorProject::Calculator::threeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numBox->Text != "0")
		numBox->Text += "3";
	else
		numBox->Text = "3";
}

System::Void CalculatorProject::Calculator::fourBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numBox->Text != "0")
		numBox->Text += "4";
	else
		numBox->Text = "4";
}

System::Void CalculatorProject::Calculator::fiveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numBox->Text != "0")
		numBox->Text += "5";
	else
		numBox->Text = "5";
}

System::Void CalculatorProject::Calculator::sixBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numBox->Text != "0")
		numBox->Text += "6";
	else
		numBox->Text = "6";
}

System::Void CalculatorProject::Calculator::sevenBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numBox->Text != "0")
		numBox->Text += "7";
	else
		numBox->Text = "7";
}

System::Void CalculatorProject::Calculator::eightBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numBox->Text != "0")
		numBox->Text += "8";
	else
		numBox->Text = "8";
}

System::Void CalculatorProject::Calculator::nineBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numBox->Text != "0")
		numBox->Text += "9";
	else
		numBox->Text = "9";
}

System::Void CalculatorProject::Calculator::clearBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	numBox->Text = "";
	lnum->Text = "";
	opBtn = 0;
	l_num = 0;
	r_num = 0;
}


System::Void CalculatorProject::Calculator::backSpaceBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numBox->Text != "")
		numBox->Text = numBox->Text->Remove(numBox->TextLength - 1);
}

System::Void CalculatorProject::Calculator::signBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isNumValid(numBox->Text)) {
		if (isNegative(numBox->Text))
			numBox->Text = numBox->Text->Remove(0, 1);
		else
			numBox->Text = "-" + numBox->Text;
	}
}

System::Void CalculatorProject::Calculator::dotBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isDotEnabled(numBox->Text) && isNumValid(numBox->Text))
		numBox->Text = numBox->Text + ".";
}