// % notas completas 
// % declarar una variable 
// A = imread("nombre de la imagen");

// %imprimir las imagenes en pantalla
// imshow(variable);

// % imprimir la matriz de la imagen 
// disp(variable);

// % ver las propiedades de la imagen 
// whos(variable);

// %crear una imagen con una matriz, los números separados por , y para
// %declarar el final de cada renglon de la matriz ; 
// variable = [0, 1, 0; 1, 0, 1; 1, 1, 1]

// % guardar una imagen que se creó 
// imwrite(variable);

// % recortar una imagen
// A = imread(variable);  % Cargar una imagen
// rect = [50, 50, 200, 150];  % Definir el área de recorte: (x, y, ancho, alto)
// B = imcrop(A, rect);  % Recortar la imagen
// imshow(B);  % Mostrar la imagen recortada


// % convertir una imagen a binario, no es la versión más actualizada 
// nombre asignado a la variable = im2bw(variable a modificar); 

// ABW = imbinarize(A);  % Utiliza un umbral automático basado en el método de Otsu

// ABW = imbinarize(A, 0.5);  % Convertir usando un umbral personalizado de 0.5

// % convertir imagen a color a escala de grises 
// CEG=rgb2gray(C)

// % dividir una imagen en color RGB en sus tres componentes o canales individuales: rojo (r), verde (g) y azul (b).
// A = imread('imagen_color.jpg');  % Cargar la imagen en color
// [r, g, b] = imsplit(A);          % Dividir la imagen en los canales rojo, verde y azul

// % Mostrar los canales individuales
// imshow(r);   % Mostrar el canal rojo
// imshow(g);   % Mostrar el canal verde
// imshow(b);   % Mostrar el canal azul

// % ajusta la intensidad de los píxeles de una imagen para mejorar su contraste.
// A = imread('imagen_gris.jpg');      % Cargar la imagen
// AC = imadjust(A, [.4 .8]);          % Ajustar el contraste de la imagen
// % low_in = 0.4 y high_in = 0.8


// %  definir un rango de salida personalizado
// AC = imadjust(A, [.4 .8], [0.2 0.8]);
// % los valores de la imagen en el rango [0.4, 0.8] se mapean al rango de salida [0.2, 0.8], 
// % haciendo que los píxeles más oscuros no sean completamente negros y los más claros no sean completamente blancos.


// %sumar valores a la matriz, solo hay un valor límite de 255
// Ab =imadd(A, 50); 



// % concatena los canales rojo (r) y verde (g) de una imagen, mientras que el canal azul se llena con ceros (negro). 
// % El resultado es una nueva imagen RGB donde el canal azul ha sido eliminado, lo que produce una imagen compuesta 
// % solo por las intensidades de los canales rojo y verde.
// A = imread('imagen_color.jpg');     % Cargar una imagen en color
// [r, g, b] = imsplit(A);             % Separar los canales rojo, verde y azul
// nuevoRGB = cat(3, r, g, zeros(size(b)));  % Crear la nueva imagen sin el canal azul
// imshow(nuevoRGB);                   % Mostrar la nueva imagen
// nuevoRGB2 = cat(3, r, zeros(size(g)), b);   % Mostrar la nueva imagen



// % sumar y modificar el brillo 
// Abb = imadd(A, 100);              % Sumar 100 a cada valor de píxel


// % utilizamos substract para restar valores a las matrices 
// % los valores que se usen hay que recordar que tienen como límites 0 y 255
// % por lo que puede que no se noten cambios después de determinado líite 
// Bo = imsubtract(B, 50);


// %multiplicar los valores de la matriz, si multiplicas por fraccionarios el
// %valor se hace más bajo y se oscurece, de lo contrario se aclara 
// Amul = immultiply(A, 0.5);


// %division
// Bdiv = imdivide(B, 2);


// %operacion logicas 
// %cada píxel será 1 (blanco) solo si ambos píxeles correspondientes en Abin y Bbin son 1. Si uno o ambos son 0, el resultado será 0 (negro).
// Abin = imread('imagen_binaria1.png');  % Cargar la primera imagen binaria
// Bbin = imread('imagen_binaria2.png');  % Cargar la segunda imagen binaria
// ABand = and(Abin, Bbin);               % Realizar la operación AND entre ambas imágenes
// imshow(ABand);                         % Mostrar la imagen resultante




// % Operación not será una negación de la imagen 
// Anot= not(Bbin); %cambia los valores 





// 1.1. Concepto de imagen
// En general una imagen real es la representación visual de uno o varios objetos en un
// entorno especifico.

// Matemáticamente, una imagen suele ser una función de dos variables espaciales, por
// ejemplo, f[x, y], que representa a la función brillo f, en la ubicación cartesiana [x, y].
// Obviamente, también puede ser graficado en tres dimensiones, con el brillo mostrado en
// el eje z.

