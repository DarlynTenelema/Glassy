// ignore: unused_import
import 'package:intl/intl.dart' as intl;
import 'app_localizations.dart';

// ignore_for_file: type=lint

/// The translations for Portuguese (`pt`).
class AppLocalizationsPt extends AppLocalizations {
  AppLocalizationsPt([String locale = 'pt']) : super(locale);

  @override
  String get settingsTitle => 'Configurações';

  @override
  String get generalVolume => 'Volume Geral';

  @override
  String get effects => 'Efeitos';

  @override
  String get gameMusic => 'Música do Jogo';

  @override
  String get darkMode => 'Modo Escuro';

  @override
  String get language => 'Idioma';

  @override
  String get selectLanguage => 'Selecionar Idioma';

  @override
  String get terms => 'Termos';

  @override
  String get privacy => 'Privacidade';

  @override
  String get deleteAccount => 'Excluir Conta';

  @override
  String get logout => 'Sair';

  @override
  String get deleteAccountTitle => 'Excluir Conta';

  @override
  String get deleteAccountWarning =>
      'Tem certeza de que deseja excluir permanentemente sua conta? Você perderá todo o seu progresso, gemas e skins. Esta ação não pode ser desfeita.';

  @override
  String get cancel => 'Cancelar';

  @override
  String get delete => 'Excluir';

  @override
  String get deleteAccountError => 'Erro ao excluir a conta. Tente novamente.';

  @override
  String get resetProgress => 'Redefinir Progresso';

  @override
  String get resetProgressTitle => 'Redefinir Progresso';

  @override
  String get resetProgressWarning =>
      'Tem certeza de que deseja reiniciar o jogo? Você perderá todas as suas gemas, skins, conquistas e progresso, mas manterá sua conta e compras. Esta ação não pode ser desfeita.';

  @override
  String get reset => 'Redefinir';

  @override
  String get resetProgressError =>
      'Erro ao redefinir o progresso. Tente novamente.';

  @override
  String get resetProgressSuccess => 'Progresso redefinido com sucesso.';

  @override
  String get continueWithGoogle => 'Continuar com o Google';

  @override
  String get loginCancelled => 'Login cancelado';

  @override
  String get referralCodeOptional => 'Código de indicação (opcional)';

  @override
  String get applyReferral => 'Aplicar';

  @override
  String get referralApplied => 'Código de indicação aplicado!';

  @override
  String get invalidReferralCode => 'Código de indicação inválido';

  @override
  String get play => 'JOGAR';

  @override
  String get skins => 'SKINS';

  @override
  String get store => 'LOJA';

  @override
  String get records => 'RECORDES';

  @override
  String get profile => 'PERFIL';

  @override
  String get mergeToEvolve => 'Mescle para evoluir';

  @override
  String get dailyReward => 'RECOMPENSA DIÁRIA';

  @override
  String dayNumber(int day) {
    return 'Dia $day';
  }

  @override
  String get claim => 'RESGATAR';

  @override
  String dailyRewardClaimed(int day) {
    return 'Recompensa do Dia $day Resgatada!';
  }

  @override
  String get breakTitle => 'PAUSA!!!';

  @override
  String get quickSettings => 'Ajustes Rápidos';

  @override
  String get resume => 'RETOMAR';

  @override
  String get gemRecharge => 'Recarga de Gemas';

  @override
  String get gameStartBanner => 'Jogue, relaxe e aproveite';

  @override
  String get gameOver => 'GAME OVER';

  @override
  String get newHighScore => 'Parabéns, novo recorde!';

  @override
  String get goodTry => 'Boa tentativa';

  @override
  String get scoreLabel => 'PONTUAÇÃO';

  @override
  String get highScoreLabel => 'RECORDE';

  @override
  String epicSave(int bonus) {
    return 'SALVAMENTO ÉPICO!\n+$bonus';
  }

  @override
  String comboText(int combo, int bonus) {
    return 'COMBO X$combo!\n+$bonus';
  }

