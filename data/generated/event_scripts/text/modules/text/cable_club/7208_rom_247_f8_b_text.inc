	@ data/text/cable_club.inc:114 CableClub_Text_YouHaveAMonThatCantBeTaken
	.globl gText_Rom_247F8B
gText_Rom_247F8B: @ 0x08247F8B
	.string "てもちに つれていけない\nポケモンが います$"
	.if (. - gText_Rom_247F8B) > 0x17
	.error "gText_Rom_247F8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247F8B) < 0x17
	.space 0x17 - (. - gText_Rom_247F8B)
	.endif
