	@ data/text/trainers.inc:2999 Route128_Text_KatelynDefeat (+1 aliases)
	.globl gText_Rom_2612A1
gText_Rom_2612A1: @ 0x082612A1
	.string "ポケモンしょうぶも かこく よね……$"
	.if (. - gText_Rom_2612A1) > 0x13
	.error "gText_Rom_2612A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2612A1) < 0x13
	.space 0x13 - (. - gText_Rom_2612A1)
	.endif
