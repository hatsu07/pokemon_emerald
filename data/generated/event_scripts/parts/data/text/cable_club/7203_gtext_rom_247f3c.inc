	@ data/text/cable_club.inc:108 CableClub_Text_NotSetUpForFarAwayRegion
	.globl gText_Rom_247F3C
gText_Rom_247F3C: @ 0x08247F3C
	.string "おきゃくさま\nもうしわけ ありません\pとおい ちほうの かたと\nポケモンを こうかん することは\lいまは できません…$"
	.if (. - gText_Rom_247F3C) > 0x3c
	.error "gText_Rom_247F3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247F3C) < 0x3c
	.space 0x3c - (. - gText_Rom_247F3C)
	.endif