// Una vez convertida la información de la imagen en una matriz de números enteros, la
// imagen puede ser manipulada, procesada y mostrada por computadora.
// El procesamiento informático se utiliza para la mejora de imágenes, restauración, segmentación, descripción, reconocimiento, codificación, reconstrucción o transformación.
// En esta función la amplitud de f en cualquier par de coordenadas (x, y) se llama intensidad o nivel de gris de la imagen en ese punto.
// Cuándo x, y, y los valores de intensidad de f son todos cantidades finitas y discretas, se le
// llama imagen digital.

// El campo del procesamiento de imágenes digitales se refiere a la transformación de
// imágenes por medio de una computadora digital.
// Se debe tener en cuenta que una imagen digital se compone de un número finito de elementos, cada uno de los cuales tiene una ubicación y un valor particulares.
// Estos elementos se denominan elementos de imagen, pels o píxeles, éste último es el
// término que se usa más ampliamente para denotar a los elementos de una imagen digital.

// 1.2. Importancia del procesamiento de imágenes
// El procesamiento de imágenestiene como objetivo mejorar el aspecto de las imágenes
// y hacer más evidentes en ellas ciertos detalles que se desean hacer notar.
// La imagen puede haber sido generada de muchas maneras, por ejemplo, fotográficamente,
// o electrónicamente, por medio de monitores de televisión.
// El procesamiento de las imágenes se puede hacer, en general, por medio de métodos ópticos, o bien por medio de métodos digitales en una computadora.

// Procesamiento óptico de imágenes
// Los principios del procesamiento óptico de imágenes están bien establecidos desde el siglo
// pasado, cuando se desarrolló la teoría de la difracción de la luz.
// Sin embargo, su aplicación práctica data apenas del principio de la década de los sesenta,
// cuando se comenzó a disponer del rayo láser.
// El procesamiento óptico se basa en el hecho de que la imagen de difracción de Fraunhofer
// de una transparencia colocada en el plano focal frontal de una lente es una distribución
// luminosa que representa la distribución de las frecuencias de Fourier que componen la
// imagen, a la que se le llama técnicamente transformada de Fourier.

// Procesamiento digital de imágenes
// Al igual que en el caso del procesamiento óptico, los principios fundamentales del procesamiento digital de imágenes están establecidos hace muchos años, pero no se llevaban a
// cabo debido a la falta de computadoras.
// Con la aparición de las computadoras de alta capacidad y memoria, era natural que se
// comenzara a desarrollar este campo.
// Uno de los primeros lugares donde se empezó a realizar el procesamiento digital fue en
// el Jet Propulsion Laboratory, en 1959, con el propósito de mejorar las imágenes enviadas
// por los cohetes.
// Los resultados obtenidos en un tiempo relativamente corto fueron tan impresionantes que
// muy pronto se extendieron las aplicaciones del método a otros campos.
// El procesamiento digital de imágenes se efectúa dividiendo la imagen en un arreglo rectangular de elementos.
// Cada elemento de la imagen así dividida se conoce con el nombre de pixel.
// El siguiente paso es asignar un valor numérico a la luminosidad promedio de cada pixel.
// Así, los valores de la luminosidad de cada pixel, con sus coordenadas que indican su
// posición, definen completamente la imagen.
// Todos estos números se almacenan en la memoria de una computadora.
// El tercer paso es alterar los valores de la luminosidad de los pixeles mediante las operaciones o transformaciones matemáticas necesarias, a fin de hacer que resalten los detalles
// de la imagen que sean convenientes.
// El paso final es pasar la representación de estos pixeles a un monitor de alta definición.
// La utilidad del procesamiento de imágenes es muy amplia y abarca muchos campos.

// Realce
// Mejora y correcciones (degradaciones: bajo contraste, ruido, desenfoque (blur), orientación, ciertas distorsiones, etc.), especialmente para llevar a intervalos característicos de
// visión humana (visualizar).
// En principio no implica modelos del original o de la degradación (mejora empírica, sin
// que necesariamente coincida con imagen original o condiciones originales, que pueden no
// ser adecuadas: baja iluminación, o demasiada (por ejemplo una imagen del Sol, datos de
// ultrasonido, o en rayos infrarrojos, invisibles al ojo humano).
// Un posible objetivo final, es el almacenamiento, codificación y transmisión, sin análisis
// (no necesariamente).
// Criterios de calidad de imagen en función del grado de mejora o reducción de la degradación.
// Carácter más cualitativo que cuantitativo.
// Criterios de apreciación de rasgos e inclusive de estética.
// Gran dependencia de la imagen original, poca de la adquirida.

