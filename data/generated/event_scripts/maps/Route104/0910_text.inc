	@ data/maps/Route104/scripts.inc:1154 Route104_Text_BrendanIntro (+1 aliases)
	.globl gText_Rom_1E8109
gText_Rom_1E8109: @ 0x081E8109
	.string "ユウキ『トレーナーに なりたて だって\nてかげんは しないからな!{EOS}"
	.if (. - gText_Rom_1E8109) > 0x22
	.error "gText_Rom_1E8109 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8109) < 0x22
	.space 0x22 - (. - gText_Rom_1E8109)
	.endif
