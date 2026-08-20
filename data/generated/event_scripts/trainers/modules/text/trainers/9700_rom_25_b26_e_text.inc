	@ data/text/trainers.inc:698 Route109_Text_MelNotEnoughPokemon (+1 aliases)
	.globl gText_Rom_25B26E
gText_Rom_25B26E: @ 0x0825B26E
	.string "シキ『あたしたち ラブラブ だからね\nあたしたちの ポケモンも\l2ひき いっしょに たたかわせるんだ!{EOS}"
	.if (. - gText_Rom_25B26E) > 0x34
	.error "gText_Rom_25B26E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B26E) < 0x34
	.space 0x34 - (. - gText_Rom_25B26E)
	.endif
