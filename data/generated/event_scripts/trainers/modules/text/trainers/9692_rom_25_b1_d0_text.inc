	@ data/text/trainers.inc:686 Route109_Text_PaulNotEnoughPokemon (+1 aliases)
	.globl gText_Rom_25B1D0
gText_Rom_25B1D0: @ 0x0825B1D0
	.string "リキ『ぼくたち ラブラブ だからね\nぼくたちの ポケモンも\l2ひき いっしょに たたかわせるんだ!$"
	.if (. - gText_Rom_25B1D0) > 0x32
	.error "gText_Rom_25B1D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B1D0) < 0x32
	.space 0x32 - (. - gText_Rom_25B1D0)
	.endif
