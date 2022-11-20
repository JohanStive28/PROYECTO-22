//
// Created by Johan on 18/11/2022.
//

#include "Menu.h"


string Menu::MostrarMenu()
{
    stringstream s;
    s << "----------------------------------------------------------------" << "\n";
    s << "1. Citas" << "\n";
    s << "2. Mantenimiento" << "\n";
    s << "3. Busquedas" << "\n";
    s << "4. Salir" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}
void Menu::InfoHospital() {
    colorMenu();
    string nombre, telefono, cedula;
    cout << "Digite el nombre del Hospital: ";
    getline(cin, nombre);
    limpiaPantallaMenu();
    cout << "Digite el telefono del Hospital: ";
    getline(cin, telefono);
    limpiaPantallaMenu();
    cout << "Digite la cedula del Hospital: ";
    getline(cin, cedula);
    limpiaPantallaMenu();
    saluduni = new Saluduni(nombre, telefono, cedula);
    limpiaPantallaMenu();

}
void Menu::MenuPrincipal()
{
    bool continuar = true;
    colorMenu();
    do{
        cout << saluduni->toString();
        cout << MostrarMenu();
        agregarEntradaEspannol();
        switch (captaTecla())
        {
            case '1':
                limpiaPantallaMenu();
                subMenuCitas();
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '2':
                limpiaPantallaMenu();
                subMenuMantenimiento();
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '3':
                limpiaPantallaMenu();
                MenuBusquedas();
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '4':
                limpiaPantallaMenu();
                imprimirConSalto("You closed the program");
                imprimirConSalto("Have a wonderful day");
                exit(0);
                break;
            default:
                imprimirConSalto("Ha digitado una opcion incorrecta...");
                imprimirConSalto("Presione una tecla para cargar nuevamente este menu");
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
        }
    } while (continuar);
    cout << "\n";
}
string Menu::InfosubMenuCitas() {
    stringstream s;
    s << "----------------------------------------------------------------" << "\n";
    s << "Ha elegido la opcion 1, que corresponde a citas" << "\n";
    s<<"----------------------------------------------------------------" << "\n";
    s << "1. Incluir citas" << "\n";
    s << "2. Buscar citas" << "\n";
    s << "3. Cancelar citas" << "\n";
    s << "4. Mostrar historial de citas por paciente(ID)" << "\n";
    s << "5. Regresar al menu principal" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}
string Menu::InfosubsubMenuCitas() {
    stringstream s;
    s << "----------------------------------------------------------------" << "\n";
    s << "Seleccione su oficio" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "1. Estudiante" << "\n";
    s << "2. Profesor en propiedad" << "\n";
    s << "3. Profesor interino" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}
string Menu::InfosubsubsubMenuCitas() {
    stringstream s;
    s << "----------------------------------------------------------------" << "\n";
    s << "Seleccione una opcion" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "1. Estudiante Nacional" << "\n";
    s << "2. Estudiante Internacional" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}
void Menu::subMenuCitas() {
    bool continuar = true;
    do {
        agregarEntradaEspannol();
        cout << InfosubMenuCitas();

        switch (captaTecla())
        {
            case '1':
                limpiaPantallaMenu();
                datosCita();

                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '2':
                limpiaPantallaMenu();
                buscarCitaString();
                InfocancelarCita();
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '3':
                limpiaPantallaMenu();
                MenuBusquedas();
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '4':
                limpiaPantallaMenu();
                registroCitas();

                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '5':
                limpiaPantallaMenu();
                continuar=false;
                break;
            default:
                imprimirConSalto("Ha digitado una opcion incorrecta...");
                imprimirConSalto("Presione una tecla para cargar nuevamente este menu");
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
        }
    } while (continuar);
}
string Menu::InfosubMenuMantenimiento() {
    stringstream s;
    agregarEntradaEspannol();
    s << "----------------------------------------------------------------" << "\n";
    s << "Ha elegido la opcion 2, que corresponde a mantenimiento" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "1. Ingreso de pacientes; su eliminación y edición, por medio de la cédula" << "\n";
    s << "2. Ingreso de médicos; su eliminación y edición por medio de la cédula." << "\n";
    s << "3. Ingreso de ambulancias; su eliminación y edición por medio de la placa." << "\n";
    s << "4. Ingreso de taxis; su eliminación, búsqueda y edición por medio de la placa." << "\n";
    s << "5. Regresar al menu principal" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}
void Menu::subMenuMantenimiento() {
    bool continuar = true;
    do{
        cout << InfosubMenuMantenimiento();
        switch (captaTecla())
        {
            case '1':
                limpiaPantallaMenu();
                subsubMenuMantenimientoop1();

                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '2':
                limpiaPantallaMenu();
                subsubMenuMantenimientoop2();
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '3':
                limpiaPantallaMenu();
                subsubMenuMantenimientoop3();
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '4':
                limpiaPantallaMenu();
                subsubMenuMantenimientoop4();
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '5':
                limpiaPantallaMenu();
                continuar = false;
                break;
            default:
                limpiaPantallaMenu();
                imprimirConSalto("Ha digitado una opcion incorrecta...");
                imprimirConSalto("Presione una tecla para cargar nuevamente este menu");
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
        }
    } while (continuar);
}
string Menu::InfosubsubMenuMantenimientoop1() {
    stringstream s;
    s << "----------------------------------------------------------------" << "\n";
    s << "Ha elegido la opcion 1 de mantenimiento" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "1. Ingreso de pacientes" << "\n";
    s << "2. Eliminar paciente  por medio de la cédula " << "\n";
    s << "3. Editar información del paciente por medio de la cedula" << "\n";
    s << "4. Regresar al menu de mantenimiento" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}
