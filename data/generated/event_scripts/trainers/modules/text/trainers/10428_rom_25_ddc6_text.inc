	@ data/text/trainers.inc:1739 Route117_Text_DylanPostRematch
	.globl gText_Rom_25DDC6
gText_Rom_25DDC6: @ 0x0825DDC6
	.string "およぎと じてんしゃでは トップだったけど\nポケモンは いまいち じしんが ないよ$"
	.if (. - gText_Rom_25DDC6) > 0x2a
	.error "gText_Rom_25DDC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DDC6) < 0x2a
	.space 0x2a - (. - gText_Rom_25DDC6)
	.endif
