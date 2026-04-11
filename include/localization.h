#ifndef LOCALIZATION_H
#define LOCALIZATION_H

#include <Arduino.h>

extern int selected_language; // 0:EN, 1:TR, 2:IT, 3:PT, 4:FR

// IDs for all strings
enum StringID {
  STR_BACK, STR_CLOCK, STR_SETTINGS, STR_NEVER, STR_SEC, STR_MIN,
  STR_AUTO_DIM, STR_SET_BRIGHT, STR_BATT_INFO, STR_BRIGHT, STR_SET_CLOCK,
  STR_ROTATION, STR_ABOUT, STR_REBOOT, STR_CLR_SETTINGS, STR_CLRING_SETTINGS,
  STR_RIGHT, STR_LEFT, STR_BATT, STR_EXIT, STR_RG_AMERICAS, STR_RG_EMEA,
  STR_SEL_GO_PAUSE, STR_SEL_EXIT, STR_TRIG_TV, STR_MN_AMERICA, STR_MN_EMEA,
  STR_REGION, STR_FK_GP, STR_SET_HOUR, STR_SET_MIN, STR_ADV, STR_SP_RND,
  STR_SEL_EXIT2, STR_BT_SPAM, STR_SA_CRASH, STR_CMB_BT_SPAM, STR_AD_SPAM,
  STR_AJ_TRANSF_NM, STR_AJ_TV_COLOR, STR_STP_NW_PH, STR_SA_ADV, STR_SP_ADV,
  STR_AD_SPAM_ADV, STR_AJ_ADV, STR_WF_SP, STR_RND_SSID, STR_WF_SCAN,
  STR_WF_SPAM_FUN, STR_WF_SPAM_RR, STR_WF_SPAM_RND, STR_WF_RESCAN,
  STR_WF_OPEN, STR_WF_CHANN, STR_WF_CRYPT, STR_SEL_BACK, STR_HOLD_CLONE,
  STR_WF_SCN, STR_WF_SCNING, STR_INST_NXT, STR_INST_PRV, STR_INST_SEL,
  STR_INST_HOME, STR_INST_PRSS_KEY, STR_STK_NXT, STR_STK_SEL, STR_STK_HOME,
  STR_SDCARD, STR_PINEAP_HUNTER, STR_PH_ALERT_SSIDS, STR_SEL_INFO,
  STR_BLACK, STR_NAVY, STR_DARKGREEN, STR_DARKCYAN, STR_MAROON, STR_PURPLE,
  STR_OLIVE, STR_LIGHTGREY, STR_DARKGREY, STR_BLUE, STR_GREEN, STR_CYAN,
  STR_RED, STR_MAGENTA, STR_YELLOW, STR_WHITE, STR_ORANGE, STR_GREENYELLOW,
  STR_PINK, STR_COLOR, STR_SET_FGCOLOR, STR_SET_BGCOLOR, STR_THEME,
  STR_5SEC, STR_10SEC, STR_15SEC, STR_30SEC, STR_60SEC, STR_120MIN, STR_240MIN,
  STR_PL_TITLE, STR_PL_SUBTITLE, STR_PL_EMAIL, STR_PL_PASS, STR_PL_MSG, STR_PL_BTN, STR_PL_WAIT, STR_PL_SSID_INST,
  STR_MN_TV, STR_MN_BT, STR_MN_WF, STR_MN_QR, STR_MN_USB, STR_QR_BACK,
  NUM_STRINGS
};