void Menu::subsubMenuMantenimientoop1() {
    bool continuar = true;
    string nombreU, nombre, cedula, cedulaPaciente, titulo, nacionalidad, numPasaporte, condicionPais, codigoCarrera, telefono;
    int aniosLaborados = 0, opcion = 0, nivelCursado = 0, codigoPlaza, calificacion = 0;
    bool estado = 0;
    do {
        cout << InfosubsubMenuMantenimientoop1();
        switch (captaTecla())
        {
            case '1':
                limpiaPantallaMenu();
                cout << InfosubsubMenuCitas();
                
                
                if (captaTecla() == '1') {
                    limpiaPantallaMenu();
                    cout << InfosubsubsubMenuCitas();
                    
                    if (captaTecla() == '1') {
                        limpiaPantallaMenu();
                        imprimirConSalto("----------------------------------------------------------------");
                        imprimirConSalto("                      ESTUDIANTE NACIONAL");
                        imprimirConSalto("----------------------------------------------------------------");
                        imprimirConSalto("Digite su nombre: ");
                        getline(cin,nombre);
                        imprimirConSalto("Digite el nombre de la universidad a la que pertenece: ");
                        getline(cin,nombreU);
                        imprimirConSalto("Digite su numero de telefono: ");
                        getline(cin,telefono);
                        imprimirConSalto("Digite el codigo de su carrera: ");
                        getline(cin, codigoCarrera);
                        imprimirConSalto("Digite el ultimo nivel cursado: ");
                        cin >> nivelCursado;
                        imprimirConSalto("Digite el numero de cedula: ");
                        cin >> cedula;
                        imprimirConSalto("Digite su estado [Activo = 1 / Suspendido = 0] : ");
                        cin >> estado;

                        Estudiante* estudiante = new Estudiante(nombre, nombreU, cedula, codigoCarrera, telefono, nivelCursado, 1,
                                                    estado);
                        saluduni->ingresarPacienteEst(estudiante);
                    }
                    else if (captaTecla() == '2') {
                        limpiaPantallaMenu();
                        imprimirConSalto("----------------------------------------------------------------");
                        imprimirConSalto("                    ESTUDIANTE INTERNACIONAL");
                        imprimirConSalto("----------------------------------------------------------------");
                        imprimirConSalto("Digite su nombre: ");
                        getline(cin, nombre);
                        imprimirConSalto("Digite el nombre de la universidad a la que pertenece: ");
                        getline(cin, nombreU);
                        imprimirConSalto("Digite su numero de telefono: ");
                        getline(cin,telefono);
                        imprimirConSalto("Digite el codigo de su carrera: ");
                        getline(cin, codigoCarrera);
                        imprimirConSalto("Digite el ultimo nivel cursado: ");
                        cin >> nivelCursado;
                        imprimirConSalto("Digite el numero de pasaporte: ");
                        cin >> numPasaporte;
                        imprimirConSalto("Digite su nacionalidad : ");
                        getline(cin,nacionalidad);
                        imprimirConSalto("Digite su estado en el pais [Refugiado, exiliado, etc] : ");
                        getline(cin, condicionPais);

                        Estudiante* estudiante = new Estudiante(nombre, nombreU, cedula, codigoCarrera, telefono, nacionalidad, condicionPais, nivelCursado, 0);
                        saluduni->ingresarPacienteEst(estudiante);
                    }
                }
                else if (captaTecla() == '3') {
                    limpiaPantallaMenu();
                    imprimirConSalto("----------------------------------------------------------------");
                    imprimirConSalto("                      PROFESOR PROPIEDAD");
                    imprimirConSalto("----------------------------------------------------------------");
                    imprimirConSalto("Digite su nombre: ");
                    getline(cin, nombre);
                    imprimirConSalto("Digite el nombre de la universidad a la que pertenece: ");
                    getline(cin, nombreU);
                    imprimirConSalto("Digite el numero de cedula: ");
                    getline(cin,cedula);
                    imprimirConSalto("Digite el titulo: ");
                    getline(cin, titulo);
                    imprimirConSalto("Digite la cantidad de a�os laborados: ");
                    cin >> aniosLaborados;
                    imprimirConSalto("Digite su codigo de plaza: ");
                    cin>>codigoPlaza;

                    Profesor* profesor = new Profesor(nombre, nombreU, cedula,1, titulo, aniosLaborados, codigoPlaza);

                    saluduni->ingresarPacienteProf(profesor);

                }
                else if (captaTecla() == '4') {
                    limpiaPantallaMenu();
                    imprimirConSalto("----------------------------------------------------------------");
                    imprimirConSalto("                      PROFESOR INTERINO");
                    imprimirConSalto("----------------------------------------------------------------");
                    imprimirConSalto("Digite su nombre: ");
                    cin >> nombre;
                    imprimirConSalto("Digite el nombre de la universidad a la que pertenece: ");
                    cin >> nombreU;
                    imprimirConSalto("Digite el numero de cedula: ");
                    cin >> cedula;
                    imprimirConSalto("Digite el titulo: ");
                    cin >> titulo;
                    imprimirConSalto("Digite la cantidad de a�os laborados: ");
                    cin >> aniosLaborados;
                    imprimirConSalto("Digite su calificacion: ");
                    cin >> calificacion;

                    Profesor* profesor = new Profesor(nombre, nombreU, cedula,0, titulo, aniosLaborados, calificacion);
                    saluduni->ingresarPacienteProf(profesor);
                }
                else {
                    imprimirConSalto("Ha digitado una opcion incorrecta...");
                    imprimirConSalto("Presione una tecla para cargar nuevamente este menu");
                    PausaPantallaMenu();
                    limpiaPantallaMenu();
                }
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '2':
                limpiaPantallaMenu();
                imprimirConSalto("Digite el numero de cedula o de pasaporte del paciente que desea eliminar: ");
                cedula=leer();

                if (saluduni->eliminarPacienteEst(cedula) == true) { cout << "\nPaciente eliminado con exito.\n"; }
                else if (saluduni->eliminarPacienteProf(cedula) == true) { cout << "\nPaciente eliminado con exito.\n"; }
                else{ cout<<"El id digitado es incorrecto o el paciente no existe."; }

                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '3':
                limpiaPantallaMenu();
                imprimirConSalto("Digite el numero de cedula o de pasaporte del paciente que desea editar: ");
                cin >> cedula;
                if (saluduni->existePacienteEst(cedula) == false && saluduni->existePacienteProf(cedula) == false) { imprimirConSalto("Lo sentimos, el numero de cedula o pasaporte ingresado no coincide con ninguno de nuestros pacientes."); }
                else {
                    editarPaciente(cedula);
                }

                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '4':
                limpiaPantallaMenu();
                continuar=false;
                break;
            default:

                imprimirConSalto("Ha digitado una opcion incorrecta...");
                imprimirConSalto("Presione una tecla para cargar nuevamente este menu");
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
        }
    } while (continuar);
}
string Menu::InfosubsubMenuMantenimientoop2() {
    stringstream s;
    s << "----------------------------------------------------------------" << "\n";
    s << "Ha elegido la opcion 2 de mantenimiento" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "1. Ingreso de medicos " << "\n";
    s << "2. Eliminar medicos por medio de la cédula " << "\n";
    s << "3. Editar información de un medico por medio de la cedula" << "\n";
    s << "4. Regresar al menu de mantenimiento" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}
