	@ data/maps/Route104/scripts.inc:1154 Route104_Text_BrendanIntro (+1 aliases)
	.globl gText_Rom_1DFA53
gText_Rom_1DFA53: @ 0x081DFA53
	.string "ユウキ『トレーナーに なりたて だって\nてかげんは しないからな!{EOS}"
	.if (. - gText_Rom_1DFA53) > 0x22
	.error "gText_Rom_1DFA53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFA53) < 0x22
	.space 0x22 - (. - gText_Rom_1DFA53)
	.endif
