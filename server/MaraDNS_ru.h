#define L_LOG " Журнал: "
#define L_N "\n"
#define L_FATAL "Критическая ошибка: "
#define L_ACL_LIST_RECURSE "Не удалось создать список ACL ip для рекурсивных запросов"
#define L_INIT_SPAMMERS "Не удалось создать спам-список"
#define L_RANDOM_IF_RECURSE "random_seed_file должен существовать, если включен рекурсивный DNS"
#define L_INVALID_CACHESIZE "maximum_cache_size имеет недопустимое значение. Возврат к значению по умолчанию."
#define L_BIND2ADDR "Привязка к адресу "
#define L_CAUGHT_PIPE "Пойманный SIGPIPE"
#define L_CAUGHT_SIG "Пойманный сигнал"
#define L_BAD_QUERY "Получен неправильный запрос: "
#define L_SYSERROR ""Система сообщила"
#define L_MLC "Не удалось создать строку mararc_loc"
#define L_MLL "Не удалось задать язык для строки mararc_loc"
#define L_EC "Не удалось создать строку errors"
#define L_EL "Не удалось задать язык для строки errors"
#define L_UC "Не удалось создать строку uidstr"
#define L_UL "Не удалось задать язык для строки uidstr"
#define L_VC "Не удалось создать строку verbstr"
#define L_VL "Не удалось задать язык для строки verbstr"
#define L_MC "Не удалось создать строку maxpstr"
#define L_ML "Не удалось задать язык для строки maxpstr"
#define L_CC "Не удалось создать строку chrootn"
#define L_CL "Не удалось задать язык для строки chrootn"
#define L_KQC "Не удалось создать строку kvar_query"
#define L_KQL "Не удалось задать язык для строки for kvar_query"
#define L_BAC "Не удалось создать строку bins_address "
#define L_BAL "Не удалось задать язык для строки bind_address"
#define L_IC "Не удалось создать строку incoming"
#define L_IL "Не удалось задать язык для строки incoming"
#define L_UCC "Не удалось создать строку uncomp"
#define L_UCL "Не удалось задать язык для строки uncomp"
#define L_LOC_MARARC "Ошибка расположения файла mararc"
#define L_MARARC_ARG "Не удалось получить mararc из командной строки"
#define L_USAGE "Использование: mararc [-f mararc_location]"
#define L_MARARC_PARSE "Ошибка при синтаксическом анализе содержимого файла mararc"
#define L_MARARC_LINE "Ошибка при синтаксическом анализе содержимого файла mararc в строке "
#define L_ERROR_CODE "Код ошибки: "
#define L_KVAR_Q "Не удалось создать kvar_query"
#define L_MAXPROC "Проблема с получением значения maxprocs.\nПеред запуском сервера MaraDNS должен быть установлен maxprocs."
#define L_MAXPROC_NUM "Проблема преобразования maxprocs в число.\nЭто должно быть ненулевое число."
#define L_MAXPROC_SET "Невозможно установить максимальное количество процессов."
#define L_MAXPROC_MAX "maxprocs не может быть больше 5000.\nmaxprocs установлен на 5000."
#define L_CHROOT_KVAR "Проблема получения chroot kvar.\nВы должны установить chroot_dir, если Вы запускаете его от root."
#define L_CHROOT_NT "Проблема создания строки chroot.\nУбедитесь, что каталог chroot не содержит 200 символов."
#define L_CHROOT_CHANGE "Проблема перехода в каталог chroot.\nУбедитесь, что chroot_dir указывает на действительный каталог."
#define L_CHROOT_DO "Проблема с изменением корневого каталога."
#define L_CHROOT_SUCCESS "Корневой каталог изменён."
#define L_NOBIND "Проблема получения chroot kvar.\nВы должны установить IP-адрес для bind_address, который будут слушать MaraDNS."
#define L_BINDFAIL "Проблема привязки к порту 53.\n"
#define L_BIND_SUCCESS "Сокет открыт на UDP-порту 53"
#define L_NOUID "Проблема получения maradns_uid kvar.\nВы должны установить maradns_uid, если Вы запускаете его от root."
#define L_BADUID "maradns_uid меньше 10 или не число.\nЭтот идентификатор должен иметь значение 10 или более."
#define L_NODROP "Не удалось удалить root uid"
#define L_STILL_ROOT "Кажется, мы всё ещё root."
#define L_DROP_SUCCESS "Привилегии root удалены."
#define L_BEROOT "Проблема привязки к порту 53.\nВы должны запустить его от root."
#define L_NOBIGHASH "Не удалось создать большой хэш."
#define L_NOPOPULATE "Ошибка запуска программы populate_main. Пожалуйста, прочтите FAQ MaraDNS."
#define L_POPULATE_FATAL "Эта ошибка в заполнении хеша фатальна."
#define L_RRS_LOADED "Все RR были загружены."
#define L_DATAWAIT "Ожидание данных на 53-м порту."
#define L_GOTDATA "Получено сообщение, обработка."
#define L_INITCACHE_FAIL "Ошибка init_cache(). Если Вы видите это, то это ошибка.\nПожалуйста, прочтите FAQ MaraDNS."
#define L_ERROR_VALUE "Код ошибки (для разработчиков программного обеспечения): "
#define L_INITCRYPTO_FAIL "Ошибка init_crypto(). Если Вы видите это, то это ошибка.\nПожалуйста, прочтите FAQ MaraDNS."
#define L_OPENSEED_FAIL "Не удалось открыть файл random_seed_file"
#define L_NEED16BYTES "Файл random_seed_file должен быть длиной 16 байт или более."
#define L_THISIS "Версия MaraDNS"
#define L_COMPILED "Скомпилировано в"
#define L_RTFM "Для получения информации, используйте 'man maradns'"
#define L_SETROOTNS "root_servers[\".\"] или upstream_servers[\".\"] должны быть установлены в\nфайле mararc,\nнапример, root_servers[\".\"] = \"198.41.0.4\"\nКроме того, root_servers = {} (или upstream_servers = {}) должны предшествовать\nлинии"
#define L_BADROOTNS "root_servers[\".\"] (или upstream_servers) в файле mararc \nявляются недействительными.\nПример правильного значения: root_servers[\".\"] = \"198.41.0.4\""
#define L_CHOOSEONE "В файле mararc одновременно установлены параметры root_servers и upstream_servers.\nПожалуйста, установите только один параметр; одновременно оба параметра не могут быть активными."
#define L_INVALID_MAXGLUE "max_glueless_level должно быть числом и больше нуля."
#define L_INVALID_MAXQTOTAL "max_queries_total должно быть числом и больше нуля."
#define L_INVALID_TIMEOUT "timeout_seconds должно быть числом и больше нуля."
#define L_TIMESTAMP "Временная отметка: "
#define L_COMPRESS_ERROR "Ошибка сжатия: "