void Menu::subsubMenuMantenimientoop2() {
    Medico* medico = NULL;
    bool continuar = true;
    string nombre, apellido, cedula, especialidad, telefono;
    do {
        cout << InfosubsubMenuMantenimientoop2();
        agregarEntradaEspannol();

        if (captaTecla() == '1') {
            limpiaPantallaMenu();
            cout << "----------------------------------------------------------------" << "\n";
            cout << "                    INGRESAR A UN MEDICO" << "\n";
            cout << "----------------------------------------------------------------" << "\n";
            cout << "Digite el nombre del medico: ";
            cin >> nombre;
            cout << "Digite el apellido del medico: ";
            cin >> apellido;
            cout << "Digite el numero de cedula del medico: ";
            cin >> cedula;
            cout << "Digite el numero telefonico del medico: ";
            cin >> telefono;
            cout << "Digite la especialidad del medico: ";
            cin >> especialidad;

            medico = new Medico(nombre, apellido, cedula, telefono, especialidad);
            saluduni->ingresarMedico(medico);
          
            break;
        }
        else if (captaTecla() == '2') {
            limpiaPantallaMenu();
            imprimirConSalto("Digite el numero de cedula del medico que desea eliminar: ");
            cin >> cedula;
            if (saluduni->eliminarMedico(cedula) == true) { cout << "\nMedico eliminado con exito.\n"; }
  
        }
        else if (captaTecla() == '3') {
            limpiaPantallaMenu();
            cout << "Digite el numero de cedula del medico que desea editar: ";
            cin >> cedula;
            if (saluduni->existeMedico(cedula) == false) { cout << "\nLo sentimos, el numero de cedula ingresado no coincide con ninguno de nuestros medicos.\n"; }
            cout << infoEditarMedicos();

        }
        else if (captaTecla() == '4') {
            limpiaPantallaMenu();
           continuar=false;
        }
        else{
            imprimirConSalto("Ha digitado una opcion incorrecta...");
            imprimirConSalto("Presione una tecla para cargar nuevamente este menu");
            break;

        }
    } while (continuar);
}
string Menu::InfosubsubMenuMantenimientoop3() {
    stringstream s;
    s << "----------------------------------------------------------------" << "\n";
    s << "Ha elegido la opcion 3 de mantenimiento" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "1. Ingreso de ambulancias por medio de la placa " << "\n";
    s << "2. Eliminar ambulancias por medio de la placa " << "\n";
    s << "3. Editar  información de una ambulancias por medio de la placa" << "\n";
    s << "4. Regresar al menu de mantenimiento" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}
