	@ data/text/trainers.inc:196 Route104_Text_MiaPostBattle
	.globl gText_Rom_259DB8
gText_Rom_259DB8: @ 0x08259DB8
	.string "ミオ『もっと ポケモン そだてて\n{STR_VAR_1} みたいに つよく なるです!"
	.byte EOS
	.if (. - gText_Rom_259DB8) > 0x23
	.error "gText_Rom_259DB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259DB8) < 0x23
	.space 0x23 - (. - gText_Rom_259DB8)
	.endif
