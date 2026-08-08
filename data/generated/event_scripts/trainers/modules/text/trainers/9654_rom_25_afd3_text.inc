	@ data/text/trainers.inc:629 Route109_Text_LolaIntro (+1 aliases)
	.globl gText_Rom_25AFD3
gText_Rom_25AFD3: @ 0x0825AFD3
	.string "ビーチパラソルって\nおおきな おはな みたいよねー!$"
	.if (. - gText_Rom_25AFD3) > 0x1b
	.error "gText_Rom_25AFD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AFD3) < 0x1b
	.space 0x1b - (. - gText_Rom_25AFD3)
	.endif
