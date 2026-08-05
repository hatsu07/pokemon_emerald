	@ data/text/berries.inc:40 Route114_Text_TryBerryCrushWithFriends
	.globl gText_Rom_26393D
gText_Rom_26393D: @ 0x0826393D
	.string "きみも ともだちと\nきのみクラッシュ やってみなよ!$"
	.if (. - gText_Rom_26393D) > 0x1b
	.error "gText_Rom_26393D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26393D) < 0x1b
	.space 0x1b - (. - gText_Rom_26393D)
	.endif
