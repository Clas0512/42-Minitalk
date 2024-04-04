<div><video src="https://github.com/Clas0512/42-Minitalk/assets/97125451/6834de46-4a07-4f71-aa43-b3da6018b014" controls autoplay muted></video></div>

# Client-Server Communication Program

Bu proje, bir istemci ve bir sunucu arasında iletişim kurabilen bir iletişim programını içerir. Sunucu öncelikle başlatılır ve başlatıldıktan sonra PID'sini yazdırır. İstemci, sunucunun PID'sini ve gönderilecek olan dizeyi parametre olarak alır. İstemci, parametre olarak aldığı dizeyi sunucuya gönderir ve sunucu bu dizeyi aldıktan sonra ekrana yazdırır.

## Özellikler

- Sunucu başlatıldığında PID'sini yazdırır.
- İstemci, sunucuya belirtilen dizeyi gönderir.
- Sunucu, gönderilen dizeyi alır ve ekrana yazdırır.
- Sunucu, birden fazla istemciden gelen dizeleri ardışık bir şekilde alabilir ve yeniden başlatılmasına gerek kalmaz.
- İstemci ve sunucu arasındaki iletişim yalnızca UNIX sinyalleri kullanılarak gerçekleştirilir.
- İstemci ve sunucu, SIGUSR1 ve SIGUSR2 sinyallerini kullanabilir.

## Gereksinimler

- Projenin çalıştırılması için makefile kullanılabilir.
- Proje, olası hataları etkili bir şekilde ele almalıdır.
- Bellek sızıntısı olmamalıdır.
- Programlar, beklenmeyen hatalardan kaynaklanan çökmelere neden olmamalıdır.
- Yalnızca aşağıdaki işlevler kullanılabilir: write, ft_printf (ve eşdeğerler), signal, sigemptyset, sigaddset, sigaction, kill, getpid, malloc, free, pause, sleep, usleep ve exit.

## Kurulum

1. Repoyu klonlayın:

``` bash
git clone <repository_url>
```

2. Proje dizinine gidin:
``` bash
cd <project_directory>
```

3. Makefile'ı çalıştırarak projeyi derleyin:
```
make
```

## Kullanım

### Sunucu Başlatma
``` bash
./server
```

### İstemci Çalıştırma
``` bash
./client <server_PID> <string_to_send>
```