  @override
  String get missionComplete => 'MISSÃO CONCLUÍDA!';

  @override
  String missionCreateGems(int count, String gemName) {
    return 'Crie $count $gemName';
  }

  @override
  String get shareScore => 'Compartilhar';

  @override
  String shareText(int score) {
    return 'Fiz $score pontos no Glassy! Consegue superar?';
  }

  @override
  String get gemPearl => 'Pérolas';

  @override
  String get gemEmerald => 'Esmeraldas';

  @override
  String get gemAmethyst => 'Ametistas';

  @override
  String get gemTopaz => 'Topázios';

  @override
  String get gemGreenRuby => 'Rubis Verdes';

  @override
  String get gemSapphire => 'Safiras';

  @override
  String get gemRedRuby => 'Rubis';

  @override
  String get gemDiamond => 'Diamantes';

  @override
  String get gemDefault => 'Gemas';

  @override
  String get achievementsTab => 'Conquistas';

  @override
  String get rankingTab => 'Classificação';

  @override
  String get dailyTab => 'Diário';

  @override
  String get achievementsSystemTitle => 'SISTEMA DE CONQUISTAS';

  @override
  String get achievementsSystemSubtitle =>
      'Complete desafios para ganhar Lápis-lazúli grátis.';

  @override
  String get gemFusionCategory => 'FUSÃO DE GEMAS';

  @override
  String get specialOffersCategory => 'OFERTAS ESPECIAIS';

  @override
  String get claimed => 'RESGATADO';

  @override
  String get completed => 'CONCLUÍDO';

  @override
  String get weeklyRanking => 'Semanal';

  @override
  String get totalRanking => 'Histórico Geral';

  @override
  String get skinsCollection => 'COLEÇÃO DE SKINS';

  @override
  String get equipped => 'EQUIPADO';

  @override
  String get equip => 'EQUIPAR';

  @override
  String get unlock => 'DESBLOQUEAR';

  @override
  String get exclusiveSkin => 'Skin Exclusiva';

  @override
  String get storeTitle => 'LOJA';

  @override
  String get chests => 'BAÚS';

  @override
  String get gemPacks => 'PACOTES DE GEMAS';

  @override
  String get free => 'GRÁTIS';

  @override
  String get purchaseSuccessful => 'Compra realizada com sucesso!';

  @override
  String get purchaseFailed => 'Erro na compra. Tente novamente.';

  @override
  String get playerProfile => 'PERFIL DO JOGADOR';

  @override
  String get stats => 'ESTATÍSTICAS';

  @override
  String get totalScore => 'Pontuação Total';

  @override
  String get gamesPlayed => 'Partidas Jogadas';

  @override
  String get changeAvatar => 'Mudar Avatar';

  @override
  String get copyId => 'Copiar ID';

  @override
  String get idCopied => 'ID copiado para a área de transferência!';

  @override
  String get playAgain => 'JOGAR NOVAMENTE';

  @override
  String get mainMenu => 'MENU PRINCIPAL';

  @override
  String yourScore(int score) {
    return 'Sua pontuação: $score';
  }

  @override
  String globalAccumulated(int total) {
    return '🌟 Total Geral: $total';
  }

  @override
  String get playWithGoogle => 'JOGAR COM GOOGLE';

  @override
  String authError(String error) {
    return 'Erro de autenticação: $error';
  }

  @override
  String googleSignInError(String error) {
    return 'Erro no Google Sign In: $error';
  }

  @override
  String get termsNotice =>
      'Ao jogar, você concorda com nossos Termos de Serviço e Política de Privacidade.';

  @override
  String get allRightsReserved =>
      '© Todos os direitos reservados.\nProibida cópia ou distribuição não autorizada.';

  @override
  String get welcomeSubtitle => 'Bem-vindo ao próximo nível';

  @override
  String get referralCodeHint => 'CÓDIGO DE AMIGO OU CRIADOR (Opcional)';