// Restauración
// Puede implicar mejora y correcciones, pero además, en base a modelos (del objeto o escena
// original, o de la degradación sufrida), implica recuperar (restaurar) mejor posible), o alguna de sus características?
// Corrección de distorsiones (geométricas Y/O del atributo): registro (alineación correcta
// con transformaciones, inclusive no-lineales), normalización, etc..
// El objetivo usualmente es menos de visualización y más de recuperación y/o análisis cuantitativo y automático (por eso a veces se le denomina también pre − procesamiento, en
// el sentido de preparar la información, uniformizarla, etc., para su estudio.
// Pero se puede desear solo una imagen puramente restaurada (como en las obras de arte).
// Utiliza criterios de fidelidad de imagen en función del grado de similitud con el original o
// alguna referencia, o del modelo de degradación o modelo de cómo debe ser el original.
// Es de carácter más cuantitativo que cualitativo.
// Tiene mayor dependencia de proceso de adquisición y degradación, menor dependencia
// de la imagen particular.

// 1.3. Representación digital
// Una imagen natural capturada con una cámara, un telescopio, un microscopio o cualquier otro tipo de instrumento óptico presenta una variación de sombras y tonos
// continua, imágenes de este tipo se conocen como imágenes analógicas.
// Para que una imagen analógica, pueda ser manipulada usando una computadora, primero
// debe convertirse a un formato adecuado.
// Este formato da como resultado a la imagen digital correspondiente.
// La transformación de una imagen analógica a otra discreta se llama digitalización y es el
// primer paso en cualquier aplicación de procesamiento de imágenes digitales.

// Clasificación de imágenes digitales
// Por número de dimensiones:
// • Imágenes 2D
// • Imágenes 3D
// Por paleta de colores:
// • Imágenes binarias
// • Imágenes en escala de grises

// El proceso de digitalización
// Digitalizar una imagen significa convertirla en un archivo que puede ser manipulado por
// la computadora, es decir en un conjunto de bits.
// Para digitalizar una imagen es necesario dividirla en unidades discretas, cada una de las
// cuales se llama píxel, una vez dividida la imagen, se le asigna un valor a cada uno de los
// pixeles.

// El proceso de digitalización consta de dos fases, muestreo y cuantificación.
// Un muestreo consiste en una subdivisión de la imagen analógica en porciones. Nos
// centraremos en imágenes 2D. Sólo se estudiarán particiones que envuelven polígonos regulares: triángulos, cuadrados y hexágonos.

// Cuantificación: La salida de estos sensores es un valor (amplitud) dentro de una
// escala (color). La salida pueden ser, o bien un único valor (escala de grises) o bien
// un vector con tres valores por polígono (RGB) que se corresponden con la intensidad
// de color rojo (R), verde (G) y azul (B). La escala de colores también tiene un rango
// discreto (por ejemplo, de 8-bits = 256 valores).

// La resolución (el grado de detalle discernible) de una imagen depende estrechamente de
// estos dos parámetros. Cuanto más se incrementan, más se aproxima la imagen digitalizada
// a la original.
// La cantidad de niveles de gris (resolución de intensidad) y la finura del mallado (resolución
// espacial) escojida, deben producir una imagen digital aceptable, en el sentido de que no
// sea perceptible al ojo humano el paso de un color a otro, entre dos píxeles consecutivos

// Una matriz es un arreglo bidimensional de números mediante los cuales es posible representar una imagen; en la computadora una matriz es una zona de almacenamiento
// continuo que contiene una serie de elementos del mismo tipo (elementos de matriz).
// Por lo tanto puede decirse que un matriz es la representación numérica de una imagen.
// Por lo tanto el acceso a cada elemento de la matriz imagen es importante al realizar cualquier procesamiento sobre ésta.

// Al proceso de acceder a cada uno de éstos elementos se conoce como indexación, existen
// diferentes formas de acceder a un elemento especifico de una matriz:
// - Por posición
// - En forma lineal
// - En forma lógica

// Indexación por posiciones de elementos
// El método más frecuente es especificar de manera explicíta los índices de lso elementos.
// Por ejemplo, para acceder a un único elemento de una matriz, especifique el número de
// fila seguido del número de columna del elemento.

// Indexación en forma lineal
// Otro método para acceder a los elementos de un arreglo es utilizar un único índice, independientemente del tamaño o de las dimensiones del arreglo.
// Este método se conoce como indexado lineal, aunque algunos softwares muestran arreglos
// según las formas y los tamaños definidos, en realidad se guardan en la memoria como una
// única columna de elementos.
// Una buena forma de visualizar este concepto es con una matriz.

