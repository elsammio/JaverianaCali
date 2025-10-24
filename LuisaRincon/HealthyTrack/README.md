classDiagram
direction TB
class Usuario {
- String nombreCompleto
- String identidad
- Vector  habitos

        + Usuario(string, string)
	    + crearHabito(Categoria * categoriaRelacionada)
	    + consultarHabitos()
	    + mostrarResumen()
    }

    class Habito {
	    - string descripcion
	    - int id
	    - Vector  ~ RegistroDiario*~ registros 
	    - Categoria * categoria
	    + calcularIndice()
	    + contarDiasCumplidosHabito()
    }

    class HealthyTrack {
	    - Unordermap ~ string, Categoria*~ categoriasDisponibles
	    - Vector ~ Usuario* ~ usuarios
	    + agregarCategoria()
	    + agregarUsuario()
	    + crearHabito() // pida la categoria, y llame e metodo coorcto de la clae usuario
    }

    class Categoria {
	    - string nombreCategoria
	    - int metaConsitencia
	    - float factorMotivacional
	    - Vector  recomendaciones
	    + Categoria (string, int, float)
        + mostrarRecomendacion()
        + agregarRecomendacion(string)
    }

    class RegistroDiario {
	    - string fechaRegistro
	    - boolean habitoCumplido
	    - int nivelEnergia
    }

    Usuario o-- Habito
    Habito o-- RegistroDiario
    Habito --> Categoria
HealthyTrack o-- Usuario
HealthyTrack o-- Categoria