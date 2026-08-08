	@ data/maps/SlateportCity/scripts.inc:1319 SlateportCity_Text_LetsRegisterEachOther
	.globl gText_Rom_1DD882
gText_Rom_1DD882: @ 0x081DD882
	.string "エニシダ『……よっし!\nきみとは なかよく なれそう だから\lおたがい ポケナビに\lなまえを とうろく しておこう!\p…… …… ……$"
	.if (. - gText_Rom_1DD882) > 0x44
	.error "gText_Rom_1DD882 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD882) < 0x44
	.space 0x44 - (. - gText_Rom_1DD882)
	.endif
