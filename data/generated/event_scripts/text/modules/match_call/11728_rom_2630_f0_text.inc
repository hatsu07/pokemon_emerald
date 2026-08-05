	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_2630F0
gText_Rom_2630F0: @ 0x082630F0
	.string "きみは　ポケモンはかせ　としても\nゆうしゅう　なんだな$"
	.if (. - gText_Rom_2630F0) > 0x1c
	.error "gText_Rom_2630F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2630F0) < 0x1c
	.space 0x1c - (. - gText_Rom_2630F0)
	.endif