// Indexación en forma lógica
// Utilizar indicadores lógicos verdaderos y falsos es otra manera útil de indexar en arreglos,
// especialmente al trabajar con instrucciones condicionales.
// Por ejemplo, suponer que se desea saber si los elementos de una matriz A son inferiores a
// los elementos correspondientes de otra matriz B.
// El operador menor que devuelve un arreglo lógico cuyos elementos son 1 cuando un elemento de A es más pequeño que el elemento correspondiente de B

// 1.5. Lectura, desplegado y operaciones sobre imágenes
// Como ya se señaló, una imagen digital está compuesta por un código numérico que
// luego la computadora representa en la pantalla mediante píxeles.
// Las imágenes digitales se pueden obtener por muchos medios (escáner o cámara digital
// por ejemplo) y son almacenadas en bits.

// El bit
// Un bit es la unidad de información que equivale a la elección de 0 ó 1, no pasa corriente o
// pasa corriente. En la combinación de ellos se basa la informática. 
// Como la información que podemos acumular en 1 bit es muy pequeña, se aunan en Bytes
// que es un conjunto de 8 bits. Así se obtienen:
// El Kilobyte (k): 1024 bytes
// El Megabyte (MB): 1024 Kb
// El Gigabyte (GB): 1024 MB

// La imagen digital es una traducción, la representación bidimensional de una imagen empleando bits.
// De acuerdo en cómo son obtenidas hay dos tipos de imágenes digitales:

// Imágenes Digitales Procesadas (IDP)
// Las IDP resultan de lo que se conoce como «procesamiento de imágenes», que consiste en almacenar digitalmente materiales visuales previos - por ejemplo, fotografías, reproducciones fotográficas, películas o vídeos - para trabajar posteriormente
// sobre ellos y alterarlos/manipularlos de múltiples maneras.
// Es decir, son imágenes obtenidas a partir de dispositivos de conversión analógica digital, como los escáneres o las cámaras digitales y pueden ser manipuladas digitalmente a través de software, pero éste no interviene directamente en su proceso de
// creación.

// Imágenes Digitales de Síntesis (IDS)
// Las IDS - también llamadas infografías- se sitúan en el entorno de la Computación
// Gráfica.
// Se obtienen a través de software, produciéndolas enteramente a través de algoritmos
// y sin necesidad de referente real, por ejemplo realizando dibujos con el ratón o por
// medio de programas de renderización 2D y 3D.

// 1.6. Clases de imágenes
// Existen dos clases de imágenes digitales y cada una de ellas posee características bien
// diferenciadas.

// Imágenes entramadas (raster): también llamadas mapas de bits, son el tipo de
// imágenes digitales mas comunes, casi todas las imágenes que se pueden descargar
// de internet son de este tipo, están formadas por pixeles donde a cada pixel se le asigna un color por ello a mayor resolución mayor calidad de la imagen. Un problema
// importante en estas imágenes es el llamado pixelado (efecto causado por visualizar
// una imagen o una sección de una imagen a un tamaño en el que los píxeles individuales son visibles al ojo). Este es el tipo de imagen que se utiliza en fotografías,
// ilustraciones digitales, o gráficos para web. Un editor muy común para este tipo de
// imágenes es Photoshop.

// Imágenes vectoriales: no están formadas por pixeles por lo que son independientes
// de la resolución lo que significa que al redimensionar la imagen no se produce el
// pixelado. Los gráficos vectoriales están formados por puntos de control que poseen
// curvas entre ellos y que son definidas gracias a formulas matemáticas que el editor
// de imágenes se encarga de calcular. Los vectores son muy utilizados en gráficos de
// baja complejidad como logotipos, iconos composiciones tipográficos. Los editores
// mas usados para crear y modificar gráficos vectoriales son Adobe Ilustrattor y Corel
// Draw. Una imagen vectorial puede ser convertida a mapa de bits en forma muy fácil,
// pero es muy complicado obtener la calidad de una imagen rasterizada en vectores
// ya que siempre se pierden detalles.

// A continuación distintos formatos de imágenes raster:

// Formato JPEG: Es uno de los formatos más populares para guardar imágenes digitales,
// este formato fue creado por Joint Photographic Experts Group, las siglas de este grupo
// son las que dan el nombre del formato JPEG.
// Se utiliza para trabajos de fotografía, debido a que es el que más colores puede captar.
// Una de sus principales ventajas es que se puede reducir el tamaño de la imagen sin que
// eso influya en su calidad y no admite transparencias.
// Utiliza un algoritmo de compresión muy complejo que permite reducir notablemente el
// tamaño de los archivos, por lo cual es generalmente óptimo para su uso en sitios web, y se
// utiliza cuando es más importante que el archivo sea pequeño, que el hecho que posee una
// gran calidad de imagen

