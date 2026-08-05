	@ src/strings.c:1146 gText_BattleWasRefused
	.globl gText_Rom_2C32E1
gText_Rom_2C32E1: @ 0x082C32E1
	.string "たいせんを ことわられました{PAUSE 60}$"
	.if (. - gText_Rom_2C32E1) > 0x12
	.error "gText_Rom_2C32E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C32E1) < 0x12
	.space 0x12 - (. - gText_Rom_2C32E1)
	.endif
