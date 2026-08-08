	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:387 RivalsHouse_1F_Text_BrendanWhoAreYou (+1 aliases)
	.globl gText_Rom_1F0F62
gText_Rom_1F0F62: @ 0x081F0F62
	.string "おまえ……\pだれ?\pあっ おまえが となりに\nひっこして きた {PLAYER}か……\pふうん\nおんなのこ だったんだ……\pとうさん…… オダマキはかせ から\nとなりに ひっこして くるのは\lジムリーダーの こども って きいてたから\lかってに おとこ だと おもってたよ\pオレは ユウキ\nまあ おとなりさんに なったことだし\lこれから よろしくな\pおや? {PLAYER}は\nポケモン もってないのか?\pよかったら オレが\nつかまえてきて やろうか?\pって わすれてた……\pオレ とうさんの てつだいで\nやせいの ポケモン\lつかまえに いく ところ だったんだ\pでかける したくを するから\n{PLAYER} また こんどな!$"
	.if (. - gText_Rom_1F0F62) > 0x129
	.error "gText_Rom_1F0F62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0F62) < 0x129
	.space 0x129 - (. - gText_Rom_1F0F62)
	.endif