// Formato GIF: Significa Graphic Interchange Format (Formato de Intercambio Gráfico)
// se utilizan para representar videos y animaciones.
// El formato fue presentado en 1987, pero ganó gran popularidad en los últimos años debido
// a las redes sociales.
// Sigue la técnica de compresión sin pérdida LZW. Significa que se mantiene la calidad
// original de los datos.
// Sin embargo, los GIFs sólo permiten pixeles de 8 bits, es decir, sólo hay 256 posible
// combinaciones de colores en el formato.
// Puesto que los GIFs almacenan fotos en movimiento, el tamaño del archivo es generalmente más grande que los JPEGs.
// Los GIFs se utilizan para expresar emociones y para entretenimiento, incluso para motivos
// educativos debido a su naturaleza interactiva.
// Sin embargo, la práctica común de usar GIFs es en plataformas sociales, como WhatsApp,
// Messenger, Tumblr, Twitter, etc.
// Tiene un formato ligero, lo que permite su reproducción en cualquier dispositivo.
// Cuentan con una capacidad alta de llamar la atención y permite la comprensión rápida y
// sin esfuerzo de lo que intentan transmitir.
// Generan notoriedad y engagement, es una forma de relacionarse rápidamente a un concepto y llegar a un público objetivo.
// Son un formato que cuenta con una gran capacidad de viralización.
// Formato PNG: El formato Portable Network Graphics es un formato de archivos de gráficos de mapa de bits (una trama).
// Fue desarrollado en 1995 como una alternativa gratuita al formato GIF, cuyos derechos
// pertenecen a Unisys (propietario del algoritmo de compresión LZW).
// Permite almacenar imágenes en blanco y negro (una profundidad de color de 16 bits por
// píxel) y en color real (una profundidad de color de 48 bits por píxel).
// Así como también imágenes indexadas, utilizando una paleta de 256 colores.
// Además, soporta la transparencia de canal alfa, es decir, la posibilidad de definir 256 niveles de transparencia, mientras que el formato GIF permite que se defina como transparente
// solo un color de la paleta.
// También posee una función de entrelazado que permite mostrar la imagen de forma gradual.
// Un archivo PNG comprende una firma, que permite indicar que se trata de un archivo
// PNG, seguida de una serie de elementos denominados fragmentos.
// Cada fragmento comprende 4 partes: el tamaño, un entero de 4 bytes no firmado, que
// describe el tamaño del fragmento; el tipo de fragmento, un código de 4 caracteres (4 bytes)
// comprendido por caracteres alfanuméricos ASCII (A-Z, a-z, 65 a 90 y 97 a 122) que
// permite establecer la naturaleza del fragmento.

// Formato TIFF: El formato Tagged Image File Format es un formato de archivos de gráficos de mapa de bits (una trama).
// TIFF es un formato flexible y extensible que es compatible con una amplia variedad de
// plataformas y aplicaciones de procesamiento de imágenes.
// Los archivos TIFF pueden almacenar imágenes con un número arbitrario de bits por píxel
// y pueden emplear diversos algoritmos de compresión.
// Se pueden almacenar varias imágenes en un único archivo TIFF de varias páginas.
// La información relacionada con la imagen (marca del analizador, equipo host, tipo de
// compresión, orientación, muestras por píxel, entre otros) se puede almacenar en el archivo
// y organizarse mediante el uso de etiquetas.
// El formato TIFF se puede extender según sea necesario mediante la aprobación y adición
// de nuevas etiquetas.

// Formato BMP: El formato Bit Map propio del sistema operativo Microsoft Windows.
// Puede guardar imágenes de 24 bits (16,7 millones de colores), 8 bits (256 tonos de gris) y
// menos.
// Dependiendo de la profundidad de color que tenga la imagen cada píxel puede ocupar 1 o
// varios bytes.
// En esta clase de archivos puede seleccionarse una compresión RLE (Run Length Encoding) sin pérdida de calidad.
// El uso más común de este formato consiste en generar imágenes de poco peso y no se
// aconseja utilizarlo en imágenes recién captadas, sino en imágenes una vez reducidas a los
// 24 bits.
// Se utiliza mucho para crear fondos para el escritorio de Windows, aunque, con el auge de
// Internet, ha ido perdiendo importancia en favor del formato JPEG, que produce archivos
// más pequeños y más rápidos viajando por la red.

// Formato AI: Adobe Ilustrattor es uno de los formatos vectoriales más usados y la opción
// por defecto del programa Adobe Illustrator.
// Entre las ventajas que ofrece se encuentra la de que, además de que las imágenes se pueden
// escalar sin pérdida de calidad de imagen como ocurre con todos los vectores, el formato
// guarda la transparencia del diseño original.
// Suele utilizarse para crear logotipos, infografías, gráficos digitales y diseños para impresión.