  @override
  String get saveChanges => 'SALVAR ALTERAÇÕES';

  @override
  String get profileUpdatedSuccess => 'Perfil atualizado com sucesso';

  @override
  String get profileUpdateError => 'Erro ao salvar perfil. Tente novamente.';

  @override
  String get usernameEmpty => 'O nome de usuário não pode estar vazio';

  @override
  String get playerNameHint => 'Seu Nome de Jogador';

  @override
  String get streak => 'SEQUÊNCIA';

  @override
  String get vipInviteCode => 'CÓDIGO DE CONVITE VIP';

  @override
  String get inviteFriendsDesc =>
      'Convide 10 amigos e ganhe a skin Metais Preciosos';

  @override
  String get inviteCodeCopied => 'Código copiado! Compartilhe com seus amigos.';

  @override
  String get copy => 'COPIAR';

  @override
  String get selectAvatar => 'SELECIONE SEU AVATAR';

  @override
  String get boy => 'Garoto';

  @override
  String get girl => 'Garota';

  @override
  String get allAvatars => 'Todos';

  @override
  String get heroes => 'Heróis';

  @override
  String get heroines => 'Heroínas';

  @override
  String get acquired => 'ADQUIRIDO';

  @override
  String get bonusTab => 'BÔNUS';

  @override
  String get categoryStarter => 'Iniciais';

  @override
  String get categoryStandard => 'Padrão';

  @override
  String get categoryEvent => 'Evento';

  @override
  String get skinUnlocked => 'Skin desbloqueada!';

  @override
  String get insufficientLapisOrError =>
      'Lapislázuli insuficiente ou erro de conexão.';

  @override
  String get uniqueOffers => 'OFERTAS ESPECIAIS';

  @override
  String get noEventOffers => 'Não há ofertas de evento disponíveis.';

  @override
  String get lapisPacks => 'PACOTES DE LAPISLÁZULI';

  @override
  String get timeChests => 'BAÚS DE TEMPO';

  @override
  String get extraRewards => 'RECOMPENSAS EXTRAS';

  @override
  String get chestBronze => 'Bronze';

  @override
  String get chestSilver => 'Prata';

  @override
  String get chestGold => 'Ouro';

  @override
  String chestOpened(int fragments) {
    return 'Baú aberto! +$fragments Fragmentos';
  }

  @override
  String get chestOpenError => 'Erro ao abrir o baú';

  @override
  String get chestOpenBtn => 'ABRIR';

  @override
  String chestEvery(String time) {
    return 'A cada $time';
  }

  @override
  String get confirmPurchase => 'Confirmar compra';

  @override
  String confirmPurchasePrompt(String title, String price) {
    return 'Deseja adquirir $title por $price?';
  }

  @override
  String get processingPurchase => 'Processando compra...';

  @override
  String get buy => 'COMPRAR';

  @override
  String giftBonus(int bonus) {
    return '+$bonus de bônus';
  }

  @override
  String subscribeFor(String price) {
    return 'ASSINAR POR $price';
  }

  @override
  String get piggyBankTitle => 'COFRINHO';

  @override
  String get piggyReady =>
      'Chegou a 100! Toque no cofrinho para resgatar GRÁTIS';

  @override
  String get piggyCashback => 'Cashback grátis a cada compra';

  @override
  String get piggyClaimBtn => 'RESGATAR 100 LAPIS GRÁTIS!';

  @override
  String get piggyClaiming => 'RESGATANDO...';

  @override
  String piggyClaimSuccess(int reward) {
    return '🎉 Você quebrou o cofrinho! +$reward Lapislázulis grátis adicionados à sua carteira.';
  }

  @override
  String get piggyClaimError =>
      'Não foi possível resgatar o cofrinho neste momento.';

  @override
  String get freeLapisAd => 'LAPISLÁZULI GRÁTIS';

  @override
  String get freeLapisAdDesc => 'Assista a um vídeo e ganhe +1.';

  @override
  String get watchAd => 'ASSISTIR';
}
