#pragma once

namespace JSArray {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class gui : public System::Windows::Forms::Form
	{
	public:
		gui(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~gui()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		System::Windows::Forms::ListView^ array_elements_listview;
		System::Windows::Forms::Button^ delete_array_element_btn;
		System::Windows::Forms::Button^ exit_app_btn;
		System::Windows::Forms::Button^ create_array_btn;
		System::Windows::Forms::RichTextBox^ array_element_input;
		System::Windows::Forms::RichTextBox^ created_array_output;
		System::Windows::Forms::Button^ copy_array_btn;
		System::Windows::Forms::Button^ add_array_element_btn;
		System::Windows::Forms::ColumnHeader^ array_element_col_header;
		System::Windows::Forms::ListViewItem^ new_list_view_element;
		System::Windows::Forms::Label^ element_type_lbl;
		System::Windows::Forms::ComboBox^ element_type_comboBox;
		System::Windows::Forms::CheckBox^ wrap_in_single_quotes_checkbox;
		System::Windows::Forms::Button^ clear_created_array_output_btn;
		System::Windows::Forms::Button^ clear_all_btn;
		System::Windows::Forms::CheckBox^ make_array_object_checkbox;

		System::String^ open_quote = "'";
		System::String^ end_quote = "'";
		System::String^ open_double_quote = L"\"";
		System::String^ end_double_quote = L"\"";
		System::String^ element_delimeter = L",";
		System::String^ element_input_text = nullptr;
		System::String^ ARRAY_ELEMENT_INPUT_HINT = L"Enter an element...";
		System::String^ CREATED_ARRAY_OUTPUT_ARRAY_LITERAL_HINT = L"var <array_name> = [\"item1\", \"item2\", ...];";
		System::String^ CREATED_ARRAY_OUTPUT_ARRAY_OBJECT_HINT = L"var <array_name> = new Array(\"item1\", \"item2\", ...);";
		System::String^ CREATED_ARRAY_OUTPUT_ARRAY_LITERAL_HINT_SINGLE = L"var <array_name> = ['item1', 'item2', ...];";
		System::String^ CREATED_ARRAY_OUTPUT_ARRAY_OBJECT_HINT_SINGLE = L"var <array_name> = new Array('item1', 'item2', ...);";
		System::String^ EMPTY_ARRAY_LITERAL = L"var <array_name> = [];";
		System::String^ EMPTY_ARRAY_OBJECT = L"var <array_name> = new Array();";
		System::String^ full_element_string = nullptr;
		System::String^ full_array_string = nullptr;

		// Flag to signal if the element or elements should be wrapped in single or double quotes.
		bool wrap_elements_with_single_quotes = false;
		// Flag to signal if the element being created is a string type element or not.
		bool use_quotation_marks = true;
		// Flag to signal if an empty array should be created or not.
		bool create_empty_array = false;
		// Flag to signal if the array has been created or not.
		bool array_is_created = false;
		// Flag to signal wether or not an array literal or an array object using the constructor should be made.
		bool use_array_object = false;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);
#pragma endregion

		void ScaleControls(Control^ control, float scaleFactor);

		void onGUILoad(System::Object^ sender, System::EventArgs^ e);
		void onGUIShown(System::Object^ sender, System::EventArgs^ e);

		void onDeleteElementBtnClick(System::Object^ sender, System::EventArgs^ e);

		void onAddElementBtnClick(System::Object^ sender, System::EventArgs^ e);

		void onExitAppBtnClick(System::Object^ sender, System::EventArgs^ e);

		void onCreateArrayBtnClick(System::Object^ sender, System::EventArgs^ e);

		void onCopyCreatedArrayBtnClick(System::Object^ sender, System::EventArgs^ e);

		void onClearCreatedArrayOutputBtnClick(System::Object^ sender, System::EventArgs^ e);

		void onClearAllClick(System::Object^ sender, System::EventArgs^ e);

		void onElementInputTextChanged(System::Object^ sender, System::EventArgs^ e);

		void onCreatedArrayOutputTextChanged(System::Object^ sender, System::EventArgs^ e);

		void onArrayElementInputClick(System::Object^ sender, System::EventArgs^ e);

		void wrapInSingleQuotesCheckedChanged(System::Object^ sender, System::EventArgs^ e);

		void onUseArrayConstructorCheckedChanged(System::Object^ sender, System::EventArgs^ e);

		void array_elements_listview_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

		void onElementTypeIndexChanged(System::Object^ sender, System::EventArgs^ e);


	};
}