void Menu::subsubMenuMantenimientoop3() {
    string placa, codigo,marca, tipoViaje; string parametro;
    bool ocupado = 0;
    bool continuar = true;
    double kilometros = 0;
    do {
        cout << InfosubsubMenuMantenimientoop3();
        agregarEntradaEspannol();

        if (captaTecla() == '1')
        {
            limpiaPantallaMenu();
            cout << "----------------------------------------------------------------" << "\n";
            cout << "                    INGRESAR AMBULANCIA" << "\n";
            cout << "----------------------------------------------------------------" << "\n";
            cout << "Digite el numero de placa de la ambulancia ";
            cin >> placa;
            cout << "Digite el codigo de la ambulancia: ";
            cin >> codigo;
            cout << "Digite la marca de la ambulancia: ";
            cin >> marca;
            cout << "Digite el estado de la ambulancia [Ocupada: 1 / Disponible: 0]: ";
            cin >> ocupado;

            Transporte* ambulancia = new Transporte(placa, marca, codigo, ocupado, 1);
            saluduni->ingresarAmbulancia(ambulancia);

        }
        else if (captaTecla() == '2'){
            limpiaPantallaMenu();
        imprimirConSalto("Digite la placa de la ambulancia que desea eliminar: ");
        cin >> placa;

        if (saluduni->eliminarTransporte(placa) == true) { cout << "\nAmbulancia eliminada con exito.\n"; }
        else { cout << "\nLa placa ingresada no corresponde con ninguno de las ambulancias ingresadas.\n"; }

        }
        else if (captaTecla() == '3') {
            limpiaPantallaMenu();
            cout << "Digite la placa de la ambulancia que desea editar: ";
            cin >> placa;
            if (saluduni->existeTransporte(placa) == false) { cout << "\nLo sentimos, el numero de placa ingresado no coincide con ninguna de nuestras ambulancias.\n"; }
            cout << infoEditarAmbulancias();
            switch (captaTecla()) {
            case '1':

                imprimirConSalto("Digite la nueva placa de la ambulancia: ");
                parametro = leer();
                saluduni->editarPacienteEstudiante(placa, 1, parametro);
                break;
            case '2':

                imprimirConSalto("Digite el nuevo codigo de la ambulancia: ");
                parametro = leer();
                saluduni->editarPacienteEstudiante(placa, 2, parametro);

                break;
            case '3':
                imprimirConSalto("Digite la nueva marca de la ambulancia: ");
                parametro = leer();
                saluduni->editarPacienteEstudiante(placa, 3, parametro);

                break;
            case '4':
                imprimirConSalto("Digite el nuevo estado de la ambulancia: ");
                parametro = leer();
                saluduni->editarPacienteEstudiante(placa, 4, parametro);

                break;
            case '5':
                imprimirConSalto("Digite el nuevo kilometraje de la ambulancia: ");
                parametro = leer();
                saluduni->editarPacienteEstudiante(placa, 5, parametro);

                break;
            case '6':
                imprimirConSalto("Digite el nuevo tipo de viaje: ");
                parametro = leer();
                saluduni->editarPacienteEstudiante(placa, 6, parametro);

                break;
            case '7':
                limpiaPantallaMenu();
                return subMenuMantenimiento();
                break;
            }

            break;
        }
        else if (captaTecla() == '4') {
            limpiaPantallaMenu();
            continuar = false;
        }
        else {
            imprimirConSalto("Ha digitado una opcion incorrecta...");
            imprimirConSalto("Presione una tecla para cargar nuevamente este menu");
            PausaPantallaMenu();
            limpiaPantallaMenu();
        }
    } while (continuar);
}
string Menu::InfosubsubMenuMantenimientoop4() {
    stringstream s;
    s << "----------------------------------------------------------------" << "\n";
    s << "Ha elegido la opcion 4 de mantenimiento" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "1. Ingreso de taxi por medio de la placa " << "\n";
    s << "2. Eliminar taxi por medio de la placa " << "\n";
    s << "3. Editar información de un taxi por medio de la placa" << "\n";
    s << "4. Regresar al menu de mantenimiento" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}