const char* const locales[][NUM_STRINGS] = {
  // 0: EN
  {
    "Back", "Clock", "Settings", "Never", "seconds", "minutes",
    "SET AUTO DIM TIME", "SET BRIGHTNESS", "Battery Info", "Brightness", "Set Clock",
    "Rotation", "About", "Reboot", "Clear Settings", "Restoring Default\nSettings...",
    "Right", "Left", "Battery: ", "Press any key to exit", "Region:\nAmericas / Asia\n", "Region: EMEA",
    "Select: Go/Pause", "Next: Exit", "triggered TVBG", "Americas / Asia", "EU/MidEast/Africa",
    "Region", "Front Key: Go/Pause", "SET HOUR", "SET MINUTE", "Advertising:\n", "Swift Pair Random",
    "\n\nNext: Exit", "BT Spam", "SourApple Crash", " Combined BT Spam", "Android Spam",
    "Transfer Number", "TV Color Balance", "Setup New Phone", "SourApple Advertisement: ", "SwiftPair Advertisement: '%s' - ",
    "Android Spam Advertisement: ", "AppleJuice Advertisement: ", "WiFi Spam", " - Random SSIDs\n", "Scan Wifi",
    "Spam Funny", "Spam Rickroll", "Spam Random", "[RESCAN]",
    "Open", "Chan : %d\n", "Crypt: %s\n", "\nNext: Back\n", "Hold Sel: Clone\n",
    "WiFi Scan", "Scanning...", "Next: Down Arrow", "Prev: Up Arrow", "Sel : Enter or ->",
    "Home: Esc   or <- ", "         Press a key", "Next: Side Button", "Sel : M5 Button", "Home: Power Button",
    "Mount/Unmount SD", "PineAP Hunter", "PH Alert SSIDs", "Sel: Info",
    "Black", "Navy", "Dark Green", "Dark Cyan", "Maroon", "Purple",
    "Olive", "Light Grey", "Dark Grey", "Blue", "Green", "Cyan",
    "Red", "Magenta", "Yellow", "White", "Orange", "Green Yellow",
    "Pink", "Custom Colors", "MAIN COLOR", "BACKGROUND COLOR", "Color Theme",
    "5 seconds", "10 seconds", "15 seconds", "30 seconds", "60 seconds", "120 minutes", "240 minutes",
    "Sign in", "Sign In With Google", "Email", "Password", "Please log in to browse securely.", "Next", "Please wait a few minutes.\nSoon you will be able to access the internet.", 
    "SSID length should be between 2 and 32\nInvalid: ?,$,\",[,\\,],+\n\nType the SSID\nPress Enter to Confirm\n\n",
    "TV-B-Gone", "Bluetooth", "WiFi", "QR Codes", "BadUSB Hunter", "Back"
  },
  // 1: TR
  {
    "Geri", "Saat", "Ayarlar", "Asla", "saniye", "dakika",
    "OTO KARARTMA", "PARLAKLIK AYARI", "Pil Bilgisi", "Parlaklik", "Saati Ayarla",
    "Dondurme", "Hakkinda", "Yeniden Baslat", "Ayarlari Sifirla", "Varsayilan Ayarlar\nYukleniyor...",
    "Sag", "Sol", "Pil: ", "Cikmak icin bir tusa basin", "Bolge:\nAmerika / Asya\n", "Bolge: EMEA",
    "Sec: Baslat/Duraklat", "Sonraki: Cikis", "TVBG tetiklendi", "Amerika / Asya", "EU/MidEast/Africa",
    "Bolge", "On Tus: Baslat/Duraklat", "SAATI AYARLA", "DAKIKAYI AYARLA", "Reklam:\n", "Swift Pair Rastgele",
    "\n\nSonraki: Cikis", "BT Spami", "SourApple Cokertme", " Karisik BT Spami", "Android Spami",
    "Numara Transferi", "TV Renk Dengesi", "Yeni Telefon Kur", "SourApple Reklami: ", "SwiftPair Reklami: '%s' - ",
    "Android Spam Reklami: ", "AppleJuice Reklami: ", "WiFi Spami", " - Rastgele SSIDler\n", "Wifi Tara",
    "Spam Komik", "Spam Rickroll", "Spam Rastgele", "[TEKRAR TARA]",
    "Acik", "Kanal: %d\n", "Sifre: %s\n", "\nSonraki: Geri\n", "Basili Tut: Klonla\n",
    "WiFi Tarama", "Taraniyor...", "Sonraki: Alt Ok", "Onceki: Ust Ok", "Sec : Enter veya ->",
    "Ev  : Esc veya <- ", "         Bir tusa basin", "Sonraki: Yan Tus", "Sec : M5 Tusu", "Ana : Guc Tusu",
    "SD Kart Tak/Cikar", "PineAP Avcisi", "PH Uyari SSIDleri", "Sec: Bilgi",
    "Siyah", "Lacivert", "Koyu Yesil", "Koyu Turkuaz", "Bordo", "Mor",
    "Zeytin", "Acik Gri", "Koyu Gri", "Mavi", "Yesil", "Turkuaz",
    "Kirmizi", "Eflatun", "Sari", "Beyaz", "Turuncu", "Fistik Yesili",
    "Pembe", "Ozel Renkler", "ANA RENK", "ARKA PLAN RENGI", "Renk Temasi",
    "5 saniye", "10 saniye", "15 saniye", "30 saniye", "60 saniye", "120 dakika", "240 dakika",
    "Giris Yap", "Google ile Giris Yap", "E-posta", "Sifre", "Lutfen guvenle goz atmak icin giris yapin.", "Ileri", "Lutfen birkac dakika bekleyin.\nYakinda internete erisebileceksiniz.",
    "SSID uzunlugu 2-32 arasi olmali\nGecersiz: ?,$,\",[,\\,],+\n\nSSID Girin\nOnaylamak icin Enter Basin\n\n",
    "TV-B-Gone", "Bluetooth", "WiFi", "QR Kodlari", "BadUSB Avcisi", "Geri"
  },
  // 2: IT
  {
    "Indietro", "Orologio", "Configurazione", "Mai", "secondi", "minuti",
    "Luminosita Auto", "IMPOSTA LUMINOSITA", "Info Batteria", "Luminosita", "Imposta Ora",
    "Rotazione", "Info", "Riavvio", "Canc. Settings", "Ripristina Default\nSettings...",
    "Destra", "Sinistra", "Batteria: ", "Premi un tasto per uscire", "Regione:\nAmerica / Asia\n", "Regione: EMEA",
    "Seleziona: Go/Pausa", "Prossimo: Esci", "triggered TVBG", "America / Asia", "EU/MidEast/Africa",
    "Regione", "Tasto Front.: Go/Pausa", "IMPOSTA ORA", "IMPOSTA MINUTI", "Avviso:\n", "Swift Pair Random",
    "\n\nProssimo: Esci", "BT Spam", "SourApple Crash", "BT Spam Misto", "Android Spam",
    "Transfer Number", "TV Color Balance", "Setup New Phone", "SourApple Advertisement: ", "SwiftPair Advertisement: '%s' - ",
    "Android Spam Advertisement: ", "AppleJuice Advertisement: ", "Spam WiFi", " - Random SSIDs\n", "Scan Wifi",
    "Spam Funny", "Spam Rickroll", "Spam Random", "[RIPETI SCANSIONE]",
    "Apri", "Canale : %d\n", "Crypt: %s\n", "\nProssimo: Back\n", "Tieni: Clona\n",
    "Scan WiFi", "Scansione in corso...", "Prossimo: Down Arrow", "Precedente: Up Arrow", "Sel. : Enter or ->",
    "Home: Esc   or <- ", "Premi un tasto", "Avanti: Side Button", "Seleziona : M5 Button", "Home: Tasto Accensione",
    "Mount/Unmount SD", "PineAP Hunter", "PH Alert SSIDs", "Sel: Info",
    "Nero", "Blu Scuro", "Verde Scuro", "Ciano Chiaro", "Marrone", "Viola",
    "Olive", "Grigio Chiaro", "Grigio Scuro", "Blue", "Verde", "Ciano",
    "Rosso", "Magenta", "Giallo", "Bianco", "Arancio", "Giallo Verde",
    "Rosa", "Colore Pers.", "COLORE TESTO", "COLORE SFONDO", "Tema Colori",
    "5 secondi", "10 secondi", "15 secondi", "30 secondi", "60 secondi", "120 minuti", "240 minuti",
    "Accedi", "Utilizza il tuo Account Google", "Email", "Password", "Effettua il login per navigare in sicurezza.", "Avanti", "Per favore attendi qualche minuto.\nPresto sarai in grado di accedere a Internet.",
    "SSID deve essere tra 2 e 32\nInvalido: ?,$,\",[,\\,],+\n\nScrivi l'SSID\nPremi Invio per Confermare\n\n",
    "TV-B-Gone", "Bluetooth", "WiFi", "Codici QR", "BadUSB Hunter", "Indietro"
  },
  // 3: PT
  {
    "Voltar", "Relogio", "Configuracoes", "Nunca", "segundos", "minutos",
    "AJUSTAR LUZ DE FUNDO", "BRILHO DA TELA", "Estado da Bateria", "Brilho", "Ajustar Relogio",
    "Rotacao", "Sobre", "Reiniciar M5", "Resetar Ajustes", "Aplicando Ajustes\nPadrao...",
    "Direita", "Esquerda", "Bateria: ", "Pressione qualquer tecla para sair", "Regiao:\nAmericas / Asia\n", "Regiao: EMEA",
    "Ok: Iniciar/Parar", "Seta 'v' : Sair", "TVBG em funcionamento...", "Americas/Asia", "EU/MidEast/Africa",
    "Regiao", "Botao Frontal:Iniciar/Pausar", "AJUSTAR HORA", "AJUSTAR MINUTO", "Aviso:\n", "Swift Pair Aleatorio",
    "\n\nProx: Sair", "Bluetooth Spam", "SourApple Crash", "BT Spam Combinado", "Android Spam",
    "Transferir Numero", "Balanco de Cor TV", "Novo Aparelho", "Aviso SourApple: ", "Aviso SwiftPair: '%s' - ",
    "Aviso Android Spam: ", "Aviso AppleJuice: ", "WiFi Spam", " - SSIDs Aleatorios\n", "Escanear Wifi",
    "Spam Engracado", "Spam Rickroll", "Spam Aleatorio", "[RESCANEAR]",
    "Aberto", "Canal: %d\n", "Cripto: %s\n", "\nProx: Voltar\n", "Segurar: Clonar\n",
    "Escanear \n   Wifi", "Escaneando...", "Prox: Seta v", "Anterior: Seta ^", "Sel : Ok ou Seta >",
    "Home: Esc ou Seta <", "Pressione uma tecla", "Prox: Botao do Lado", "Sel : Botao M5", "Home: Botao Power",
    "Monta/Desmonta SD", "PineAP Hunter", "PH Alert SSIDs", "Sel: Info",
    "Preto", "Azul Escuro", "Verde Escuro", "Ciano Escuro", "Vermelho Escuro", "Roxo",
    "Castanho", "Cinzo Claro", "Cinzo Escuro", "Azul", "Verde", "Ciano",
    "Vermelho", "Magenta", "Amarelo", "Branco", "Alaranjado", "Verde Amarelo",
    "Rosa", "Mudar Cores", "COR PRINCIPAL", "COR DE FUNDO", "Tema De Cores",
    "5 segundos", "10 segundos", "15 segundos", "30 segundos", "60 segundos", "120 minutos", "240 minutos",
    "Fazer login", "Use sua Conta do Google", "E-mail", "Senha", "Por favor, faça login para navegar de forma segura.", "Avançar", "Fazendo login...",
    "Tamanho entre 2 e 32\nInvalidos: ?,$,\",[,\\,],+\n\nDigite o SSID\nEnter para Confirmar\n\n",
    "TV-B-Gone", "Bluetooth", "WiFi", "Codigos QR", "BadUSB Hunter", "Voltar"
  },
  // 4: FR
  {
    "Retour", "Horloge", "Parametres", "Jamais", "secondes", "minutes",
    "REGLER LA BAISSE DE LUMINOSITE", "REGLER LA LUMINOSITE", "Infos batterie", "Luminosite", "Regler l'horloge",
    "Rotation", "A propos", "Redemarrer", "Reinitialiser", "Reinitialisation",
    "Droite", "Gauche", "Batterie: ", "Pressez n'importe\nquelle touche pour\nquitter", "Region:\nAmeriques / Asie\n", "Region: EMEA",
    "Touche M5: Go/Stop", "Suivant: Quitter", "TVBG en cours...", "Ameriques / Asie", "EU/M-O/Afrique",
    "Region", "Touche M5: Go/Stop", "REGLER L'HEURE", "REGLER LES MINUTES", "Notification:\n", "Swift Pair Aleatoire",
    "\n\nSuivant: Quitter", "BT Spam", "SourApple Crash", " BT Spam Combine", "Android Spam",
    "Transfert de Num.", "Colorimetrie TV", "Setup New Phone", "Notifications SourApple : ", "Notifications SwiftPair : '%s' - ",
    "Notifications Android Spam: ", "AppleJuice : ", "WiFi Spam", " - SSIDs Aleatoires\n", "Scan Wifi",
    "Spam Funny", "Spam Rickroll", "Spam Random", "[RESCAN]",
    "Ouvrir", "Canal: %d\n", "Crypt: %s\n", "\nSuivant: Retour\n", "Tenir: Cloner\n",
    "Scan WiFi", "Scan...", "Suivant: Touche Bas", "Precedent: Touche Haut", "Sel : Entree ou ->",
    "Accueil: Echap ou <-", "Pressez une touche", "Suivant: Touche Bas", "Select.: Touche M5", "Accueil: Touche M5",
    "Monter/demont. SD", "PineAP Hunter", "PH Alert SSIDs", "Sel: Info",
    "Noir", "Bleu Marine", "Vert Fonce", "Cyan Fonce", "Marron", "Violet",
    "Olive", "Gris Clair", "Gris Fonce", "Bleu", "Vert", "Cyan",
    "Rouge", "Magenta", "Jaune", "Blanc", "Orange", "Jaune-Vert",
    "Rosa", "Choix des couleurs", "COULEUR PRINCIPALE", "COULEUR SECONDAIRE", "Theme",
    "5 secondes", "10 secondes", "15 secondes", "30 secondes", "60 secondes", "120 minutes", "240 minutes",
    "Connexion", "Utiliser votre compte Google", "Adresse e-mail", "Mot de passe", "Merci de vous connecter pour obtenir une navigation sécurisée.", "Suivant", "Connexion en cours. Merci de patienter quelques instants.",
    "La longueur du SSID doit être entre 2 et 32\nInvalide: ?,$,\",[,\\,],+\n\nÉcrivez le SSID\nPressez Entrée pour Valider\n\n"
  }
};

