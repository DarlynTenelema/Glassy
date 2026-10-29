export type Language = 'ES' | 'EN' | 'PT';

export interface Translations {
  // Landing - Screen 1
  webStudioSub: string;
  loginGoogle: string;
  loggingIn: string;
  scrollHint: string;
  languageName: string;
  quickDemo: string;

  // Landing - Screen 2 (Work with us)
  workWithUsTitle: string;
  workWithUsSubtitle: string;
  forInfluencersTitle: string;
  forInfluencersDesc: string;
  forInfluencersList: string[];
  forGamersTitle: string;
  forGamersDesc: string;
  forGamersList: string[];
  startNowBtn: string;
  backToTop: string;

  // Dashboard
  dashboardTitle: string;
  dashboardSub: string;
  smartUxNotice: string;
  yourLink: string;
  copyLink: string;
  copied: string;
  yourCode: string;
  availableBalance: string;
  totalEarnings: string;
  minWithdrawalNote: string;
  requestWithdrawal: string;
  paypalEmailLabel: string;
  savePaypal: string;
  saved: string;
  tiktokSectionTitle: string;
  tiktokSectionSub: string;
  downloadGameBtn: string;
  step1: string;
  step2: string;
  step3: string;
  liveChatCheatSheetTitle: string;
  liveChatCheatSheetSub: string;
  recentSalesTitle: string;
  noSalesYet: string;
  logout: string;
  navDashboard: string;
  navDocs: string;
}

