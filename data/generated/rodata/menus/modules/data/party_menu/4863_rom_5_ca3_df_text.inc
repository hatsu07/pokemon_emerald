	@ src/data/party_menu.h:807 party_menu_line_807 (+1 aliases)
	.globl gText_Rom_5CA3DF
gText_Rom_5CA3DF: @ 0x085CA3DF
	.string "いれかえ$"
	.if (. - gText_Rom_5CA3DF) > 0x5
	.error "gText_Rom_5CA3DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3DF) < 0x5
	.space 0x5 - (. - gText_Rom_5CA3DF)
	.endif
