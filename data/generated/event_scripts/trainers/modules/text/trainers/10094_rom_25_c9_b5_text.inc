	@ data/text/trainers.inc:1256 Route113_Text_CobyPostBattle
	.globl gText_Rom_25C9B5
gText_Rom_25C9B5: @ 0x0825C9B5
	.string "そんなに あっさり かたれると\nなにを いって いいか わからない……$"
	.if (. - gText_Rom_25C9B5) > 0x24
	.error "gText_Rom_25C9B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C9B5) < 0x24
	.space 0x24 - (. - gText_Rom_25C9B5)
	.endif
