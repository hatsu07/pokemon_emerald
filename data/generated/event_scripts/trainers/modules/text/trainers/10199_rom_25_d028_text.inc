	@ data/text/trainers.inc:1412 Route114_Text_KaiPostBattle
	.globl gText_Rom_25D028
gText_Rom_25D028: @ 0x0825D028
	.string "よっしゃー!\nもっと おおきいの つるもんね!$"
	.if (. - gText_Rom_25D028) > 0x18
	.error "gText_Rom_25D028 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D028) < 0x18
	.space 0x18 - (. - gText_Rom_25D028)
	.endif
