#include <iostream>
#include <fstream>
#include "webpage.h"

using namespace std;
void create_header(ifstream &a, ofstream &b)
{
char temp[256];
a.getline(temp,256);
b << "<html>" << endl;
b<< "<head>" ;
b<<"<title>"<<temp<<"</title>";
b<<"</head>";
}
void create_body(ifstream &a, ofstream &b)
{
char temp[256];
a>>(temp,256);
b<<"<body bgcolor="<<temp<<">";
a>>(temp,256);
b<<"<font color="<<temp;
a>>(temp,256);
b<<"size="<<temp;
a.getline(temp,256);
b<<"face="<<temp<<"> <br>";
a.getline(temp,256);
b<<temp;
b<<"<br>";
a>>(temp,256);
b<<temp;
b<<"<br>";
b<<"<br>";
b<<"</font>";
b<<"</body>";
b<<"</html>";
}
void create_html(ifstream &a)
{
ofstream output_file;
output_file.open("/nfs/stak/students/c/calvertm/public_html/index.html");
create_header(a,output_file);
create_body(a,output_file);
}
