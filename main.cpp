#include <iostream>
using namespace std;

int main()
{
    float n1,n2,n3,n4, media;
    cout << " Digite nota da unidade 1, 2, 3 e 4 separadas por espaco:";
    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1+n2+n3+n4)/4;
    if(media>=7)
    {
        cout << "A media do aluno foi: " << media << "\n ALUNO APROVADO\n";

    }
    else
        cout << " A media do aluno foi: " << media << "\n Aluno Reprovado\n";
}
