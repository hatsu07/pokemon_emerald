	@ data/text/cable_club.inc:250 CableClub_Text_UseBerryCrush
	.globl gText_Rom_248521
gText_Rom_248521: @ 0x08248521
	.string "きのみクラッシュを しますか?$"
	.if (. - gText_Rom_248521) > 0x10
	.error "gText_Rom_248521 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248521) < 0x10
	.space 0x10 - (. - gText_Rom_248521)
	.endif
