	@ data/text/cable_club.inc:23 CableClub_Text_NeedTwoMonsToTrade
	.globl gText_Rom_247C3E
gText_Rom_247C3E: @ 0x08247C3E
	.string "こうかんでは 2ひき いじょうの\nてもちが ひつようです$"
	.if (. - gText_Rom_247C3E) > 0x1d
	.error "gText_Rom_247C3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C3E) < 0x1d
	.space 0x1d - (. - gText_Rom_247C3E)
	.endif

	@ data/text/cable_club.inc:26 CableClub_Text_CantTradeEnigmaBerry
	.globl gText_Rom_247C5B
gText_Rom_247C5B: @ 0x08247C5B
	.string "{STR_VAR_1}のみを もっている\nポケモンは こうかん できません!$"
	.if (. - gText_Rom_247C5B) > 0x1e
	.error "gText_Rom_247C5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C5B) < 0x1e
	.space 0x1e - (. - gText_Rom_247C5B)
	.endif