export const translations: Record<Language, Translations> = {
  ES: {
    webStudioSub: 'Web Studio for partners',
    loginGoogle: 'Continuar con Google',
    loggingIn: 'Conectando...',
    scrollHint: 'Desliza para ver beneficios',
    languageName: 'Idioma',
    quickDemo: 'O entrar directamente (Demo)',

    workWithUsTitle: 'Work with us',
    workWithUsSubtitle: 'Gana dinero colaborando con Glassy según tu perfil',
    forInfluencersTitle: 'Para influencers',
    forInfluencersDesc: 'Monetiza tu comunidad en redes sociales con el 25% de comisiones por compras.',
    forInfluencersList: [
      '25% de Rev-Share directo de por vida en todas las compras de cristales de tus seguidores en el juego móvil.',
      'Cero esfuerzo técnico: Te entregamos un código y un enlace único listo para tu bio de Instagram, TikTok o YouTube.',
      'Incentivo para tus fans: Al usar tu código reciben 100 cristales de regalo de bienvenida y un 10% adicional.',
      'Cobros automáticos a tu PayPal con estadísticas claras.'
    ],
    forGamersTitle: 'Para gamers',
    forGamersDesc: 'Transmite Glassy en TikTok LIVE y monetiza con retos y regalos en tiempo real.',
    forGamersList: [
      'Edición exclusiva para PC: Diseñada para transmitir en vertical en TikTok LIVE Studio u OBS sin configuraciones complejas.',
      'Interacción en vivo real: Cuarzos de fans ($0.05) y piedras troll ($0.10) caen al frasco cuando el público dona o comenta emojis.',
      'Piloto automático con IA (2 a 4 agentes): Juega por ti en transmisiones maratónicas de 8+ horas para que interactúes con tu chat.',
      'Descarga directa en 1 clic desde tu panel.'
    ],
    startNowBtn: 'Empezar ahora con Google',
    backToTop: 'Volver arriba',

    dashboardTitle: 'Glassy Partners',
    dashboardSub: 'Dashboard (index)',
    smartUxNotice: 'Sistema inteligente activo: Todo está preconfigurado para que solo tengas que copiar y transmitir.',
    yourLink: 'Tu enlace directo de Partner',
    copyLink: 'Copiar enlace',
    copied: '¡Copiado!',
    yourCode: 'Tu código de creador',
    availableBalance: 'Saldo disponible para retiro',
    totalEarnings: 'Total histórico generado',
    minWithdrawalNote: 'Retiro mínimo: $100.00 USD mediante PayPal',
    requestWithdrawal: 'Solicitar retiro a PayPal',
    paypalEmailLabel: 'Correo de PayPal para pagos',
    savePaypal: 'Guardar',
    saved: 'Guardado',
    tiktokSectionTitle: 'Glassy TikTok Live — Streamer Edition',
    tiktokSectionSub: 'Versión ejecutable para PC (Windows) con servidor de chat y bot de IA integrados.',
    downloadGameBtn: 'Descargar Glassy.exe para PC',
    step1: '1. Descomprime la carpeta descargada.',
    step2: '2. Abre Glassy.exe e inicia tu stream en TikTok LIVE Studio.',
    step3: '3. Selecciona "Captura de ventana" y ¡listo para recibir regalos!',
    liveChatCheatSheetTitle: 'Comandos y Regalos de TikTok para tu Stream',
    liveChatCheatSheetSub: 'Copia y pega estas reglas en la descripción de tu directo o en el chat fijado:',
    recentSalesTitle: 'Últimas ventas de tu comunidad (25% Rev-Share)',
    noSalesYet: 'Aún no hay compras registradas. ¡Comparte tu enlace para empezar a generar!',
    logout: 'Cerrar sesión',
    navDashboard: 'Inicio (Dashboard)',
    navDocs: 'Guía para Streamers'
  },
  EN: {
    webStudioSub: 'Web Studio for partners',
    loginGoogle: 'Continue with Google',
    loggingIn: 'Connecting...',
    scrollHint: 'Scroll to explore benefits',
    languageName: 'Language',
    quickDemo: 'Or enter directly (Demo)',

    workWithUsTitle: 'Work with us',
    workWithUsSubtitle: 'Earn money collaborating with Glassy based on your profile',
    forInfluencersTitle: 'For influencers',
    forInfluencersDesc: 'Monetize your social media audience with 25% purchase rev-share.',
    forInfluencersList: [
      '25% lifetime Rev-Share on all in-app purchases made by your followers in the mobile game.',
      'Zero technical setup: You get an exclusive code and link ready to paste on your TikTok, Instagram, or YouTube bio.',
      'Community incentives: Your fans get 100 free welcome crystals plus 10% extra on their first gem pack.',
      'Automated payouts to your PayPal with real-time tracking.'
    ],
    forGamersTitle: 'For gamers',
    forGamersDesc: 'Stream Glassy on TikTok LIVE and monetize live challenges and gifts.',
    forGamersList: [
      'Exclusive PC Standalone Edition: Tailored for vertical streaming on TikTok LIVE Studio or OBS with zero hassle.',
      'Real-time chat interaction: Fan quartz ($0.05) and troll stones ($0.10) drop into the jar as viewers gift or send emojis.',
      'Autonomous AI Autoplayer (2 to 4 hands): Plays seamlessly during 8+ hour marathon streams while you talk to your audience.',
      '1-click download directly from your dashboard.'
    ],
    startNowBtn: 'Get started with Google',
    backToTop: 'Back to top',

    dashboardTitle: 'Glassy Partners',
    dashboardSub: 'Dashboard (index)',
    smartUxNotice: 'Smart system active: Everything is preconfigured so you only need to copy, share and stream.',
    yourLink: 'Your direct Partner link',
    copyLink: 'Copy link',
    copied: 'Copied!',
    yourCode: 'Your creator code',
    availableBalance: 'Available balance for payout',
    totalEarnings: 'Total lifetime earnings',
    minWithdrawalNote: 'Minimum payout: $100.00 USD via PayPal',
    requestWithdrawal: 'Request PayPal payout',
    paypalEmailLabel: 'PayPal payout email',
    savePaypal: 'Save',
    saved: 'Saved',
    tiktokSectionTitle: 'Glassy TikTok Live — Streamer Edition',
    tiktokSectionSub: 'Windows PC standalone version with embedded chat connector and AI bot.',
    downloadGameBtn: 'Download Glassy.exe for PC',
    step1: '1. Unzip the downloaded archive.',
    step2: '2. Open Glassy.exe and start your TikTok LIVE Studio session.',
    step3: '3. Add Window Capture and start earning diamonds & gifts!',
    liveChatCheatSheetTitle: 'TikTok Live Rules & Chat Commands',
    liveChatCheatSheetSub: 'Copy and pin these rules to your live stream description or pinned chat:',
    recentSalesTitle: 'Recent community sales (25% Rev-Share)',
    noSalesYet: 'No sales registered yet. Share your partner link to start earning!',
    logout: 'Log out',
    navDashboard: 'Home (Dashboard)',
    navDocs: 'Streamer Guide'
  },
  PT: {
    webStudioSub: 'Web Studio for partners',
    loginGoogle: 'Continuar com o Google',
    loggingIn: 'Conectando...',
    scrollHint: 'Role para ver os benefícios',
    languageName: 'Idioma',
    quickDemo: 'Ou entrar diretamente (Demo)',

    workWithUsTitle: 'Work with us',
    workWithUsSubtitle: 'Ganhe dinheiro colaborando com o Glassy de acordo com seu perfil',
    forInfluencersTitle: 'Para influencers',
    forInfluencersDesc: 'Monetize sua comunidade nas redes sociais com 25% de comissão.',
    forInfluencersList: [
      '25% de Rev-Share vitalício em todas as compras de cristais de seus seguidores no jogo móvel.',
      'Zero complicação: Código exclusivo e link pronto para colocar na bio do TikTok, Instagram ou YouTube.',
      'Incentivo para seus seguidores: 100 cristais de bônus de boas-vindas e 10% extra na primeira compra.',
      'Pagamentos automáticos via PayPal com relatórios simples.'
    ],
    forGamersTitle: 'Para gamers',
    forGamersDesc: 'Transmita o Glassy no TikTok LIVE e monetize com presentes em tempo real.',
    forGamersList: [
      'Edição exclusiva para PC: Projetada para transmissão vertical no TikTok LIVE Studio ou OBS sem configurações chatas.',
      'Interatividade ao vivo: Quartzos de fãs ($0.05) e pedras troll ($0.10) caem no frasco quando o chat doa ou comenta emojis.',
      'IA com Piloto Automático (2 a 4 mãos): Joga por você em lives longas de 8+ horas para você focar no público.',
      'Download em 1 clique direto no seu painel.'
    ],
    startNowBtn: 'Começar agora com o Google',
    backToTop: 'Voltar ao topo',

    dashboardTitle: 'Glassy Partners',
    dashboardSub: 'Dashboard (index)',
    smartUxNotice: 'Sistema inteligente ativo: Tudo pronto para você apenas copiar, divulgar e transmitir.',
    yourLink: 'Seu link direto de Parceiro',
    copyLink: 'Copiar link',
    copied: 'Copiado!',
    yourCode: 'Seu código de criador',
    availableBalance: 'Saldo disponível para saque',
    totalEarnings: 'Total histórico ganho',
    minWithdrawalNote: 'Saque mínimo: $100.00 USD via PayPal',
    requestWithdrawal: 'Solicitar saque via PayPal',
    paypalEmailLabel: 'E-mail do PayPal para recebimento',
    savePaypal: 'Salvar',
    saved: 'Salvo',
    tiktokSectionTitle: 'Glassy TikTok Live — Streamer Edition',
    tiktokSectionSub: 'Versão para PC (Windows) com conector de chat e bot de IA integrados.',
    downloadGameBtn: 'Baixar Glassy.exe para PC',
    step1: '1. Descompacte o arquivo baixado.',
    step2: '2. Abra o Glassy.exe e inicie sua live no TikTok LIVE Studio.',
    step3: '3. Selecione "Captura de janela" e comece a receber presentes!',
    liveChatCheatSheetTitle: 'Comandos e Presentes do TikTok Live',
    liveChatCheatSheetSub: 'Copie e fixe estas regras na descrição da sua transmissão ao vivo:',
    recentSalesTitle: 'Últimas vendas da sua comunidade (25% Rev-Share)',
    noSalesYet: 'Nenhuma venda registrada ainda. Compartilhe seu link para começar!',
    logout: 'Sair da conta',
    navDashboard: 'Início (Dashboard)',
    navDocs: 'Guia do Streamer'
  }
};
