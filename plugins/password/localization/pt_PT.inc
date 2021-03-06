<?php

/*
 +-----------------------------------------------------------------------+
 | Localization file of the Roundcube Webmail Password plugin            |
 |                                                                       |
 | Copyright (C) The Roundcube Dev Team                                  |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/plugin-password/
*/

$labels['changepasswd']  = 'Alterar palavra-passe';
$labels['curpasswd']  = 'Palavra-passe actual:';
$labels['newpasswd']  = 'Nova palavra-passe:';
$labels['confpasswd']  = 'Confirmar palavra-passe:';
$messages['nopassword'] = 'Introduza a nova palavra-passe.';
$messages['nocurpassword'] = 'Introduza a palavra-passe actual.';
$messages['passwordincorrect'] = 'Palavra-passe actual incorrecta.';
$messages['passwordinconsistency'] = 'As palavras-passe não combinam, tente novamente.';
$messages['crypterror'] = 'Não foi possível gravar a nova palavra-passe. Função de criptografia inexistente.';
$messages['connecterror'] = 'Não foi possível gravar a nova palavra-passe. Erro de ligação.';
$messages['internalerror'] = 'Não foi possível gravar a nova palavra-passe.';
$messages['passwordshort'] = 'A palavra-passe deve ter pelo menos $length caracteres';
$messages['passwordweak'] = 'A palavra-passe deve incluir pelo menos um número e um sinal de pontuação.';
$messages['passwordtooweak'] = 'Palavra-passe demasiado fraca';
$messages['passwordnoseq'] = 'A palavra-passe não deve ser uma sequência como 123456 ou QWERTY.';
$messages['passwordnocommon'] = 'A palavra-passe não deve ser uma palavra ou nome comum.';
$messages['passwordforbidden'] = 'A palavra-passe contém caracteres não suportados.';
$messages['firstloginchange'] = 'Este é o seu primeiro acesso. Por favor, altere a sua palavra-passe.';
$messages['disablednotice'] = 'O sistema está em manutenção e a alteração da password não é possível neste momento. Tudo deve volta ao normal em breve. Pedimos desculpas por qualquer inconveniente.';
$messages['passwinhistory'] = 'Esta palavra-passe já foi usada anteriormente.';
$messages['samepasswd'] = 'A nova palavra-passe tem de ser diferente da antiga.';
$messages['passwdexpirewarning'] = 'Aviso! A sua palavra-passe irá expirar em breve. Deve alterá-la antes de $expirationdatetime.';
$messages['passwdexpired'] = 'A sua palavra-passe expirou. Tem de alterá-la agora!';
$messages['passwdconstraintviolation'] = 'Violação da limitação de palavra-passe. Palavra-passe provavelmente muito fraca.';
$messages['pwned_mustnotbedisclosed'] = 'A palavra-passe não deve ser&nbsp;<a href="https://haveibeenpwned.com/Passwords" target="_blank">vulgarmente conhecida</a>.';
$messages['pwned_isdisclosed'] = 'Esta palavra-passe é vulgarmente conhecida.';
$messages['pwned_fetcherror'] = 'Falha ao verificar a força da palavra-passe.';
