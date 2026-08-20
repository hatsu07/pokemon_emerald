	@ data/text/trainers.inc:1679 Route117_Text_IsaacIntro (+1 aliases)
	.globl gText_Rom_25DB1F
gText_Rom_25DB1F: @ 0x0825DB1F
	.string "オレが そだてている ポケモンと\nしょうぶ してくれないか?{EOS}"
	.if (. - gText_Rom_25DB1F) > 0x1f
	.error "gText_Rom_25DB1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DB1F) < 0x1f
	.space 0x1f - (. - gText_Rom_25DB1F)
	.endif