void Menu::subsubMenuMantenimientoop4() {
    int numPacientes = 0;
    bool continuar = true;
    string placa, codigo, marca, tipoViaje;
    bool ocupado = 0;
    double kilometros = 0, costoViaje = 0;
    string parametro;
    do {
        cout << InfosubsubMenuMantenimientoop4();
        agregarEntradaEspannol();
        if (captaTecla() == '1') {
            limpiaPantallaMenu();
            cout << "----------------------------------------------------------------" << "\n";
            cout << "                    INGRESAR TAXI" << "\n";
            cout << "----------------------------------------------------------------" << "\n";
            cout << "Digite el numero de placa del taxi: ";
            cin >> placa;
            cout << "Digite la marca del taxi: ";
            cin >> marca;
            cout << "Digite la cantidad de kilometros recorridos: ";
            cin >> kilometros;
            cout << "Digite la cantidad de pacientes que viajaran en el taxi: ";
            cin >> numPacientes;


            Transporte* taxi = new Transporte(placa, marca, 0, numPacientes);
            saluduni->ingresarTaxi(taxi);
            PausaPantallaMenu();
            limpiaPantallaMenu();
        }
        else if (captaTecla() == '2') {
            limpiaPantallaMenu();
            imprimirConSalto("Digite la placa del taxi que desea eliminar: ");
            cin >> placa;

            if (saluduni->eliminarTransporte(placa) == true) { cout << "\nTaxi eliminado con exito.\n"; }
            else { cout << "\nLa placa ingresada no corresponde con ninguno de los taxis ingresados.\n"; }

            PausaPantallaMenu();
            limpiaPantallaMenu();
        }
        else if (captaTecla() == '3') {
            limpiaPantallaMenu();
            cout << "Digite la placa del taxi que desea editar: ";
            cin >> placa;
            if (saluduni->existeTransporte(placa) == false) { cout << "\nLo sentimos, el numero de placa ingresado no coincide con ninguno de nuestros taxis.\n"; }
            cout << infoEditarTaxis();
            switch (captaTecla()) {
            case '1':
                imprimirConSalto("Digite la nueva placa del taxi: ");
                parametro = leer();
                saluduni->editarPacienteEstudiante(placa, 1, parametro);
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '2':
                imprimirConSalto("Digite la nueva marca del taxi: ");
                parametro = leer();
                saluduni->editarPacienteEstudiante(placa, 3, parametro);
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
                break;
            case '3':
                imprimirConSalto("Digite la nueva cantidad de pasajeros : ");
                parametro = leer();
                saluduni->editarPacienteEstudiante(placa, 7, parametro);
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '4':
                imprimirConSalto("Digite la nueva distancia: ");
                parametro = leer();
                saluduni->editarPacienteEstudiante(placa, 5, parametro);
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '5':
                imprimirConSalto("Digite el nuevo tipo de viaje: ");
                parametro = leer();
                saluduni->editarPacienteEstudiante(placa, 6, parametro);
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
            case '6':
                limpiaPantallaMenu();
                return subMenuMantenimiento();
                break;
            }
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        }
        else if (captaTecla() == '4'){

            limpiaPantallaMenu();
            continuar = false;;
        }
        else{
                imprimirConSalto("Ha digitado una opcion incorrecta...");
                imprimirConSalto("Presione una tecla para cargar nuevamente este menu");
                PausaPantallaMenu();
                limpiaPantallaMenu();
                break;
        }
    } while (continuar);
}
string Menu::InfoBusquedas() {
    stringstream s;
    s << "----------------------------------------------------------------" << "\n"
      << "         Ha accedido a la opción 3 que corresponde a busquedas" << "\n"
      <<"----------------------------------------------------------------" << "\n"
      << "1. Buscar pacientes por medio de la cedula o pasaporte"<<"\n"
      << "2. Buscar Medico por medio de la cedula"<<"\n"
      << "3. Buscar transporte por medio de la placa"<<"\n"
      << "4. Reportes"<<"\n"
      <<"5. Regresar al menu principal"<<"\n"
      << "----------------------------------------------------------------" << "\n"
      << "Digite una opcion: ";
    return s.str();
}
void Menu::MenuBusquedas() {
    string id, placa;
    imprimirConSalto(InfoBusquedas());
    switch (captaTecla())
    {
        agregarEntradaEspannol();
        case '1':
            limpiaPantallaMenu();

            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '2':
            limpiaPantallaMenu();
            imprimirConSalto("Digite la cedula del medico que desea buscar y mostrar la información");
            id = leer();
            if (saluduni->existeMedico(id) == true) {
                cout<<saluduni->MedicoEspecifico(id);
            }
            else {
                imprimirConSalto("El medico no existe");
            }
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '3':
            limpiaPantallaMenu();
            imprimirConSalto("Digite la placa de la ambulancia que desea buscar y mostrar la información");
            placa = leer();
            if (saluduni->existeTransporte(placa)) {
                cout<<saluduni->getInfoTransporte(placa);
            }
            else {
                imprimirConSalto("El transporte no existe");
            }
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '4':
            limpiaPantallaMenu();
            MenuReportes();
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '5':
            limpiaPantallaMenu();
            return MenuPrincipal();
            break;
        default:
            imprimirConSalto("Ha digitado una opcion incorrecta...");
            imprimirConSalto("Presione una tecla para cargar nuevamente este menu");
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
    }
}
string Menu::SubMenuReportes() {
    stringstream s;
    s   << "----------------------------------------------------------------" << "\n"
        <<"Ha elegido la opción 4 de busquedas, que corresponde a reportes"
        << "----------------------------------------------------------------" << "\n"
        << " a) Reportar de los datos de la empresa." << "\n"
        << " b) Reportar el monto total a pagar por parte del hospital por concepto de taxis." << "\n"
        << "c) Reporte de la persona que ha realizado más citas en el hospital." << "\n"
        << "d) Reportar la fecha en que han asistido mayor número de pacientes." << "\n"
        << "e) Reportar el tipo de transporte más utilizado por los pacientes(propio, taxi, ambulancia)" << "\n"
        << "f) Reportar lista de ambulancias que se encuentran “ocupadas”."<<"\n"
        << "g) Reportar lista de tres profesores interinos con la mejor calificación." << "\n"
        << "h) Reportar lista de todos los estudiantes internacionales que tengan condición de exiliado" << "\n"
        << "Presione el numero 0 para regresar al menu de busquedas"<<"\n"
        << "----------------------------------------------------------------" << "\n"
        << "Digite una opcion: ";
    return s.str();
}
void Menu::MenuReportes() {
    imprimirConSalto(SubMenuReportes());
    agregarEntradaEspannol();
    switch (captaTecla())
    {
        case 'a':
            limpiaPantallaMenu();

            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case 'b':
            limpiaPantallaMenu();

            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case 'c':
            limpiaPantallaMenu();

            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case 'd':
            limpiaPantallaMenu();

            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case 'e':
            limpiaPantallaMenu();

            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case 'f':
            limpiaPantallaMenu();

            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case 'g':
            limpiaPantallaMenu();

            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case 'h':
            limpiaPantallaMenu();

            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '0':
            limpiaPantallaMenu();
            return MenuBusquedas();
            break;
        default:
            imprimirConSalto("Ha digitado una opcion incorrecta...");
            imprimirConSalto("Presione una tecla para cargar nuevamente este menu");
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
    }
}
string Menu::infoEditarPacientesEstNa()
{
    stringstream s;
    s << "----------------------------------------------------------------" << "\n";
    s << "            Seleccione el atributo que desea editar" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "1. Nombre" << "\n";
    s << "2. Nombre de la universidad" << "\n";
    s << "3. Telefono" << "\n";
    s << "4. Codigo de carrera" << "\n";
    s << "5. Nivel cursado" << "\n";
    s << "6. Cedula" << "\n";
    s << "7. Estado" << "\n";
    s << "8. Regresar al menu de mantenimiento" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}

