	@ data/text/trainers.inc:1961 Route119_Text_TaylorPostBattle
	.globl gText_Rom_25E76C
gText_Rom_25E76C: @ 0x0825E76C
	.string "うーん しょうぶの しょうはい だけは\nマネ できないよなあ……\lなんか くやしい……{EOS}"
	.if (. - gText_Rom_25E76C) > 0x2c
	.error "gText_Rom_25E76C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E76C) < 0x2c
	.space 0x2c - (. - gText_Rom_25E76C)
	.endif
