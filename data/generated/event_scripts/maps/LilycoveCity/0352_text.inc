	@ data/maps/LilycoveCity/scripts.inc:433 LilycoveCity_Text_MayWontBeBeaten
	.globl gText_Rom_1E078B
gText_Rom_1E078B: @ 0x081E078B
	.string "ハルカ『あたしの そだてた ポケモンが\n{PLAYER}{KUN}の ポケモンに\lまけるわけ ないんだから!{EOS}"
	.if (. - gText_Rom_1E078B) > 0x2e
	.error "gText_Rom_1E078B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E078B) < 0x2e
	.space 0x2e - (. - gText_Rom_1E078B)
	.endif
