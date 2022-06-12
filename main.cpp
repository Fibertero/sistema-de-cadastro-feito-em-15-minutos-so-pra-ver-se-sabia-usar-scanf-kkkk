#include<iostream>
#include<vector>

using namespace std;

bool inLoop = true;

class Usuario{
private:
    std::string name;
    int age;
    float cash;
public:
    Usuario() = default;
    Usuario(std::string _name, int _age, float _cash)
        :name(_name), age(_age), cash(_cash){}
    
    std::string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    float getCash(){
        return cash;
    }

};
std::vector<Usuario> Usuarios;
void cadastrarUsuario(Usuario user){
    Usuarios.push_back(user);
}
void verUsuarios(){
    for(size_t i=0; i<Usuarios.size(); i++){
        printf("Nome: %s Idade: %d Dinheiro: %f\n", Usuarios[i].getName().c_str(), Usuarios[i].getAge(), Usuarios[i].getCash()); 
    }
}

void cadastroLoop(){
    std::string c = "s";

    while(inLoop){
    std::string nome;
    while(c=="s"){
    printf("deseja cadastrar um usuario?\n");
    scanf("%s", c.c_str());
    if(c!="s"){break; verUsuarios();}
    printf("%s", c.c_str());

    std::string nome;
    int idade;
    float cash;
    printf("nome: \n");
    scanf("%s", nome.c_str());
    printf("idade: \n");
    scanf("%d", &idade);
    printf("cash: \n");
    scanf("%f", &cash);
    auto user = Usuario(nome.c_str(), idade, cash);
    cadastrarUsuario(user);
    verUsuarios();\
        }
    }
}

int main(){
    
    auto fibertero = Usuario("Fibertero", 12, 30.99);

    cadastrarUsuario(fibertero);

    printf("[Sistema de Cadastro]");

    cadastroLoop();

    verUsuarios();


    return 0;
}