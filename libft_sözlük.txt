isalpha -> verilen char bir alfabetik karakter ise 1 değilse 0 döndürür.
isdigit -> verilen char bir rakam ise 1 değilse 0 döndürür.
isalnum -> verilen char bir alfaberik karakter ya da rakam ise 1 değilse 0 döndürür.
isascii -> verilen char ifadenin ascii de 0 ile 127 arasında (decimal) balıyor.
isprint -> verilen char karakter eğer yazılabilirse 1 yazılamıyorsa 0 döndürür.
ft_strlen -> verilen dizinin uzunluğunu döndürür.

ft_memset -> verilen char ifadede verilen (len) kadar (c) karakterini doldurur. Değiştirir. Sansüz gibi.
"mem" kelimesi, bellek anlamına gelir, yani bu fonksiyonun bir bellek bloğu üzerinde işlem yaptığını gösterir.
"set" ise, bu bloğu doldurmak (veya ayarlamak) işlemini ifade eder, yani belleği belirli bir değerle doldurur. 

ft_bzero -> memset fonk. kullanılarak verilen diziyi 0'lar.

ft_memcpy -> verilen kaynak dizideki ifadeyi (n) kadar hedef diziye kopyalar.
bellekteki bir bölgeden başka bir bölgeye veri kopyalamak için kullanılan bir fonksiyondur.
bellek alanlarının içeriklerini kopyalamak için kullanılır.

Hedef ve kaynak bellek alanlarının örtüşmesi durumunda tanımsız davranış gösterebilir.
Yani, kaynak ve hedef bellek bölgeleri çakışıyorsa, memcpy beklenmedik sonuçlar verebilir.

herhangi bir bellek bölgesinden (örn. dizi, yapı vb.) diğerine belirli bir bayt sayısı kadar kopyalamak için kullanılır.
memcpy, kopyalama işlemini bayt sayısı ile kontrol eder ve null karakterle ilgili bir işlem yapmaz. 
Dolayısıyla, hedef bellek alanının neyi temsil ettiğini anlamaz.

ft_memmove -> bellekteki bir bölgeden başka bir bölgeye veri kopyalamak için kullanılan bir fonksiyondur.
Hedef ve kaynak bellek alanları çakışıyorsa bile doğru bir şekilde çalışır. 
memmove'un önce kaynak veriyi geçici bir alana kopyalayarak işlemi güvenli bir şekilde gerçekleştirmesi 
sayesinde mümkündür.
Null karakterle ilgili bir işlem yapmaz; belirtilen bayt sayısını kopyalar.

ft_strlcopy ->  bir diziden (string) başka bir diziye güvenli bir şekilde kopyalama yapmak için 
kullanılan bir fonksiyondur.
opyalama işlemi, kaynak dizgedeki null karakter ('\0') ile sona erer. 
Bu nedenle, strcpy kullanıldığında, hedef dizinin yeterli alanı olmalıdır (null karakter dahil).

ft_strlcpy -> buffer overflow (tampon taşması) hatalarını önlemek amacıyla, hedef dizinin 
boyutunu kontrol eder ve bu sayede bellek hatalarını azaltır.

ft_strlcat -> Bir diziyi (kaynak) başka bir dizinin (hedef) sonuna güvenli bir şekilde eklemek için kullanılır.

ft_toupper -> bir karakteri büyük harfe dönüştürmek için kullanılır. 
küçük harfleri büyük harfe dönüştürürken, büyük harfler ve diğer karakterler için hiçbir değişiklik yapmaz. 

ft_tolower -> bir karakteri küçük harfe dönüştürmek için kullanılır.
büyük harfleri küçük harfe dönüştürürken, küçük harfler ve diğer karakterler için hiçbir değişiklik yapmaz.

ft_strchr -> bir karakter dizisi içinde belirtilen bir karakterin ilk görünümünü bulmak için kullanılır.
verilen bir karakter dizisinde belirli bir karakterin yerini bulur ve bu karakterin bulunduğu konumdan itibaren 
tüm diziyi döndürür.

ft_strrchr -> bir karakter dizisinde belirtilen bir karakterin son görünümünü bulmak için kullanılır.
verilen bir karakter dizisinde belirli bir karakterin son görünümünü bulur ve bu karakterin bulunduğu 
konumdan itibaren diziyi döndürür.

ft_strncmp -> iki dizgeyi (string) belirtilen bir uzunluğa kadar karşılaştırmak için kullanılır.

