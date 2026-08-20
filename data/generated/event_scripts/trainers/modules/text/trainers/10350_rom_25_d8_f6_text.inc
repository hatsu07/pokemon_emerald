	@ data/text/trainers.inc:1625 Route116_Text_KarenPostBattle
	.globl gText_Rom_25D8F6
gText_Rom_25D8F6: @ 0x0825D8F6
	.string "ああん! これじゃ ツツジさまのように\nエレガントな トレーナーに なれないわ!{EOS}"
	.if (. - gText_Rom_25D8F6) > 0x29
	.error "gText_Rom_25D8F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D8F6) < 0x29
	.space 0x29 - (. - gText_Rom_25D8F6)
	.endif
