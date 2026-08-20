	@ data/text/trainers.inc:353 Route105_Text_AndresPostBattle
	.globl gText_Rom_25A4D2
gText_Rom_25A4D2: @ 0x0825A4D2
	.string "せかいじゅうの うみには\nまだまだ ひみつが あるはずだ!\lぜんぶ さがしまくるぞ!{EOS}"
	.if (. - gText_Rom_25A4D2) > 0x2b
	.error "gText_Rom_25A4D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A4D2) < 0x2b
	.space 0x2b - (. - gText_Rom_25A4D2)
	.endif
