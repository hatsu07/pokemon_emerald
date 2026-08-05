	@ data/text/cable_club.inc:178 CableClub_Text_NoEnigmaBerryInUnionRoom
	.globl gText_Rom_24810A
gText_Rom_24810A: @ 0x0824810A
	.string "{STR_VAR_1}のみを もっている\nポケモンを おもちの かたは\lユニオンルームには はいれません…$"
	.if (. - gText_Rom_24810A) > 0x2d
	.error "gText_Rom_24810A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24810A) < 0x2d
	.space 0x2d - (. - gText_Rom_24810A)
	.endif
