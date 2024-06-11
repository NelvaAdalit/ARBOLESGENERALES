#pragma once
#include "ArbolGeneral.h"

namespace ARBOLESGENERALES {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class GestionColegio : public System::Windows::Forms::Form
    {
    public:
        GestionColegio(void)
        {
            InitializeComponent();
        }

    protected:
        ~GestionColegio()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        ArbolGeneral^ Arbol = gcnew ArbolGeneral();
    private : System::Windows::Forms::TextBox^ TextRaiz;
    private: System::Windows::Forms::TextBox^ TextinsertR;

    private: System::Windows::Forms::TextBox^ TextPadre;
    private: System::Windows::Forms::TextBox^ TextHijo;
    private: System::Windows::Forms::Button^ InsertHijo;
    private: System::Windows::Forms::Button^ EliminarHijo;
    private: System::Windows::Forms::Button^ Pre_Orden;
    private: System::Windows::Forms::Button^ Entre_Orden;
    private: System::Windows::Forms::Button^ Post_Orden;
    private: System::Windows::Forms::TextBox^ TextOrden;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ labelRol;
    private: System::Windows::Forms::TextBox^ TextRol;
    private: System::Windows::Forms::Label^ labelEdad;
    private: System::Windows::Forms::TextBox^ TextEdad;
    private: System::Windows::Forms::Label^ labelGenero;
    private: System::Windows::Forms::TextBox^ TextGenero;
    private: System::Windows::Forms::Label^ labelDesc;
    private: System::Windows::Forms::TextBox^ TextDesc;
    private: System::Windows::Forms::Label^ labelResp;
    private: System::Windows::Forms::TextBox^ TextResp;
    private: System::Windows::Forms::Label^ label1;

