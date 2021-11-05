# esp8266-iot
Actividad de ejemplo de IoT utilizando ESP8266 para obtener el valor de un potenciómentro y monitorearlo a través de la plataforma Blynk.

## Instalación de ESP8266 en el IDE de Arduino
Para poder utilizar placas con el chip ESP8266 en el IDE de Arduino primero debe instalarla. Siga el tutorial descrito [aquí](https://randomnerdtutorials.com/how-to-install-esp8266-board-arduino-ide/).

## Instalación librería Blynk
1. Descargar la librería Blynk [aquí](https://github.com/blynkkk/blynk-library).
2. En el IDE de Arduino ir a Programa -> Incluir Librería -> Añadir biblioteca .ZIP y luego buscar la carpeta descargada y seleccionarla.

## Uso de Blynk
1. Ingresar a [www.blink.com](https://blynk.io).
2. Registrarse.
3. Iniciar sesión.
4. Crear un nuevo Template. Asignarle un nombre cualquiera, Hardware ESP8266 y Connection Type WiFi.
5. En "Datastreams" editar "INT V1" y dejar su valor máximo en 1023.
6. Crear un nuevo Dispositivo: New Device -> From template -> Elegir el template creado y asignarle un nombre al dispositivo.
7. Bajar la app desde la Play Store o App Store.
8. Al hacer login en la app aparecerán los dispositivos y templates creados.

## Circuito y código
1. Conectar un potenciómetro a los pines 3V3, GND y A0.
2. En su navegador web ingrese a [www.blink.com](https://blynk.io) con sus datos, y seleccione su dispositivo. Luego, en la pestaña "Device Info" encontrará 3 lineas de código que deberá copiar y pegar reemplanzando las 3 primeras lineas de código compartido en este repositorio.
3. En las lineas 12 y 13 del código compartido en este repositorio introduzca el nombre de usuario y contraseña de su red WiFi.
4. Subir el código que se encuentra en este repositorio.