string Menu::infoEditarPacientesEstIn()
{
    stringstream s;
    s << "----------------------------------------------------------------" << "\n";
    s << "            Seleccione el atributo que desea editar" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "1. Nombre" << "\n";
    s << "2. Nombre de la universidad" << "\n";
    s << "3. Telefono" << "\n";
    s << "4. Codigo de carrera" << "\n";
    s << "5. Nivel cursado" << "\n";
    s << "6. Numero de pasaporte" << "\n";
    s << "7. Nacionalidad" << "\n";
    s << "8. Condicion en el pais" << "\n";
    s << "9. Regresar al menu de mantenimiento" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}

string Menu::infoEditarPacientesProfPro()
{
    stringstream s;
    s << "----------------------------------------------------------------" << "\n";
    s << "            Seleccione el atributo que desea editar" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "1. Nombre" << "\n";
    s << "2. Nombre de la universidad" << "\n";
    s << "3. Titulo" << "\n";
    s << "4. A�os Laborados" << "\n";
    s << "5. Codigo de plaza" << "\n";
    s << "6. Cedula" << "\n";
    s << "7. Regresar al menu de mantenimiento" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}

string Menu::infoEditarPacientesProfInt()
{
    stringstream s;
    s << "----------------------------------------------------------------" << "\n";
    s << "            Seleccione el atributo que desea editar" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "1. Nombre" << "\n";
    s << "2. Nombre de la universidad" << "\n";
    s << "3. Titulo" << "\n";
    s << "4. Anios Laborados" << "\n";
    s << "5. Calificacion" << "\n";
    s << "6. Cedula" << "\n";
    s << "7. Regresar al menu de mantenimiento" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}

string Menu::infoEditarMedicos()
{
    stringstream s;
    s << "----------------------------------------------------------------" << "\n";
    s << "            Seleccione el atributo que desea editar" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "1. Nombre" << "\n";
    s << "2. Apellido" << "\n";
    s << "3. Cedula" << "\n";
    s << "4. Telefono" << "\n";
    s << "5. Especialiadad" << "\n";
    s << "6. Regresar al menu de mantenimiento" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}

string Menu::infoEditarAmbulancias()
{
    stringstream s;
    s << "----------------------------------------------------------------" << "\n";
    s << "            Seleccione el atributo que desea editar" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "1. Placa" << "\n";
    s << "2. Codigo" << "\n";
    s << "3. Marca" << "\n";
    s << "4. Estado [Ocupado / Disponible]" << "\n";
    s << "5. Kilometros recorridos" << "\n";
    s << "6. Tipo de viaje" << "\n";
    s << "7. Regresar al menu de mantenimiento" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}

