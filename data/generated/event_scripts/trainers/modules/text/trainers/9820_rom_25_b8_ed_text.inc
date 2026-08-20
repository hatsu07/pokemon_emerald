	@ data/text/trainers.inc:863 Route110_Text_IsabelRematchPostBattle
	.globl gText_Rom_25B8ED
gText_Rom_25B8ED: @ 0x0825B8ED
	.string "ポケモンじまんも やめられないけど\nしょうぶ するのも すきなのよ!{EOS}"
	.if (. - gText_Rom_25B8ED) > 0x23
	.error "gText_Rom_25B8ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B8ED) < 0x23
	.space 0x23 - (. - gText_Rom_25B8ED)
	.endif
