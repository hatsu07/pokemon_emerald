	@ data/text/trainers.inc:299 Route104_Text_DarianPostBattle
	.globl gText_Rom_25A29B
gText_Rom_25A29B: @ 0x0825A29B
	.string "おい なまえ まけ してるじゃないか\nおれの コイキングよ!{EOS}"
	.if (. - gText_Rom_25A29B) > 0x1f
	.error "gText_Rom_25A29B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A29B) < 0x1f
	.space 0x1f - (. - gText_Rom_25A29B)
	.endif