string Menu::infoEditarTaxis()
{
    stringstream s;
    s << "----------------------------------------------------------------" << "\n";
    s << "            Seleccione el atributo que desea editar" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "1. Placa" << "\n";
    s << "2. Marca" << "\n";
    s << "3. Numero de pacientes transportados" << "\n";
    s << "4. Kilometros recorridos" << "\n";
    s << "5. Tipo de viaje" << "\n";
    s << "6. Regresar al menu de mantenimiento" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}

void Menu::editarPaciente(string cedula)
{
    int option = 0;
    if (saluduni->getEstudiante(cedula)->getId() == cedula) {
        if (saluduni->getEstudiante(cedula)->isNacional() == 1) {
            cout << infoEditarPacientesEstNa() << endl;
            cin >> option;
            editarPacienteEstudiante(captaTecla(), cedula);
        } else {
            cout << infoEditarPacientesEstIn() << endl;
            cin >> option;
            editarPacienteEstudiante(captaTecla(), cedula);
        }
    }
    else if (saluduni->getProfesor(cedula)->getId() == cedula) {

        if (saluduni->getProfesor(cedula)->isPropiedad() == 1) {
            cout << infoEditarPacientesProfPro() << endl;
            cin >> option;
            editarPacienteProfesor(captaTecla(), cedula);
        } else {
            cout << infoEditarPacientesProfInt() << endl;
            cin >> option;
            editarPacienteProfesor(captaTecla(), cedula);
        }
    }

    cout << endl;
}

void Menu::editarPacienteEstudiante(int option, string cedulaPaciente)
{
    bool continuar = true;
    string parametro;
    do {
        switch (option) {
        case '1':
            imprimirConSalto("Digite el  nuevo nombre del paciente: ");
            parametro = leer();
            saluduni->editarPacienteEstudiante(cedulaPaciente, 1, parametro);
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '2':
            imprimirConSalto("Digite el nuevo nombre de la universidad: ");
            parametro = leer();
            saluduni->editarPacienteEstudiante(cedulaPaciente, 2, parametro);
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '3':
            imprimirConSalto("Digite el nuevo numero telefonico del paciente: ");
            cin >> parametro;
            saluduni->editarPacienteEstudiante(cedulaPaciente, 3, parametro);
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '4':
            imprimirConSalto("Digite el nuevo codigo de carrera del paciente: ");
            cin >> parametro;
            saluduni->editarPacienteEstudiante(cedulaPaciente, 4, parametro
            );
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '5':
            imprimirConSalto("Digite el nuevo nivel cursado del estudiante: ");
            cin >> parametro;
            saluduni->editarPacienteEstudiante(cedulaPaciente, 5, parametro);
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '6':
            imprimirConSalto("Digite la nueva cedula del paciente: ");
            cin >> parametro;
            saluduni->editarPacienteEstudiante(cedulaPaciente, 6, parametro);
            PausaPantallaMenu();
            limpiaPantallaMenu();
        case '7':
            if (saluduni->getEstudiante(cedulaPaciente)->isNacional() == true) {
                imprimirConSalto("Digite el nuevo estado del paciente: ");
                cin >> parametro;
                saluduni->editarPacienteEstudiante(cedulaPaciente, 7, parametro);
            }
            else {
                imprimirConSalto("Digite la nueva nacionalidad del paciente: ");
                cin >> parametro;
                saluduni->editarPacienteEstudiante(cedulaPaciente, 7, parametro);
            }
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '8':
            if (saluduni->getEstudiante(cedulaPaciente)->isNacional() == true) {
                limpiaPantallaMenu();
                return subMenuMantenimiento();
            }
            else {
                imprimirConSalto("Digite la nueva condicion en el pais del paciente: ");
                cin >> parametro;
                saluduni->editarPacienteEstudiante(cedulaPaciente, 8, parametro);
            }
            break;
        case '9':
            if (saluduni->getEstudiante(cedulaPaciente)->isNacional() == false) {
                limpiaPantallaMenu();
                continuar = false;
            }
            break;
        default:
            imprimirConSalto("Ha digitado una opcion incorrecta...");
            imprimirConSalto("Presione una tecla para cargar nuevamente este menu");
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        }
    } while (continuar);
}