// Formato EPS: el formato Encapsulated PostScrip y es un formato antiguo de archivos
// vectoriales.
// Uno de los grandes beneficios de usar este formato vectorial es que los archivos .EPS son
// compatibles con versiones nuevas y antiguas de Adobe Illustrator y otros programas de
// edición vectorial; sin embargo, no es el más indicado para diseños con transparencias.
// Muchos impresores prefieren el formato .EPS para asegurarse de que es compatible con
// su versión de los softwares de edición.

// Formato PDF: el formato Portable Document File no es el formato vectorial por excelencia, un archivo .PDF también puede usarse como vectorial.
// La gran ventaja es que se trata del formato más universal y puede abrirse con software
// específico de edición con Adobe Illustrator, pero también con programas gratuitos de solo
// lectura o con un navegador web.
// Además, es muy útil a la hora de enviar archivos a imprimir, ya que contiene toda la información necesaria del diseño y no suele provocar problemas de compatibilidad.

// Formato SVG: el formato Scalable Vector Graphics es un formato basado en XML.
// Su uso está muy extendido en el diseño web gracias a que está optimizado como lenguaje
// de programación y puede ser indexado, por eso suele utilizarse para logotipos, botones y
// otros elementos web.

// 1.7. Escala de grises
// Se denomina escala de grises a un modo de color en el que a cada color se le asigna un
// valor en una graduación de gris, de tal manera que las imágenes están compuestas por
// una serie de grises, desde el negro hasta el blanco variando gradualmente en intensidad de
// grises.
// En las imágenes binarias, por el contrario, los colores se representan sin tonalidades de
// gris entre ambos, únicamente en blanco o en negro.


// La escala de grises es un modo de color o estado pictórico, que permite representar una
// imagen digital mediante distintos tonos de gris.
// En esta escala cada pixel de la imagen toma un color que es igual a un tono de gris.
// Al estar representada en escala de grises, la imagen toma los colores que comúnmente
// se conocen como en blanco y negro (B/N), aunque estrictamente hablando deberíamos
// utilizar el término escala de grises, ya que no sólo se utilizan el blanco y el negro, sino
// también los tonos grises intermedios 

// 1.8. Imágenes bi-nivel
// Una imagen binaria es una imagen digital que tiene únicamente dos valores posibles
// para cada píxel. Normalmente, los colores utilizados para su representación son negro y blanco, aunque puede usarse cualquier pareja de colores

// Usualmente, los valores 1 y 0 representan regiones claras y oscuras o el objeto y su fondo.
// Para obtener una cuantificación más fina de la intensidad de la luz de las imágenes de
// video, generalmente se usa un byte por píxel, lo que lleva a valores enteros que varían de
// 0 (negro) a 255 (blanco).

// La binarización de una imagen consiste en un proceso de reducción de la información
// de la misma, en la que sólo persisten dos valores: verdadero y falso. En una imagen digital, estos valores, verdadero y falso, pueden representarse por los valores 0 y 1 o, más
// frecuentemente, por los colores negro (valor de gris 0) y blanco (valor de gris 255).
// En el proceso y análisis de imagen, la binarización se emplea para separar las regiones
// u objetos de interés en una imagen del resto. Las imágenes binarias se usan en operaciones booleanas o lógicas para identificar individualmente objetos de interés o para crear
// máscaras sobre regiones.

// Objetos binarios
// La formación de objetos binarios en una imagen es una consecuencia directa del proceso
// de binarización de la misma.
// Un objeto binario es una porción de la imagen formada por un conjunto de pixeles con
// valor verdadero (p. ej. blancos) conectados entre sí y totalmente rodeados por pixeles con
// valor falso (p. ej. negro)

// 1.9. Celdas de resolución
// En una imagen digital la resolución viene determinada por la cantidad de elementos
// independientes por unidad de medida lineal.

// Para entenderlo en un lenguaje más coloquial, la cantidad de celdas negras por unidad de
// medida lineal.
// La unidad de medida lineal utilizada para la resolución son los pixeles por pulgada (ppi),
// que indican los pixeles o celdas por pulgada lineal.
// La resolución de la imagen se divide en cuatro tipos distintos:

// 1. Resolución Espacial: Indica la capacidad del sistema para distinguir el objeto más
// pequeño sobre una imagen. Depende de la distancia de captura al objeto y del tamaño del píxel (ppp o número de píxeles por pulgada).

// 2. Resolución Geométrica: Es la diferencia que hay entre la posición teórica de un
// píxel y la real.

// 3. Resolución Espectral: Se trata del número y rango de longitud de onda del espectro
// electromagnético registrado en cada banda de la imagen. En el caso de los sistemas
// fotográficos podemos encontrar películas pancromáticas, color natural (RGB), infrarrojo b/n o infrarrojo color.