ft_memchr -> bellek alanında belirli bir karakteri aramak için kullanılan bir fonksiyondur. Bu fonksiyon, 
verilen bir bellek bloğunda (bir dizide) belirli bir karakteri bulur ve bu karakterin bulunduğu ilk adresi döner. 

ft_memcmp ->  iki bellek alanını karşılaştırmak için kullanılan bir fonksiyondur. Bu fonksiyon, belirtilen iki 
bellek bloğunun (dizi, yapı vb.) içeriğini byte byte karşılaştırır ve aşağıdaki sonuçları döner.
Eğer ilk bellek bloğunun içeriği, ikinci bellek bloğunun içeriğinden daha küçükse, negatif bir değer döner.
Eğer iki bellek bloğu eşitse, sıfır döner.
Eğer ilk bellek bloğunun içeriği, ikinci bellek bloğunun içeriğinden daha büyükse, pozitif bir değer döner.

ft_strnstr -> bir dizide belirli bir alt diziyi (substring) aramak için kullanılan bir fonksiyondur. 
Bu fonksiyon, arama işlemini belirli bir uzunluk (n) ile sınırlandırır, yani sadece ilk n karakter içinde 
arama yapar.

ft_atoi -> bir dizeyi (string) tam sayıya (integer) dönüştürmek için kullanılan bir fonksiyondur.

ft_calloc -> dinamik bellek ayırmak için kullanılan bir fonksiyondur
ayırdığı bellek alanını sıfır ile başlatır. 
Fonksiyon, iki parametre alır: 
gerekli eleman sayısı ve her bir elemanın boyutu; 
toplamda belirtilen miktarda sıfırlarla doldurulmuş bellek döner.

ft_strdup -> verilen bir karakter dizisinin (string) bir kopyasını oluşturup yeni bir bellek alanına 
yerleştirir ve bu kopyanın işaretçisini döndürür.

ft_substr -> bir dize (string) üzerinde belirli bir başlangıç noktasından itibaren 
belirli bir uzunlukta alt dize (substring) oluşturmak için kullanılır.

ft_strjoin -> iki stringi birleştirip yeni bir string oluşturan bir fonksiyondur.

ft_strtrim -> bir stringin başındaki ve sonundaki belirli karakterleri (set) temizlemek için kullanılıyor.
bir karakter dizisinin (string) başındaki ve sonundaki boşluk karakterlerini (veya belirtilen karakterleri)
temizleyerek yeni bir dizgi döndürmek için kullanılır.

ft_split -> bir karakter dizisini (string) belirli bir ayırıcıya göre parçalara ayırarak, her bir parçayı bir dizi içinde saklayan bir fonksiyondur. 
Bu fonksiyon, ayırıcıların arasındaki alt dizgileri (substring) elde etmek için kullanılır.

ft_itoa -> bir tam sayıyı stringe dönüştürmek için kullanılıyor.

ft_strmapi -> verilen bir string üzerindeki her karakter için belirtilen bir işlevi (callback) 
uygular ve sonuçları yeni bir stringde toplar.

ft_striteri -> bir string üzerinde belirli bir işlemi gerçekleştirmek için her bir karaktere erişim sağlar. 
Bu işlem, her karakterin indeksini ve karakterin kendisine referansını kullanarak belirli bir işlevi 
çağırmayı içerir.

ft_putchar_fd -> belirli bir dosya tanıtıcısına (file descriptor) bir karakter yazmak için kullanılır.
verilen bir karakteri belirtilen dosya tanıtıcısına yazar. Bu, genellikle konsola veya bir dosyaya çıktı vermek için kullanılır.

ft_putstr_fd -> belirtilen bir dosya tanıtıcısına (file descriptor) bir string yazmak için kullanılır.
bir stringi belirtilen dosya tanıtıcısına yazar. Eğer verilen string NULL ise, (NULL) ifadesini yazar.

ft_putendl_fd -> belirtilen bir dosya tanıtıcısına (file descriptor) bir string yazdıktan sonra bir yeni satır karakteri ekler.
verilen bir stringi belirli bir dosya tanıtıcısına yazar ve ardından bir yeni satır karakteri ('\n') ekler.

ft_putnbr_fd -> Bu fonksiyon, belirli bir dosya tanıtıcısına (file descriptor) bir tamsayıyı yazar.
verilen bir tamsayıyı belirtilen dosya tanıtıcısına yazar. Pozitif ve negatif sayılar için uygun şekilde çalışır.