void Menu::editarPacienteProfesor(int option, string cedulaPaciente)
{
    bool continuar = true;
    string parametro;

    switch (option) {
        case '1':
            imprimirConSalto("Digite el  nuevo nombre del paciente: ");
            cin >> parametro;
            saluduni->editarPacienteProfesor(cedulaPaciente, 1, parametro);
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '2':
            imprimirConSalto("Digite el nuevo nombre de la universidad: ");
            cin >> parametro;
            saluduni->editarPacienteProfesor(cedulaPaciente, 2, parametro);
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '3':
            imprimirConSalto("Digite el nuevo titulo del paciente: ");
            cin >> parametro;
            saluduni->editarPacienteProfesor(cedulaPaciente, 8, parametro);
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '4':
            imprimirConSalto("Digite la nueva cantiadad de anios laborados del paciente: ");
            cin >> parametro;
            saluduni->editarPacienteProfesor(cedulaPaciente,4, parametro);
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '5':
            if(saluduni->getProfesor(cedulaPaciente)->isPropiedad() == true) {
                imprimirConSalto("Digite el nuevo codigo de plaza del paciente: ");
                cin >> parametro; 
                saluduni->editarPacienteProfesor(cedulaPaciente, 5, parametro);
            }
            else{
                imprimirConSalto("Digite la nueva calificacion del paciente: ");
                cin >> parametro;
                saluduni->editarPacienteProfesor(cedulaPaciente, 5, parametro);
            }
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '6':
            imprimirConSalto("Digite el nuevo numero de cedula del paciente: ");
            cin >> parametro;
            saluduni->editarPacienteProfesor(cedulaPaciente, 5, parametro);
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
        case '7':
            limpiaPantallaMenu();
            continuar = false;
            break;
        default:
            imprimirConSalto("Ha digitado una opcion incorrecta...");
            imprimirConSalto("Presione una tecla para cargar nuevamente este menu");
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
    }
}

void Menu::datosCita()
{

    string cedulaPaciente, cedulaMedico, placa, tipoViaje, codigo;
    int  min = 0, horas = 0, dia = 0, mes = 0, anio = 0;
    double distancia = 0;
    
    imprimirConSalto("Digite el dia que desea agendar la cita: ");
    cin >> dia;
    imprimirConSalto("Digite el mes que desea agendar la cita: ");
    cin >> mes;
    imprimirConSalto("Digite el año que desea agendar su cita: ");
    cin >> anio;

    Fecha* fecha = new Fecha(dia, mes, anio);

    imprimirConSalto("Digite la hora que desea agendar la cita: ");
    cin >> horas;
    imprimirConSalto("Digite los minutos que desea agendar su cita: ");
    cin >> min;

    Hora* hora = new Hora(horas, min);

    imprimirConSalto("Digite el codigo que desea que tenga la cita: ");
    getline(cin, codigo);
    imprimirConSalto("Digite la cedula del paciente que desea enlazar a la cita: ");
    getline(cin, cedulaPaciente);
    imprimirConSalto("Digite la cedula del medico que desea enlazar a la cita: ");
    getline(cin, cedulaMedico);
    necesitaTransporte();
    
    switch (captaTecla()) {
        case '1':
            imprimirConSalto("Digite la placa de la ambulacia que desea agendar la cita: ");
            cin >> placa;
            imprimirConSalto("Digite el tipo de viaje [ida/ ida y vuelta / vuelta]: ");
            cin >> tipoViaje;
            imprimirConSalto("Digite la distancia recorrida (kilometros): ");
            cin >> distancia;
            saluduni->ingresarCita(codigo, cedulaPaciente, cedulaMedico, fecha, hora,placa,tipoViaje,distancia);
            break;
        case '2':
            imprimirConSalto("Digite la placa del taxi que desea agendar la cita: ");
            cin >> placa;
            imprimirConSalto("Digite el tipo de viaje [ida/ ida y vuelta / vuelta]: ");
            cin >> tipoViaje;
            imprimirConSalto("Digite la distancia recorrida (kilometros): ");
            cin >> distancia;
            saluduni->ingresarCita(codigo, cedulaPaciente, cedulaMedico, fecha, hora, placa, tipoViaje, distancia);
            break;
        case '3':
            saluduni->ingresarCita(codigo,cedulaPaciente,cedulaMedico,fecha,hora, "0", "0",0);
            limpiaPantallaMenu();
            subMenuCitas();
            break;
        default:
            imprimirConSalto("Ha digitado una opcion incorrecta...");
            imprimirConSalto("Presione una tecla para cargar nuevamente este menu");
            PausaPantallaMenu();
            limpiaPantallaMenu();
            break;
    }

}

string Menu::necesitaTransporte()
{
    stringstream s;
    s << "----------------------------------------------------------------" << "\n";
    s << "         Seleccione el medio de transporte que necesita" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "1. Ambulancia" << "\n";
    s << "2. Taxi" << "\n";
    s << "4. Transporte propio (NO NECESITA)" << "\n";
    s << "----------------------------------------------------------------" << "\n";
    s << "Digite una opcion: " << "\n";
    return s.str();
}

Cita* Menu::buscarCita(string cod)
{
    return saluduni->getCita(cod);
}
void Menu::InfocancelarCita() {
    string codigo;
    imprimirConSalto("Digite el codigo de la cita que desea eliminar: ");
    getline(cin, codigo);
    saluduni->cancelarCita(codigo);
}

void Menu::buscarCitaString()
{
    string codigo;

    imprimirConSalto("Digite el codigo de la cita que desea buscar : ");
    getline(cin, codigo);
    buscarCita(codigo);
}

string Menu::registroCitas()
{
    string id;
    imprimirConSalto("Digite el numero de cedula o pasaporte del paciente: ");
    getline(cin, id);
    return saluduni->registroPaciente(id);
}