	@ data/text/trainers.inc:1934 Route118_Text_DeandrePostBattle
	.globl gText_Rom_25E662
gText_Rom_25E662: @ 0x0825E662
	.string "ボクの ポケモン せんたい\nカッコいい だろー!\lまね しても いーぜー!$"
	.if (. - gText_Rom_25E662) > 0x26
	.error "gText_Rom_25E662 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E662) < 0x26
	.space 0x26 - (. - gText_Rom_25E662)
	.endif
