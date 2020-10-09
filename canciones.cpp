#include <iostream>
#include <queue>

using namespace std;

struct Songs
{
    string titulo;
    string artista;
    string genero;
    int duracion;
};
typedef struct Songs songs;

struct Canciones
{
    queue <Songs> CancionesSad;
    queue <Songs> CancionesHappy;
    queue <Songs> CancionesTired;
};
typedef struct Canciones canciones;

Canciones spotify;

void añadir ()
{
    Songs cancion;
    int option;
    
        cout<< "Ingresar titulo de la cancion: " <<endl;    getline (cin, cancion.titulo);
        cout<< "Quitar ultima cancion de la playlist elegida: " <<endl;
        cout<< "Ingresar artista: " <<endl;    getline (cin, cancion.artista);
        cout<< "Ingresar genero: " <<endl;     getline (cin, cancion.genero);
        cout<< "Ingresar duracion: " <<endl;   cin >> cancion.duracion;
        cout<< "\n";
        
        cout<< "\n" << "Elija una playlist a la que desea agregar la cancion" <<endl;
        cout<< "1. Canciones sad" <<endl;
        cout<< "2. Canciones happy" <<endl;
        cout<< "3. Canciones relax" <<endl;
        cin>>option;
            switch (option)
            {
                case 1:
                spotify.CancionesSad.push(cancion);
                break;
                case 2:
                spotify.CancionesHappy.push(cancion);
                break;
                case 3:
                spotify.CancionesTired.push(cancion);
                break;
                default:
                cout<<"Esta no es una opcion valida" <<endl;
                break;
            }
}
void quitar ()
{
    int quitar;
        cout<< "\n" << "Elija la playlist de la que desea eliminar la ultima cancion añadida" <<endl;
        cout<< "1. Canciones sad" <<endl;
        cout<< "2. Canciones happy" <<endl;
        cout<< "3. Canciones relax" <<endl;
        cin>>quitar;

        switch (quitar)
        {
        case 1:
            spotify.CancionesSad.pop();
            break;
        case 2:
            spotify.CancionesHappy.pop();
            break;
        case 3:
            spotify.CancionesTired.pop();
            break;
        default:
            break;
        }
}

void mostrar ()
{
    while (!spotify.CancionesHappy.empty (), !spotify.CancionesSad.empty(), !spotify.CancionesTired.empty())
    {
        int mostrar;

        cout<< "\n" << "Elija la playlist que desea mostrar" <<endl;
        cout<< "1. Canciones sad" <<endl;
        cout<< "2. Canciones happy" <<endl;
        cout<< "3. Canciones relax" <<endl;
        cin>>mostrar;   
        
        
        }
    }
    

int main ()
{
    bool status = true;
do
{
    int opcion = 0;
    cout<< "\n" << "***** MENU DE CANCIONES *****" <<endl;
    cout<<"1. Ingresar nueva cancion" <<endl;
    cout<<"2. Quitar ultima cancion elegida" <<endl;
    cout<<"3. Mostrar una playlist" <<endl;
    cout<<"4. Salir del programa" <<endl;
      
      switch (opcion)
      {
        case 1:
            añadir();
            break;
        case 2:
            quitar ();
            break;
        case 3:
            mostrar ();
            break;
      default: 
            cout << "Opcion invalida!\n";
            break;
      }
} while (status);
}