           System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->TextinsertR = (gcnew System::Windows::Forms::TextBox());
               this->TextPadre = (gcnew System::Windows::Forms::TextBox());
               this->TextHijo = (gcnew System::Windows::Forms::TextBox());
               this->InsertHijo = (gcnew System::Windows::Forms::Button());
               this->EliminarHijo = (gcnew System::Windows::Forms::Button());
               this->Pre_Orden = (gcnew System::Windows::Forms::Button());
               this->Entre_Orden = (gcnew System::Windows::Forms::Button());
               this->Post_Orden = (gcnew System::Windows::Forms::Button());
               this->TextOrden = (gcnew System::Windows::Forms::TextBox());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->labelRol = (gcnew System::Windows::Forms::Label());
               this->TextRol = (gcnew System::Windows::Forms::TextBox());
               this->labelEdad = (gcnew System::Windows::Forms::Label());
               this->TextEdad = (gcnew System::Windows::Forms::TextBox());
               this->labelGenero = (gcnew System::Windows::Forms::Label());
               this->TextGenero = (gcnew System::Windows::Forms::TextBox());
               this->labelDesc = (gcnew System::Windows::Forms::Label());
               this->TextDesc = (gcnew System::Windows::Forms::TextBox());
               this->labelResp = (gcnew System::Windows::Forms::Label());
               this->TextResp = (gcnew System::Windows::Forms::TextBox());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->SuspendLayout();
               // 
               // TextinsertR
               // 
               this->TextinsertR->Location = System::Drawing::Point(447, 41);
               this->TextinsertR->Name = L"TextinsertR";
               this->TextinsertR->Size = System::Drawing::Size(120, 20);
               this->TextinsertR->TabIndex = 0;
               // 
               // TextPadre
               // 
               this->TextPadre->Location = System::Drawing::Point(154, 91);
               this->TextPadre->Name = L"TextPadre";
               this->TextPadre->Size = System::Drawing::Size(100, 20);
               this->TextPadre->TabIndex = 2;
               // 
               // TextHijo
               // 
               this->TextHijo->Location = System::Drawing::Point(387, 93);
               this->TextHijo->Name = L"TextHijo";
               this->TextHijo->Size = System::Drawing::Size(100, 20);
               this->TextHijo->TabIndex = 3;
               this->TextHijo->TextChanged += gcnew System::EventHandler(this, &GestionColegio::TextHijo_TextChanged);
               // 
               // InsertHijo
               // 
               this->InsertHijo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->InsertHijo->Location = System::Drawing::Point(12, 133);
               this->InsertHijo->Name = L"InsertHijo";
               this->InsertHijo->Size = System::Drawing::Size(206, 23);
               this->InsertHijo->TabIndex = 4;
               this->InsertHijo->Text = L"Insertar Hijo";
               this->InsertHijo->UseVisualStyleBackColor = true;
               this->InsertHijo->Click += gcnew System::EventHandler(this, &GestionColegio::InsertHijo_Click);
               // 
               // EliminarHijo
               // 
               this->EliminarHijo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->EliminarHijo->Location = System::Drawing::Point(239, 133);
               this->EliminarHijo->Name = L"EliminarHijo";
               this->EliminarHijo->Size = System::Drawing::Size(206, 23);
               this->EliminarHijo->TabIndex = 5;
               this->EliminarHijo->Text = L"Eliminar Hijo";
               this->EliminarHijo->UseVisualStyleBackColor = true;
               this->EliminarHijo->Click += gcnew System::EventHandler(this, &GestionColegio::EliminarHijo_Click);
               // 
               // Pre_Orden
               // 
               this->Pre_Orden->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->Pre_Orden->Location = System::Drawing::Point(12, 268);
               this->Pre_Orden->Name = L"Pre_Orden";
               this->Pre_Orden->Size = System::Drawing::Size(206, 23);
               this->Pre_Orden->TabIndex = 6;
               this->Pre_Orden->Text = L"Pre Orden";
               this->Pre_Orden->UseVisualStyleBackColor = true;
               this->Pre_Orden->Click += gcnew System::EventHandler(this, &GestionColegio::Pre_Orden_Click);
               // 
               // Entre_Orden
               // 
               this->Entre_Orden->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->Entre_Orden->Location = System::Drawing::Point(262, 268);
               this->Entre_Orden->Name = L"Entre_Orden";
               this->Entre_Orden->Size = System::Drawing::Size(206, 23);
               this->Entre_Orden->TabIndex = 7;
               this->Entre_Orden->Text = L"Entre Orden";
               this->Entre_Orden->UseVisualStyleBackColor = true;
               this->Entre_Orden->Click += gcnew System::EventHandler(this, &GestionColegio::Entre_Orden_Click);
               // 
               // Post_Orden
               // 
               this->Post_Orden->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->Post_Orden->Location = System::Drawing::Point(539, 270);
               this->Post_Orden->Name = L"Post_Orden";
               this->Post_Orden->Size = System::Drawing::Size(206, 23);
               this->Post_Orden->TabIndex = 8;
               this->Post_Orden->Text = L"Post Orden";
               this->Post_Orden->UseVisualStyleBackColor = true;
               this->Post_Orden->Click += gcnew System::EventHandler(this, &GestionColegio::Post_Orden_Click);
               // 
               // TextOrden
               // 
               this->TextOrden->Location = System::Drawing::Point(192, 318);
               this->TextOrden->Multiline = true;
               this->TextOrden->Name = L"TextOrden";
               this->TextOrden->Size = System::Drawing::Size(372, 86);
               this->TextOrden->TabIndex = 9;
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label2->Location = System::Drawing::Point(12, 91);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(127, 20);
               this->label2->TabIndex = 11;
               this->label2->Text = L"Insertar a Padre:";
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label3->Location = System::Drawing::Point(281, 91);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(100, 20);
               this->label3->TabIndex = 12;
               this->label3->Text = L"Nombre Hijo:";
               // 
               // labelRol
               // 
               this->labelRol->AutoSize = true;
               this->labelRol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->labelRol->Location = System::Drawing::Point(12, 199);
               this->labelRol->Name = L"labelRol";
               this->labelRol->Size = System::Drawing::Size(100, 20);
               this->labelRol->TabIndex = 13;
               this->labelRol->Text = L"Rol Persona:";
               // 
               // TextRol
               // 
               this->TextRol->Location = System::Drawing::Point(109, 196);
               this->TextRol->Name = L"TextRol";
               this->TextRol->Size = System::Drawing::Size(145, 20);
               this->TextRol->TabIndex = 14;
               // 
               // labelEdad
               // 
               this->labelEdad->AutoSize = true;
               this->labelEdad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->labelEdad->Location = System::Drawing::Point(290, 203);
               this->labelEdad->Name = L"labelEdad";
               this->labelEdad->Size = System::Drawing::Size(51, 20);
               this->labelEdad->TabIndex = 15;
               this->labelEdad->Text = L"Edad:";
               // 
               // TextEdad
               // 
               this->TextEdad->Location = System::Drawing::Point(349, 200);
               this->TextEdad->Name = L"TextEdad";
               this->TextEdad->Size = System::Drawing::Size(48, 20);
               this->TextEdad->TabIndex = 16;
               // 
               // labelGenero
               // 
               this->labelGenero->AutoSize = true;
               this->labelGenero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->labelGenero->Location = System::Drawing::Point(483, 207);
               this->labelGenero->Name = L"labelGenero";
               this->labelGenero->Size = System::Drawing::Size(67, 20);
               this->labelGenero->TabIndex = 17;
               this->labelGenero->Text = L"Genero:";
               // 
               // TextGenero
               // 
               this->TextGenero->Location = System::Drawing::Point(567, 207);
               this->TextGenero->Name = L"TextGenero";
               this->TextGenero->Size = System::Drawing::Size(65, 20);
               this->TextGenero->TabIndex = 18;
               // 
               // labelDesc
               // 
               this->labelDesc->AutoSize = true;
               this->labelDesc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->labelDesc->Location = System::Drawing::Point(493, 93);
               this->labelDesc->Name = L"labelDesc";
               this->labelDesc->Size = System::Drawing::Size(96, 20);
               this->labelDesc->TabIndex = 19;
               this->labelDesc->Text = L"Descripción:";
               // 
               // TextDesc
               // 
               this->TextDesc->Location = System::Drawing::Point(595, 91);
               this->TextDesc->Name = L"TextDesc";
               this->TextDesc->Size = System::Drawing::Size(206, 20);
               this->TextDesc->TabIndex = 20;
               // 
               // labelResp
               // 
               this->labelResp->AutoSize = true;
               this->labelResp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->labelResp->Location = System::Drawing::Point(470, 138);
               this->labelResp->Name = L"labelResp";
               this->labelResp->Size = System::Drawing::Size(107, 20);
               this->labelResp->TabIndex = 21;
               this->labelResp->Text = L"Responsable:";
               // 
               // TextResp
               // 
               this->TextResp->Location = System::Drawing::Point(583, 140);
               this->TextResp->Name = L"TextResp";
               this->TextResp->Size = System::Drawing::Size(206, 20);
               this->TextResp->TabIndex = 22;
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label1->Location = System::Drawing::Point(258, 20);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(198, 24);
               this->label1->TabIndex = 23;
               this->label1->Text = L"GESTION COLEGIO";
               this->label1->Click += gcnew System::EventHandler(this, &GestionColegio::label1_Click_1);
               // 
               // GestionColegio
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::SystemColors::ActiveCaption;
               this->ClientSize = System::Drawing::Size(800, 450);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->TextResp);
               this->Controls->Add(this->labelResp);
               this->Controls->Add(this->TextDesc);
               this->Controls->Add(this->labelDesc);
               this->Controls->Add(this->TextGenero);
               this->Controls->Add(this->labelGenero);
               this->Controls->Add(this->TextEdad);
               this->Controls->Add(this->labelEdad);
               this->Controls->Add(this->TextRol);
               this->Controls->Add(this->labelRol);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->TextOrden);
               this->Controls->Add(this->Post_Orden);
               this->Controls->Add(this->Entre_Orden);
               this->Controls->Add(this->Pre_Orden);
               this->Controls->Add(this->EliminarHijo);
               this->Controls->Add(this->InsertHijo);
               this->Controls->Add(this->TextHijo);
               this->Controls->Add(this->TextPadre);
               this->Name = L"GestionColegio";
               this->Text = L"GestionColegio";
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion
    private: System::Void InsertRaiz_Click(System::Object^ sender, System::EventArgs^ e) {
        // Logic to insert root node
    }
    private: System::Void InsertHijo_Click(System::Object^ sender, System::EventArgs^ e) {
        // Logic to insert child node
    }
    private: System::Void EliminarHijo_Click(System::Object^ sender, System::EventArgs^ e) {
        // Logic to delete child node
    }
    private: System::Void Pre_Orden_Click(System::Object^ sender, System::EventArgs^ e) {
        // Logic for pre-order traversal
    }
    private: System::Void Entre_Orden_Click(System::Object^ sender, System::EventArgs^ e) {
        // Logic for in-order traversal
    }
    private: System::Void Post_Orden_Click(System::Object^ sender, System::EventArgs^ e) {
        // Logic for post-order traversal
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextHijo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}