// 4. Resolución Radiométrica: Conocida también como profundidad o contraste radiométrico, indica el número de niveles de gris que son recogidos por cada banda. En
// imágenes digitales lo más habitual es que contengan 256 niveles por píxel (de 0 a
// 255).
// La resolución es una unidad de densidad de imagen, es decir, de concentración de píxeles
// en línea recta.

// Así, una imagen a 72 PPI tendrá 72 celdas distribuidas a lo largo de una línea de 2,54
// cm., mientras que una imagen a 300 PPI contendrá 300 celdas a lo largo de una línea de la
// misma longitud.
// Como puede observarse, la longitud de la línea sigue siendo la misma, lo que cambia es el
// número de celdas o píxeles que se introducen en ese espacio.

// La resolución también se puede expresar en pixels por centímetro (ppcm).
// Para calcular la equivalencia entre ppi y ppcm, se tiene que partir del conocimiento que
// una pulgada es igual a 2,54 cm, así que dependiendo de la medida que se tenga será dividir
// entre 2,54 (ppi a ppcm) y multiplicar por 2,54 (ppcm a ppi)

// Tramado digital
// El tramar las imágenes es una necesidad por la limitación de la impresión, para poder
// conseguir el efecto óptico de una imagen de tono continuo

// Para entenderlo de otra forma, se hace creer ver al ojo un tono continuo donde sólo hay
// una sucesión de puntos.
// Antes se hacía de forma convencional interponiendo una trama entre la imagen original y
// el material sensible, ahora eso se hace mediante el tramado digital.

// La lineatura de salida es el número de puntos por unidad de longitud (pulgadas o centímetros).
// La conversión de líneas por pulgadas a líneas por centímetro y viceversa es igual que lo
// visto en el apartado anterior.
// Las lineaturas más habituales son: 50, 65, 80, 100, 120, 133, 150, 175 y 200 líneas/pulgada

// Relación entre resolución de imagen y resolución de impresión
// La resolución de la impresora es distinta de la resolución de imagen, pero sí están relacionadas.
// Al imprimir una fotografía de gran calidad en impresoras de inyección de tinta, una resolución de imagen de al menos 220 PPI suele ofrecer resultados aceptables.
// Asimismo, existe una clasificación estandarizada de las resoluciones óptimas más frecuentes según el sistema de impresión que se puede usar como guía de referencia:
// Impresión offset: 300 PPI (imágenes monocromas: 600 PPI)
// Impresión huecograbado: 300 PPI
// Impresión flexografía: de 150 a 300 PPI
// Impresión serigrafía: de 100 a 200 PPI
// Impresión digital de gran formato: de 72 a 150 PPI
// Impresión digital de pequeño formato: de 200 a 300 PPI

// 1.10. Conectividad y vecindad
// El propósito de la conectividad es separar los objetos de la escena:
// Del fondo
// Unos de otros
// De los agujeros
// Se trata de etiquetar cada región de pixeles continuos con un valor diferente.

// Definición (Conectividad)
// Es la proximdad espacial entre pixeles de la imagen binaria.

// 1.11. Componentes conectados
// Cuando en una imagen digital se haga referencia a un pixel en particular se emplearán
// letras minúsculas como p y q.
// Y, a un subconjunto de pixeles de una imagen mediante la letra mayúscula S.
// A continuación algunas definiciones:
// Un pixel p es adyacente de un pixel q si están conectados.
// Dos subconjuntos S1 y S2, son adyacentes si algún pixel adyacente de S1 es adyacente a un pixel de S2.
// Un camino desde un pixel p de coordenadas (x, y) a un pixel p de coordenadas
// (a, b) es una sucesión de diversos pixeles de coordenadas (x0, y0);(x1, y1);...;(xn, yn)
// donde (x0, y0) = (x, y) y (xn, yn) = (a, b);
// Si p y q son pixeles de un subconjunto S especifico de una imagen, se dice que p
// está conectado a q dentro de S si existe un camino desde p hasta p que consista
// totalmente de pixeles de S.
// Medidas de distancia
// Para los pixeles p, q y z, de coordenadas (x, y),(a, b) y (u, v) respectivamente, D es una
// función distancia si:
// 1. D(p, q) ≥ 0(D(p, q) = 0 si y sólo si p = q)
// 2. D(p, q) = D(q, p)
// 3. D(p, z) ≤ D(p, q) + D(q, z)
// La distancia euclídea entre p y q está definida por:
// De(p, q) = p
// (x − a)
// 2 + (y − b)
// 2
// La distancia D4 (distancia city block) entre dos puntos p y q se define como:
// D4(p, q) = |(x − a)| + |(y − b)|
// La distancia D8 (distancia tablero de ajedrez) entre dos puntos p y q se define como:
// D8(p, q) = max(|x − a|), |(y − b)|)

