	@ src/data/party_menu.h:796 party_menu_line_796 (+2 aliases)
	.globl gText_Rom_5DC0ED
gText_Rom_5DC0ED: @ 0x085DC0ED
	.string "つよさをみる{EOS}"
	.if (. - gText_Rom_5DC0ED) > 0x7
	.error "gText_Rom_5DC0ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC0ED) < 0x7
	.space 0x7 - (. - gText_Rom_5DC0ED)
	.endif