#define TXT_BACK locales[selected_language][STR_BACK]
#define TXT_CLOCK locales[selected_language][STR_CLOCK]
#define TXT_SETTINGS locales[selected_language][STR_SETTINGS]
#define TXT_NEVER locales[selected_language][STR_NEVER]
#define TXT_SEC locales[selected_language][STR_SEC]
#define TXT_MIN locales[selected_language][STR_MIN]
#define TXT_AUTO_DIM locales[selected_language][STR_AUTO_DIM]
#define TXT_SET_BRIGHT locales[selected_language][STR_SET_BRIGHT]
#define TXT_BATT_INFO locales[selected_language][STR_BATT_INFO]
#define TXT_BRIGHT locales[selected_language][STR_BRIGHT]
#define TXT_SET_CLOCK locales[selected_language][STR_SET_CLOCK]
#define TXT_ROTATION locales[selected_language][STR_ROTATION]
#define TXT_ABOUT locales[selected_language][STR_ABOUT]
#define TXT_REBOOT locales[selected_language][STR_REBOOT]
#define TXT_CLR_SETTINGS locales[selected_language][STR_CLR_SETTINGS]
#define TXT_CLRING_SETTINGS locales[selected_language][STR_CLRING_SETTINGS]
#define TXT_RIGHT locales[selected_language][STR_RIGHT]
#define TXT_LEFT locales[selected_language][STR_LEFT]
#define TXT_BATT locales[selected_language][STR_BATT]
#define TXT_EXIT locales[selected_language][STR_EXIT]
#define TXT_RG_AMERICAS locales[selected_language][STR_RG_AMERICAS]
#define TXT_RG_EMEA locales[selected_language][STR_RG_EMEA]
#define TXT_SEL_GO_PAUSE locales[selected_language][STR_SEL_GO_PAUSE]
#define TXT_SEL_EXIT locales[selected_language][STR_SEL_EXIT]
#define TXT_TRIG_TV locales[selected_language][STR_TRIG_TV]
#define TXT_MN_AMERICA locales[selected_language][STR_MN_AMERICA]
#define TXT_MN_EMEA locales[selected_language][STR_MN_EMEA]
#define TXT_REGION locales[selected_language][STR_REGION]
#define TXT_FK_GP locales[selected_language][STR_FK_GP]
#define TXT_SET_HOUR locales[selected_language][STR_SET_HOUR]
#define TXT_SET_MIN locales[selected_language][STR_SET_MIN]
#define TXT_ADV locales[selected_language][STR_ADV]
#define TXT_SP_RND locales[selected_language][STR_SP_RND]
#define TXT_SEL_EXIT2 locales[selected_language][STR_SEL_EXIT2]
#define TXT_BT_SPAM locales[selected_language][STR_BT_SPAM]
#define TXT_SA_CRASH locales[selected_language][STR_SA_CRASH]
#define TXT_CMB_BT_SPAM locales[selected_language][STR_CMB_BT_SPAM]
#define TXT_AD_SPAM locales[selected_language][STR_AD_SPAM]
#define TXT_AJ_TRANSF_NM locales[selected_language][STR_AJ_TRANSF_NM]
#define TXT_AJ_TV_COLOR locales[selected_language][STR_AJ_TV_COLOR]
#define TXT_STP_NW_PH locales[selected_language][STR_STP_NW_PH]
#define TXT_SA_ADV locales[selected_language][STR_SA_ADV]
#define TXT_SP_ADV locales[selected_language][STR_SP_ADV]
#define TXT_AD_SPAM_ADV locales[selected_language][STR_AD_SPAM_ADV]
#define TXT_AJ_ADV locales[selected_language][STR_AJ_ADV]
#define TXT_WF_SP locales[selected_language][STR_WF_SP]
#define TXT_RND_SSID locales[selected_language][STR_RND_SSID]
#define TXT_WF_SCAN locales[selected_language][STR_WF_SCAN]
#define TXT_WF_SPAM_FUN locales[selected_language][STR_WF_SPAM_FUN]
#define TXT_WF_SPAM_RR locales[selected_language][STR_WF_SPAM_RR]
#define TXT_WF_SPAM_RND locales[selected_language][STR_WF_SPAM_RND]
#define TXT_WF_RESCAN locales[selected_language][STR_WF_RESCAN]
#define TXT_WF_OPEN locales[selected_language][STR_WF_OPEN]
#define TXT_WF_CHANN locales[selected_language][STR_WF_CHANN]
#define TXT_WF_CRYPT locales[selected_language][STR_WF_CRYPT]
#define TXT_SEL_BACK locales[selected_language][STR_SEL_BACK]
#define TXT_HOLD_CLONE locales[selected_language][STR_HOLD_CLONE]
#define TXT_WF_SCN locales[selected_language][STR_WF_SCN]
#define TXT_WF_SCNING locales[selected_language][STR_WF_SCNING]
#define TXT_INST_NXT locales[selected_language][STR_INST_NXT]
#define TXT_INST_PRV locales[selected_language][STR_INST_PRV]
#define TXT_INST_SEL locales[selected_language][STR_INST_SEL]
#define TXT_INST_HOME locales[selected_language][STR_INST_HOME]
#define TXT_INST_PRSS_KEY locales[selected_language][STR_INST_PRSS_KEY]
#define TXT_STK_NXT locales[selected_language][STR_STK_NXT]
#define TXT_STK_SEL locales[selected_language][STR_STK_SEL]
#define TXT_STK_HOME locales[selected_language][STR_STK_HOME]
#define TXT_SDCARD locales[selected_language][STR_SDCARD]
#define TXT_PINEAP_HUNTER locales[selected_language][STR_PINEAP_HUNTER]
#define TXT_PH_ALERT_SSIDS locales[selected_language][STR_PH_ALERT_SSIDS]
#define TXT_SEL_INFO locales[selected_language][STR_SEL_INFO]
#define TXT_BLACK locales[selected_language][STR_BLACK]
#define TXT_NAVY locales[selected_language][STR_NAVY]
#define TXT_DARKGREEN locales[selected_language][STR_DARKGREEN]
#define TXT_DARKCYAN locales[selected_language][STR_DARKCYAN]
#define TXT_MAROON locales[selected_language][STR_MAROON]
#define TXT_PURPLE locales[selected_language][STR_PURPLE]
#define TXT_OLIVE locales[selected_language][STR_OLIVE]
#define TXT_LIGHTGREY locales[selected_language][STR_LIGHTGREY]
#define TXT_DARKGREY locales[selected_language][STR_DARKGREY]
#define TXT_BLUE locales[selected_language][STR_BLUE]
#define TXT_GREEN locales[selected_language][STR_GREEN]
#define TXT_CYAN locales[selected_language][STR_CYAN]
#define TXT_RED locales[selected_language][STR_RED]
#define TXT_MAGENTA locales[selected_language][STR_MAGENTA]
#define TXT_YELLOW locales[selected_language][STR_YELLOW]
#define TXT_WHITE locales[selected_language][STR_WHITE]
#define TXT_ORANGE locales[selected_language][STR_ORANGE]
#define TXT_GREENYELLOW locales[selected_language][STR_GREENYELLOW]
#define TXT_PINK locales[selected_language][STR_PINK]
#define TXT_COLOR locales[selected_language][STR_COLOR]
#define TXT_SET_FGCOLOR locales[selected_language][STR_SET_FGCOLOR]
#define TXT_SET_BGCOLOR locales[selected_language][STR_SET_BGCOLOR]
#define TXT_THEME locales[selected_language][STR_THEME]
#define TXT_5SEC locales[selected_language][STR_5SEC]
#define TXT_10SEC locales[selected_language][STR_10SEC]
#define TXT_15SEC locales[selected_language][STR_15SEC]
#define TXT_30SEC locales[selected_language][STR_30SEC]
#define TXT_60SEC locales[selected_language][STR_60SEC]
#define TXT_120MIN locales[selected_language][STR_120MIN]
#define TXT_240MIN locales[selected_language][STR_240MIN]
#define TXT_PL_TITLE locales[selected_language][STR_PL_TITLE]
#define TXT_PL_SUBTITLE locales[selected_language][STR_PL_SUBTITLE]
#define TXT_PL_EMAIL locales[selected_language][STR_PL_EMAIL]
#define TXT_PL_PASS locales[selected_language][STR_PL_PASS]
#define TXT_PL_MSG locales[selected_language][STR_PL_MSG]
#define TXT_PL_BTN locales[selected_language][STR_PL_BTN]
#define TXT_PL_WAIT locales[selected_language][STR_PL_WAIT]
#define TXT_PL_SSID_INST locales[selected_language][STR_PL_SSID_INST]
#define TXT_MN_TV locales[selected_language][STR_MN_TV]
#define TXT_MN_BT locales[selected_language][STR_MN_BT]
#define TXT_MN_WF locales[selected_language][STR_MN_WF]
#define TXT_MN_QR locales[selected_language][STR_MN_QR]
#define TXT_MN_USB locales[selected_language][STR_MN_USB]
#define TXT_QR_BACK locales[selected_language][STR_QR_BACK]

#endif
