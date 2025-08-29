# DS-Project-Encryption-Decryption-using-Huffman-Code
# Encryption & Decryption using Huffman Coding

This project implements **file compression and decompression using Huffman Coding** in C++ with a simple GUI built in Visual Studio.  
It demonstrates concepts of **data structures**, **object-oriented programming (OOP)**, and **lossless data compression**.

---

## 📌 Features
- Encrypt and decrypt text files using Huffman Coding  
- File compression and decompression  
- GUI-based file explorer to select files  
- Built with **C++** and **Visual Studio**  

---

## 🎨 Demo
![GUI Screenshot](screenshot.png)  
*(Basic GUI built using Visual Studio)*

---

## 🚀 Usage

Launch the program

Click Open File Explorer

Select any .txt file

The program will:

Read the file

Generate Huffman codes

Encode and compress the data

Decode the compressed file back to the original text

##🔎 Workflow

The implementation follows these steps:

Open a text file using the GUI

Read file contents into a string

Count the frequency of each character

Store characters and frequencies in a vector

Build a priority queue and create a Huffman Tree

Traverse the tree to generate binary Huffman codes for each character

Encode the text into compressed form using bitset

Save the encoded data into a file

Decode the data by matching codes with characters

Save the decoded text back into a file

## 🛠️ Technologies Used

Language: C++

IDE: Visual Studio

GUI: Windows Forms (C++)

Data Structures: Vectors, Lists, Priority Queue, Binary Tree