// Operaciones aritmético lógicas sobre pixeles
// Las operaciones aritmético-lógicas se emplean con mucha frecuencia en el procesamiento
// de imágenes, a continuación algunas de ellas:

// Adición: p + q
// La suma de pixeles puede usarse para resaltar los contornos de una imagen o, si se suma
// un valor constante a todos los pixeles de una imagen el efecto es aumentar su brillo.

// Substracción: p − q
// El uso común de esta técnica es restar variaciones de iluminación de fondosasí como en la
// substracción absoluta para detectar cambios.

// Multiplicación (escalado): p × q
// En general un factor de escala mayor a 1 hará la imagen más brillante, y si es menor a 1 la
// hará más oscura, esta técnica produc mejores resultados que la suma.

// División: p/q
// Uno de los usos más importantes de la división es la detección de movimiento (cambios),
// en lugar de obtener el cambio absoluto se obtiene la razón entre los pixeles correspondientes.

// AND: p&q
// El uso más común de esta operación es calcular la intersección entre dos imágenes,por
// ejemplo para detectar aquellos objetos en una escena que no han tenido movimiento.

// OR: p||q
// Mediante esta operación se obtiene la unión de dos imágenes.

// XOR: p ⊕ q
// Se utiliza para detectar cambios en imágenes binarias preferentemente.

// NOT: ∼ p
// Esta operación cambia la polaridad de la imagen.

// Imágenes RGB (Truecolor)
// Una imagen RGB, a veces denominada imagen de color verdadero, se almacena en MATLAB
// como una matriz de datos m × n × 3 que define los componentes de color rojo, verde y
// azul para cada píxel individual.
// Las imágenes RGB no utilizan paleta, el color de cada píxel está determinado por la combinación de las intensidades de rojo, verde y azul almacenadas en cada plano de color en
// la ubicación del píxel.
// Los formatos de archivo de gráficos almacenan imágenes RGB como imágenes de 24 bits,
// donde los componentes rojo, verde y azul son de 8 bits cada uno.
// Esto produce un potencial de 16 millones de colores.
// La precisión con la que se puede replicar una imagen de la vida real ha dado lugar al
// sobrenombre de imagen en color verdadero.
// Una matriz RGB MATLAB puede ser de clase double, uint8 o uint16.
// En una matriz RGB de clase double, cada componente de color es un valor entre 0 y 1.
// Un píxel cuyos componentes de color son (0,0,0) se muestra como negro y un píxel cuyos
// componentes de color son (1,1,1 ) se muestra en blanco.

// Mostrar imágenes Truecolor
// Las imágenes Truecolor (también llamadas imágenes RGB), representan los valores de
// color directamente, en lugar de a través de un mapa de colores.
// Una imagen de color verdadero es una matriz m × n × 3.
// Para cada píxel (r, c) en la imagen, el color está representado por el triplete (r, c, 1: 3).
// Para mostrar una imagen en color verdadero, llamar a la función imshow o abrir la aplicación Visor de imágenes.
// Por ejemplo, este código lee una imagen de color verdadero en el espacio de trabajo de
// MATLAB y luego muestra la imagen.
// Esta documentación utiliza el nombre de variable RGB para representar una imagen de
// color verdadero en el espacio de trabajo
// >RGB = imread(’peppers.png’);
// >imshow(RGB)
// El tipo de dato matriz, que contendrá una imagen puede ser de varios tipos (según el tipo
// de dato de cada pixel):
// double: Doble precisión, números en punto flotante que varían en un rango aproximado de -10308 a 10308 (8 bytes por elemento)
// uint8: Enteros de 8 bits en el rango de [0,255] (1 byte por elemento)
// uint16: Enteros de 16 bits en el rango de [0, 65535] (2 bytes por elemento)
// uint32: Enteros de 32 bits en el rango de [0, 4294967295] (4 bytes por elemento)
// int8: Enteros de 8 bits en el rango de [-128, 127] (1 byte por elemento)
// int16: Enteros de 16 bits en el rango de [-32768, 32767] (2 bytes por elemento)
// int32: Enteros de 32 bits en el rango de [-2147483648,2147483647] (4 bytes por
// elemento) logical: Los valores son 0 ó 1 (1 bit por elemento)

// Agregar barra de color a la imagen desplegada
// Este ejemplo muestra cómo mostrar una imagen en escala de grises con una barra de color
// que indica la asignación de valores de datos a colores.
// Ver la correspondencia entre los valores de los datos y los colores mostrados mediante
// el uso de una barra de colores es especialmente útil si está mostrando datos de rango no
// convencionales como una imagen, la función es:
// colorbar