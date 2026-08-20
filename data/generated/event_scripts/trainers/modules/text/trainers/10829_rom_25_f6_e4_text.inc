	@ data/text/trainers.inc:2327 Route121_Text_JessicaRegister
	.globl gText_Rom_25F6E4
gText_Rom_25F6E4: @ 0x0825F6E4
	.string "きょうは てかげん してあげたのよ\nつぎは こうは いかないからね!{EOS}"
	.if (. - gText_Rom_25F6E4) > 0x23
	.error "gText_Rom_25F6E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F6E4) < 0x23
	.space 0x23 - (. - gText_Rom_25F6E4)
	.endif
