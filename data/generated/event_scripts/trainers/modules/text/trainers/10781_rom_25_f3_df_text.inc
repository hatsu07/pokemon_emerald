	@ data/text/trainers.inc:2255 Route121_Text_VanessaIntro (+1 aliases)
	.globl gText_Rom_25F3DF
gText_Rom_25F3DF: @ 0x0825F3DF
	.string "あたしの とっても プリティな\nポケモンを かわいがってよ!{EOS}"
	.if (. - gText_Rom_25F3DF) > 0x1f
	.error "gText_Rom_25F3DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F3DF) < 0x1f
	.space 0x1f - (. - gText_Rom_25F3DF)
	.endif
