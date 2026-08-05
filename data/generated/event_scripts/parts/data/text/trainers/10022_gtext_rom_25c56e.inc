	@ data/text/trainers.inc:1151 Route112_Text_ShaylaDefeat (+1 aliases)
	.globl gText_Rom_25C56E
gText_Rom_25C56E: @ 0x0825C56E
	.string "なんて つよいのかしら\nおねえさん おどろいちゃった!$"
	.if (. - gText_Rom_25C56E) > 0x1c
	.error "gText_Rom_25C56E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C56E) < 0x1c
	.space 0x1c - (. - gText_Rom_25C56E)
	.endif
