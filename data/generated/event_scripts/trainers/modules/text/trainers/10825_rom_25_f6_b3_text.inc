	@ data/text/trainers.inc:2321 Route121_Text_JessicaDefeat (+1 aliases)
	.globl gText_Rom_25F6B3
gText_Rom_25F6B3: @ 0x0825F6B3
	.string "ぷんぷん!\nなによ ほんき だしちゃって!{EOS}"
	.if (. - gText_Rom_25F6B3) > 0x16
	.error "gText_Rom_25F6B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F6B3) < 0x16
	.space 0x16 - (. - gText_Rom_25F6B3)
	.endif
